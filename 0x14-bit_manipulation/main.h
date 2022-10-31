#ifndef BITS_H
#define BITS_H
/*A program that converts from binary to an integer*/
unsigned int binary_to_uint(const char *b);
/*A program that gets the bit of an index*/
int get_bit(unsigned long int n, unsigned int index);
/*A function that sets the value of a bit to 1*/
int set_bit(unsigned long int *n, unsigned int index);
/*A function that sets the value of a bit to 0*/
int clear_bit(unsigned long int *n, unsigned int index);
#endif
