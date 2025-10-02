#include <stdio.h>


#define SIZE 1024

//Function Prototype
int strngcpy(char *dest, char *src, int max);


int main(int argc, char *argv[]){
    char str1[SIZE];
    fgets(str1, sizeof(str1),stdin);

    //printf("Success!");
    char str2[SIZE];
    char *ptr1 = str1;
    char *ptr2 = str2;
    strngcpy(ptr2,ptr1, 188);
    printf("%s : %s \n",ptr1,ptr2);
    return 0;
}

int strngcpy(char *dest, char *src, int max){
    int index = 0;
    while(*src != '\0' && index < max){
        *dest = *src;
        src++;
        dest++;
        index++;
    }
    while(index < SIZE){
        *dest = '\0';
        index++;
        dest++;
    }
}