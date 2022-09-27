/*This function outputs characters*/
int _putchar(char c);
/*A function that fills the memory with a constant byte*/
char *_memset(char *s, char b, unsigned int n);
/*A function that copies memory area*/
char *_memcpy(char *dest, char *src, unsigned int n);
/*A function that locates a character in a string*/
char *_strchr(char *s, char c);
/*A function that gets the length of a prefix sub string*/
unsigned int _strspn(char *s, char *accept);
/*A function that searches for a string*/
char *_strpbrk(char *s, char *accept);
/*A function that locates a sub string*/
char *_strstr(char *haystack, char *needle);
/*A function that prints a chess board*/
void print_chessboard(char (*a)[8]);
/*A function that prints the sum of two diagonals*/
void print_diagsums(int *a, int size);

