#ifndef MAIN_H 
#define MAIN_H 

#include "stdio.h" 
int _putchar(char c); 
 
int _isupper(int c); 
int _isdigit(int c); 
int _atoi(char *s); 
int _strlen(char *s); 
void _puts(char *str); 
char *_strcpy(char *dest, char *src); 
char *_strcat(char *dest, char *src); 
char *_strncat(char *dest, char *src, int n); 
char *_strncpy(char *dest, char *src, int n); 
char *_memset(char *c, char b, unsigned int n); 
char *_memcpy(char *destination, char *mem, unsigned int n); 
char *_strchr(char *s, char c); 
unsigned int _strspn(char *s, char *accept); 
char *_strpbrk(char *s, char *accept); 
char *_strstr(char *haystack, char *needle); 
char *_strstr(char *haystack, char *needle); 
int _isalpha(int c); 
int _abs(int n); 
int _strcmp(char *s1, char *s2); 
 
#endif /* MAIN_H */
