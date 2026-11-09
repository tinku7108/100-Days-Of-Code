#include <stdio.h>

int main() {
    int n, sum=0;
    printf("Enter how many positive integers sum you want :");
    scanf("%d", &n);

    if(n<=0){
        printf("Please enter positive numbers.\n");
    }

    for(int i=0; i<=n; i++){
        sum = sum + i;
    }

    printf("Net sum = %d\n", sum);
    return 0;
}