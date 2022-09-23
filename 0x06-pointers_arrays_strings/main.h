#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
<<<<<<< HEAD
*void prototypes()
*int prototypes()
*char prototypes()
*/
void reverse_array(int *a, int n);
void print_number(int n);
void print_buffer(char *b,int size);
int_strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src)
char *_strncat(char *dest, char *8src, int n);
char *strncpy(char *dest, char *src, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char * rot13(char *);
=======
 *void prototypes()
 *int prototypes()
 *char prototypes()
 */
void reverse_array(int *a, int n);
void print_number(int n);
void print_buffer(char *b, int size);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
>>>>>>> 85e393ee8d844ec3d93891a07064939b97312233
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *add_strings(char *n1, char *n2, char *r, int r_index);

#endif /*MAIN_H*/
