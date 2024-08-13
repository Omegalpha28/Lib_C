CC			=	gcc

FLAG		=	-g3	\
				-Wall	\
				-Wextra
FLAG		+=	-I./include	\
				-lm

#! WINDOWS ONLY
#FLAG		+=	-LC:\MinGW\lib

FILE_O = *.o
LIBMY_A = libmy.a
NAME = libC

E_C_FC_ROOT = 	./functions_created/

FC_NAME		=	$(E_C_FC_ROOT)function_created.a

E_C_FC		= 	$(E_C_FC_ROOT)my_char_is_printable.c \
				$(E_C_FC_ROOT)my_str_to_word_array.c \
				$(E_C_FC_ROOT)numlen.c \
				$(E_C_FC_ROOT)skip_spaces.c \
				$(E_C_FC_ROOT)skipstr.c \
				$(E_C_FC_ROOT)word_counter.c

FC_OBJECTS	=	$(E_C_FC:.c=.o)


E_C_SL_ROOT	=	./standard_lib_c/

SL_NAME		=	$(E_C_SL_ROOT)standard_lib_c.a

E_C_SL		=	$(E_C_SL_ROOT)my_putchar.c \
				$(E_C_SL_ROOT)my_putnbr.c \
				$(E_C_SL_ROOT)my_puts.c \
				$(E_C_SL_ROOT)my_strcat.c \
				$(E_C_SL_ROOT)my_strcmp.c \
				$(E_C_SL_ROOT)my_strcpy.c \
				$(E_C_SL_ROOT)my_strlen.c \
				$(E_C_SL_ROOT)my_strrev.c \
				$(E_C_SL_ROOT)my_strdup.c \
				$(E_C_SL_ROOT)my_swap.c

SL_OBJECTS	=	$(E_C_SL:.c=.o)

PRINT_OK	=	echo -ne "\033[0m\033[104m[👍]\033[0m '$<'\033[1K\r"
PRINT_KO	=	echo -e "\033[0m\033[103m[👎]\033[0m '$<'"
GREP_STATUS	=	grep -q "warning:" && $(PRINT_KO) || $(PRINT_OK)

ECHO = @echo
AR = @ar
cc = @$(CC)

FIND		=	@find -type f -iname
RM			=	@rm -f

all: $(NAME)

%.o: %.c
	$(ECHO) -ne "\033[104m[🙏]\033[0m '$<' \r"
	$(ECHO) -ne "\033[0;33m"
	$(cc) $(FLAG) -c $< -o $@ 2>&1 | tee /dev/tty | $(GREP_STATUS)

build_FC: $(FC_OBJECTS)
				$(ECHO) -ne "\033[104m[✅]\033[0m All function created (FC) by me have been compiled\n"
				$(ECHO) -e "\033[106m[⚒️]\033[0m Building FC."
				$(ECHO) -e "\033[105m[🏁]\033[0m $(FLAG)"
				$(AR) -rc $(FC_NAME) $(FC_OBJECTS)
				$(ECHO) -e "\033[102m[✅]\033[0m FC builded!"


build_SL: $(SL_OBJECTS)
				$(ECHO) -ne "\033[104m[✅]\033[0m All standard functions (SL) have been compiled\n"
				$(ECHO) -e "\033[106m[⚒️]\033[0m Building SL."
				$(ECHO) -e "\033[105m[🏁]\033[0m $(FLAG)"
				$(AR)  -rc $(SL_NAME) $(SL_OBJECTS)
				$(ECHO) -e "\033[102m[✅]\033[0m SL builded!"

clean:
	$(FIND) "*.o" -delete
	$(FIND) "*.a" -delete

fclean: clean
	$(RM) $(P_NAME)

re: fclean all

RUN: build_FC build_SL
				$(ECHO) -ne "\033[104m[✅]\033[0m All functions have been compiled\n"
				$(ECHO) -e "\033[106m[⚒️]\033[0m Building program"
				$(ECHO) -e "\033[105m[🏁]\033[0m $(FLAG)"
				$(cc) $(FLAG) -o $(NAME) main.c $(SL_NAME) $(FC_NAME)
				$(ECHO) -e "\033[102m[✅]\033[0m Program builded"
				$(clean)

$(NAME): RUN




