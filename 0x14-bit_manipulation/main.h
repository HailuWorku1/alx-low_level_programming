#ifndef MAIN_H
#define MAIN_H
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct copy_struct
{
	char *from;
	char *to;
	ssize_t rd;
	ssize_t wt;
	int from_file;
	int to_file;
	char *buffer;
} copy_struct;
ssize_t read_textfile(const char *filename, size_t letters);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
