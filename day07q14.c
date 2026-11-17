#include <stdio.h>

int main() {
    char n;
    printf("Enter any character : ");
    scanf("%c", &n);
    if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U'){
        printf("Vowel");
    }
    else if ((n>='a' && n<='z') || (n>='A' && n<='Z')){
        printf("Consonant");
    }
    else {
        printf("Invalid Input");
    }
    return 0;
}