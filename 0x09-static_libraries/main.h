/*A function that prints out characters*/
int _putchar(char c);
/*A function which checks if c in uppercase and lowercase. Returns 1 if true and 0 if false*/
int _islower(int c);
/*A function that checks for an alphabetic character*/
int _isalpha(int c);
/*A program that prints the absolute value of an integer*/
int _abs(int n);
/*This function checks whether a character is in uppercase*/
int _isupper(int c);
/*This function checks wherther a character is a letter or a number*/
int _isdigit(int c);
/*A function gets character string*/
int _strlen(char *s);
/*A function that prints a string*/
void _puts(char *s);
/*A function that copies a sring from source to destination*/
char *_strcpy(char *dest, char *src);
/*A function that converts a string to an integer*/
int _atoi(char *s);
/*A function that concatenetes two strings*/
char *_strcat(char *dest, char *src);
/* A function that concatenetes two strings*/
char *_strncat(char *dest, char *src, int n);
/*A function which copies a string*/
char *_strncpy(char *dest, char *src, int n);
/*A function that compares two strings*/
int _strcmp(char *s1, char *s2);
/*A function that fills the memory with a value*/
char *_memset(char *s, char b, unsigned int n);
/*A function that copies out memory area*/
char *_memcpy(char *dest, char *src, unsigned int n);
/*A function that locates a character in a string*/
char *_strchr(char *s, char c);
/*A function that finds the length of a prefix*/
unsigned int _strspn(char *s, char *accept);
/*A function that searches for a string*/
char *_strpbrk(char *s, char *accept);
/*A function that locates a sub string*/
char *_strstr(char *haystack, char *needle);

