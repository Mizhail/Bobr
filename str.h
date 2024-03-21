#include <stdlib.h>
#include <stdio.h>
// #include <string.h>

int input(char *str);
void output(char *str, int size);
char *addString(char *str, int *sizeStr, char *subStr);
char *addStringPart(char *str, int *sizeStr, char *subStr, int sizePart);
int compare(char *str1, char *str2);