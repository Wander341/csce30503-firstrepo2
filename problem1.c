#include <stdio.h>

#define SIZE 1024

//Function Prototype
int strleng(char *str);

int main(int argc, char *argv[]){
    char str1[SIZE];
    fgets(str1, sizeof(str1),stdin);
    
    char *ptr = str1;
    strleng(str1);

    return 0;
}

int strleng(char *str){
    int index = 0;
    char str1[SIZE];
    while(*str != '\0'){ 
        str1[index] = *str;
        index++;
        str++;
       
    }
    printf("%s: %d\n",str1, index );
}