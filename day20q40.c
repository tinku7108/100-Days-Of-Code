#include <stdio.h>

int main() {
    int n, complement;
    printf("Enter a binary number: ");
    scanf("%d", &n);

    if(n>=0){
        complement = n ^ 15;
    }
    printf("%d", complement);
    return 0;
}