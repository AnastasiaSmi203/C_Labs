#include <stdio.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    
    char str[100];
    printf("Input: ");
    gets(str);
    printf("Output: ");
    int  flag = 0, count = 0, number_letters = 0, sum=0;
    
    if(str[0] == '\n') return 0;
    do{
        while (str[count]!='\0'){
            char result_str[100];
          while((isdigit(str[count])!=0) && (str[count-1]==' ') && (str[count+1]==' ')){
                result_str[number_letters]= str[count];
                number_letters= number_letters + 1;
                count=count+1;
          }
          count=count+1;
          sum = sum + atoi(result_str);
          memset(result_str,0,100);
          number_letters = 0;
        }
        if (sum!=0){
            printf("%d\n", sum);
        }
        else{
            printf("String is empty or don't have numbers\n");
        }
        flag = 1;
    }while(!flag);
    
}
