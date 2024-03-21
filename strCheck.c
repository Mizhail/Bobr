#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    char str1[300] = "Hello";
    char *str2 = " World";
    strcat(str1, str2);
    
    printf("%s", str1);
}