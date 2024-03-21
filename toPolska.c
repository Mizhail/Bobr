#include "toPolska.h"

char *checkSymbol(char *equ, int *position, char *symbol){
    if((equ[*position] >= 48 && equ[*position] <= 57) 
       || equ[*position] == '.' 
       || equ[*position] == 'x'
       || equ[*position] == '+'
       || equ[*position] == '-'
       || equ[*position] == '*'
       || equ[*position] == '/'
       || equ[*position] == '('
       || equ[*position] == ')'){
        symbol[0] = equ[*position];
        symbol[1] = 0;
        *position += 1;
    }
    else if(equ[*position] == 's' && equ[*position + 1] == 'i'){
        symbol[0] = 's';
        symbol[1] = 'i';
        symbol[2] = 'n';
        symbol[3] =  0 ;
        *position += 3;
    }
    else if(equ[*position] == 'c' && equ[*position + 1] == 'o'){
        symbol[0] = 'c';
        symbol[1] = 'o';
        symbol[2] = 's';
        symbol[3] =  0 ;
        *position += 3;
    }
    else if(equ[*position] == 't'){
        symbol[0] = 't';
        symbol[1] = 'a';
        symbol[2] = 'n';
        symbol[3] =  0 ;
        *position += 3;
    }
    else if(equ[*position] == 'c' && equ[*position + 1] == 't'){
        symbol[0] = 'c';
        symbol[1] = 't';
        symbol[2] = 'g';
        symbol[3] =  0 ;
        *position += 3;
    }
    else if(equ[*position] == 'l'){
        symbol[0] = 'l';
        symbol[1] = 'n';
        symbol[2] =  0 ;
        *position += 2;
    }
    else if(equ[*position] == 's' && equ[*position + 1] == 'q'){
        symbol[0] = 's';
        symbol[1] = 'q';
        symbol[2] = 'r';
        symbol[2] = 't';
        symbol[3] =  0 ;
        *position += 4;
    }
    return symbol;
}