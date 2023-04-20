#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int output(int sum){
    if (sum > 0) {
        printf("Output: %d\n", sum); 
    } else {
        printf("String is empty or doesn't have numbers\n"); 
    }
    return 0;
}

int main() {
    char str[1000];
    printf("Input: ");
    gets(str);

    int sum = 0;
    char* word = strtok(str, " "); 

    if (str[0] == '\n') return 0; 
    while (word != NULL) { 
        char* endptr;
        long num = strtol(word, &endptr, 10); 

        if (endptr == word || *endptr != '\0' || (num == 0 && !isdigit(word[0]))) {
        } else if (num > 0) {
            sum += num; 
        }
        word = strtok(NULL, " "); 
    }
    printf(output(sum));

    return 0;
}
