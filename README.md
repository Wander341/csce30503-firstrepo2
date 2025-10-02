[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/sMD0Cvb9)
# Assignment Two - String Library Functions

## Introduction
One of the best ways to understand how to use pointers and work with strings in C, is to write your own version of the functions in the C Standard Library.  This will provide an excellent understanding of using and implementing null-terminated strings and **using pointer syntax**.  Your one restriction is that you cannot use functions from the **string.h** library in C. For this assignment you will write your own implementation of the following functions:

* int Strlen(char *str)
* int Strncpy(char *dest, char *src, int max)
* char *Strcat(char *dest, char *src)
* char *Strchr(char *str, char c)
* int strcmp(char *str1, char *str2)

---

**Test each of your functions using the main() function.**  Code your main function so that you can *redirect standard input into your program for testing your function*. Your function should output the test information the specified format for the problem. Create a makefile in the directory for compiling the program.

<hr>

### Problem One - Strlen  (Find the length of a string)

#### int Strlen(char *str)

**Description:** The Strlen() function calculates the length of the string pointed to by str, excluding the terminating null byte ('\0').

**Return Value:** The strlen() function returns the number of bytes in the string pointed to by str.

**Main() test function** output format:
```
String:Length
```

<hr>

### Problem Two - Strncpy (Copy a string to another string)

#### int Strncpy(char *dest, char *src, int max)

**Description:** The Strncpy() function shall copy not more than max bytes (bytes that follow a NUL character are not copied) from the array pointed to by src to the array pointed to by dest.

If the array pointed to by src is a string that is shorter than max bytes, NUL characters shall be appended to the copy in the array pointed to by dest, until max bytes in all are written. If copying takes place between objects that overlap, the behavior is undefined.

**Return Value:** The strncpy() function shall return dest. No return values are reserved to indicate an error.

**Main() test function** output format:
```
Source String:Destination String
```

<hr>

### Problem Three - Strcat  (Concatenate a string to the end of another string)

#### char *Strcat(char *dest, char *src)

**Description:** The strcat() function appends the src string to the dest string, overwriting the terminating null byte ('\0') at the end of dest, and then adds a terminating null byte.  The strings may not overlap, and the dest string must have enough space for the result.  If dest is not large enough, program behavior is unpredictable; buffer overruns are a favorite avenue for attacking secure programs.

**Return Value:**  The strcat() function return a pointer to the resulting string dest.

**Main() test function** output format:
```
Dest String Before Concat:Source String:Dest String After Concat
```

<hr>

### Problem Four - Strchr (Search a string for the first occurence of a character)

#### char *Strchr(char *str, char c)

**Description:** The strchr() function returns a pointer to the first occurrence of the character c in the string str.

**Return Value:**  The strchr() function returns a pointer to the matched character or NULL if the character is not found.  The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.

**Main() test function** output format:
```
String:Remainder of String from found character
```

<hr>

### Problem Five - Strcmp (Compare two strings)

#### int strcmp(char *str1, char *str2)

**Description:** The strcmp() function compares the two strings str1 and str2. The comparison is done using unsigned characters.

strcmp() returns an integer indicating the result of the comparison, as follows:

* 0, if the str1 and str2 are equal;

* a negative value if str1 is less than str2;

* a positive value if str1 is greater than str2.

**Return Value:**  The strcmp() function returns an integer less than, equal to, or greater than zero if str1 (or the first n bytes thereof) is found, respectively, to be less than, to match, or be greater than str2.

**Main() test function** output format:
```
String1:String2:Strcmp Return Value
```

