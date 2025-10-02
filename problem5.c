#include <stdio.h>

#define SIZE 1024

//Function Prototype
int strngcmpy(char *str1, char *str2);

int main(int argc, char *argv[]){
    char str1[SIZE];
    char str2[SIZE];
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
      i++;
      
   }if(ch0 == '\n'){
      str2[i] = '\0';
   }

    char *ptr1 = str1;
    char *ptr2 = str2;
    int value = strngcmpy(ptr1,ptr2);
    printf("%s : %s : %d\n", ptr1,ptr2,value);
    return 0;
}

int strngcmpy(char *str1, char *str2){
    int index1 =0;
    int index2 = 0;
    char *ptr1 = str1;
    char *ptr2 = str2;
    while(*str1 != '\0'){
        str1++;
        index1++;
    }
    while(*str2 != '\0'){
        str2++;
        index2++;
    }
    if(index1 == index2){
        ptr1 = str1;
        ptr2 = str2;
        while(*str1 == *str2){
            str1++;
            str2++;
            if(*str1 == '\0' && *str2 == '\0'){
                return 0;
            }
    }
    } else if(index1 < index2){
        return -1;
    } else if(index2 < index1){
        return 1;
    }
    
    return 0;
}