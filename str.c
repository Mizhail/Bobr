#include "str.h"

int input(char *str){
    int size = 0;
    char x = 1;
    while(x != '\n'){
        if(scanf("%c", &x) == 1 && x != '\n'){
            size += 1;
            str = realloc(str, size * sizeof(char));
            str[size - 1] = x;
        }
    }
    return size;
}

void output(char *str, int size){
    for(int i = 0; i < size; i++){
        printf("%c", str[i]);
    }
    printf("\n");

}

char *addString(char *str, int *sizeStr, char *subStr){
    int sizeSub = 0;
    for(int i = 0; subStr[i] != 0; i++){
        sizeSub += 1;
    }
    *sizeStr += sizeSub;
    str = realloc(str, *sizeStr * sizeof(char));
    for(int i = 0; i < sizeSub; i++){
        str[*sizeStr - sizeSub + i] = subStr[i];
    }
    
    return str;
}

char *addStringPart(char *str, int *sizeStr, char *subStr, int sizePart){
    *sizeStr += sizePart;
    str = realloc(str, *sizeStr * sizeof(char));
    for(int i = 0; i < sizePart; i++){
        str[*sizeStr - sizePart + i] = subStr[i];
    }
    return str;
}
