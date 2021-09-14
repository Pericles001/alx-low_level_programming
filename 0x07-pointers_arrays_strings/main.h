#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdio.h>
/**
*void prototypes(void)
*int prototypes(int)
*char prototypes(char)
*/
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
unsigned int _strspn(char *s, char *accept);
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
#endif /* MAIN_H */