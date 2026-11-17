#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 3 sides of a Triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a==b && b==c && c==a){
        printf("Triangle is Equilateral\n");
    }
    else if(a==b || b==c || c==a){
        printf("Triangle is Isosceles\n");
    }
    else{
        printf("Triangle is Scalene\n");
    }
    return 0;
}