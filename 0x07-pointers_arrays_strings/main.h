#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
/**
*void prototypes(void)
*int prototypes(int)
*char prototypes(char)
*/
unsigned int _strspn(char *s, char *accept);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);

#endif /* MAIN_H */