#include <stdio.h>

int main() {
    int count=0;
    char str[100];
    int i=0;
    printf("Enter a word: ");
    scanf("%s", &str);

    while(str[i] != 0){
        i++;
        count++;
    }

    printf("Total characters = %d", count);
    return 0;
}