#include <stdio.h>
#define SIZE 1024
//Function Prototype
char* strngchar(char *str, char c);

int main(int argc, char *argv[]){
    char str1[SIZE];
    fgets(str1, sizeof(str1),stdin);
    
    char *ptr = str1;

    char *ptr2 =strngchar(ptr,'\0');
    printf("%s: %s\n", str1,ptr2);


    return 0;
}

char* strngchar(char *str, char c){
    char *ptr1 = str;
    static char str1[5] = "NULL";
    char *ptr = str1;
    
    if(c == '\0'){
        while(*str != '\0'){
            str++;
        }
        return str;
    } else {
        str = ptr1;
        while(*str != '\0'&& *str != c ){
        str++;
        }
    }
    
    if(*str != c){
    
       return ptr;
    }
    return str;

}