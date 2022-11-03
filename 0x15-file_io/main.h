#ifndef FILEIO_H
#define FILEIO_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/*A function that reads a text file and prints it to the standard output*/
ssize_t read_textfile(const char *filename, size_t letters);
/*A function that creates a file*/
int create_file(const char *filename, char *text_content);
/*A function that appends text at the ned of a file*/
int append_text_to_file(const char *filename, char *text_content);
#endif
