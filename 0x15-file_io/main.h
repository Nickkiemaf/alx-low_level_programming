#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int create_file(const char *filename, char *text_content);
char *create_buffer(char *file);
void close_file(int fd);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
