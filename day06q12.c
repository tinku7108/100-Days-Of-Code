#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n>0){
        printf("Number is Positive");
    }
    else if (n<0){
        printf("Number is Negative");
    }
    else {
        printf("Number is zero");
    }
    return 0;
}