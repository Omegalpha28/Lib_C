<h1> Lib_C </h1>

<h2>Repository info ℹ️</h2>
<div>
    <img src="https://api.visitorbadge.io/api/VisitorHit?user=Omegalpha28&repo=Lib_C&countColor=%237B1E7A" height="30px"/>
    <img alt="GitHub repo size" src="https://img.shields.io/github/repo-size/Omegalpha28/Lib_C?color=082DEA&logo=github&style=for-the-badge&logoColor=181717" height="30px">
    <img alt="Last commit" src="https://img.shields.io/github/last-commit/Omegalpha28/Lib_C?color=082DEA&logo=git&logoColor&style=for-the-badge" height="30px">
    <img alt="GitHub forks" src="https://img.shields.io/github/forks/Omegalpha28/Lib_C?color=082DEA&logo=github&style=for-the-badge&logoColor=181717" height="30px">
    <img alt="GitHub Repo stars" src="https://img.shields.io/github/stars/Omegalpha28/Lib_C?color=082DEA&logo=github&style=for-the-badge&logoColor=181717" height="30px">
</div>


<h2> functions created </h2>
<div> <ul>
<li>my_char_is_printable = This function checks if a character is printable (not a control character), returning 0 if it is, and 1 otherwise.</li>
<li>my_compute_factorial_it = This function calculates the factorial of a non-negative integer the number given iteratively and computing the factorial for values between 1 and 12. For values outside this range, it returns 0.</li>
<li>my_compute_factorial_rec = Same as the previous one but implemented recursively.</li>
<li>my_compute_power_it = This function calculates the number given raised to the power of p iteratively. It returns 0 for negative powers or when the result overflows the integer range. For non-negative powers, it computes the result, returning 1 for p equal to 0 and 0 if the number given is 0.</li>
<li>my_compute_power_rec = Same as the previous one but implemented recursively.</li>
<li>my_compute_square_root = This function calculates the square root of a non-negative integer using an iterative approach. It returns the integer square root if it exists, and 0 if nb is negative or not a perfect square. Special case: it returns 1 if the number given is 1.</li>
<li>my_find_prime_sup = This function finds the smallest prime number greater than or equal to nb. It uses "using_task06" to check for primality, incrementing number until a prime number is found, then returns that prime number.</li>
<li>my_is_prine = This function determines if nb is a prime number. It returns 1 if nb is prime and 0 otherwise. It handles special cases for even numbers and numbers less than 2, and it uses wh_is_prime to check for divisibility by numbers starting from 3.</li>
<li>my_str_to_word_array = This function, takes a string word and splits it into an array of words. Each word is separated by spaces or tabs, and the resulting array of words is returned.</li>
<li>numlen = The function is intended to return the number of digits in the integer n, including handling negative numbers.</li>
<li>skip_spaces = The function skip_spaces is designed to skip over leading spaces and tab characters in a string, returning a pointer to the first non-whitespace character or the end of the string if it only contains whitespace.</li>
<li>skipstr = The function is intended to skip over a portion of a string up to a specified delimiter and then optionally handle a newline character.</li>
<li>wacpy = The function copies a 2D array of strings (char **tab) into a new 2D array (array), allocating memory dynamically for each string and preserving its content up to, but not including, newline characters.</li>
<li>walen = The function returns the number of rows in a 2D array of strings (char **warray).</li>
<li>word_counter = The word_counter function is designed to count the number of words in a string based on spaces as delimiters.</li>
</ul> </div>

<h2> Standard Library C </h2>
<div> <ul>
<li>my_strdup = The function creates a duplicate of the input string src by allocating memory for a new string and copying the contents of src into it.</li>
<li>my_putchar = The function is a simple utility function that writes a single character to the standard output (typically the terminal).</li>
<li>my_put_nbr = This function recursively prints an integer to the terminal and returns the number of digits in the number.</li>
<li>my_putstr = This function prints a string to the terminal, one character at a time, until it reaches the null terminator.</li>
<li>my_strcat = This function concatenates the source string (src) to the end of the destination string (dest) and returns the resulting combined string.</li>
<li>my_strcmp = This function compares two strings (s1 and s2) character by character. It returns the difference between the first pair of characters that are not the same, or zero if the strings are equal.</li>
<li>my_strcpy = This function copies the string str into the dest buffer, including the null terminator, and returns the dest pointer.</li>
<li>my_strdup = This function duplicates the string src by allocating memory for a new string, copying the contents of src into it, and returning a pointer to the newly allocated string.</li>
<li>my_strlen = This function calculates the length of the string str by counting the number of characters until it reaches the null terminator \0 and returns the length.</li>
<li>my_strncmp = The function compares up to len characters of two strings s1 and s2. It returns the difference between the first differing characters, or 0 if the strings are equal within the given length.</li>
<li>my_strncpy = The function copies up to n characters from the source string str to the destination string dest. If the source string is shorter than n characters, the destination string is null-terminated after the copied characters.</li>
<li>my_strndup = The function create substrings from a given input, either by trimming leading spaces and copying a specified range or by copying from a start point to the end of the string.</li>
<li>my strrev = This function reverses the string str in place by swapping characters from the beginning and end towards the center. It returns the modified string.</li>
<li>my_swap = This function swaps the values of two integers pointed to by a and b using a temporary variable.</li>
</ul> </div>
