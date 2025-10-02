#include <stdio.h>
#include <stdlib.h>

#define SIZE 30

//Function Prototype
char *strngcat(char *dest, char *src);

int main(int argc, char *argv[]){

    char str1[SIZE];
    char str2[SIZE];
    char str3[SIZE];
    int ch0;
    int i=0;
    while ((ch0 = getchar()) != EOF  && ch0 != '\n'){
      str1[i] = ch0;
      
      i++;
   }
   if(ch0 == '\n'){
      str1[i] = '\0';
      
   } i = 0;
   while ((ch0 = getchar()) != EOF  && ch0 != '\n'){
      str2[i] = ch0;
      str3[i] = ch0;
      i++;
      
   }if(ch0 == '\n'){
      str2[i] = '\0';
      str3[i] = '\0';
   }
    char *ptr1 = str1;
    char *ptr2 = str2;
    char *ptr3 = strngcat(ptr2,ptr1);
    if(ptr3 == NULL){
        printf("Buffer Overflow Imminent, ABORT\n");
    } else {
    printf("%s: %s: %s\n",ptr1,str3,ptr3);
    }
    free(ptr3);
    return 0;
}

char* strngcat(char *dest, char *src){
    char *ptr1 = dest;
    char *ptr2 = src;
    int index1 = 0;
    int index2 = 0;
    while(*dest != '\0'){
        dest++;
        index1++;
    }
     while(*src != '\0'){
        src++;
        index2++;
    }
    dest = ptr1;
    src = ptr2;
    if((index1+index2) <= sizeof(dest)-1){
        while(*dest != '\0'){
                dest++;
        }
        *dest = ' ';
        
        while(*src != '\0'){
            dest++;
            *dest = *src ;
            src++;
        }
        *dest = '\0';
        dest = ptr1;
        src = ptr2;
        char *str3 = (char *)malloc(sizeof(dest));
        int i = 0;
        while(*dest != '\0'){
            str3[i] = *dest;
            dest++;
            i++;
        }
        char *ptr3 = str3;
        return ptr3;
    } else if(index2 < index1) {
        return NULL;
    }
    
}