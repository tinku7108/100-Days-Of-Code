#include <stdio.h>

int main() {
    int units;
    int bill;
    printf("Enter Units: ");
    scanf("%d", &units);

    if(units<0){
        printf("Invalid input");;
    }
    else if(units==0){
        printf("No Bill");
    }
    else if (units <= 100){
        bill = units*5;
        printf("Total bill = %d\n", bill);
    }
    else if(units <= 200){
        bill = 100*5 + (units - 100)*7;
        printf("Total bill = %d\n", bill);
    }
    else if(units <= 3000){
        bill = 100*5 + 100*7 + (units-200)*10;
        printf("Total bill = %d\n", bill);
    }
    else if(units > 300) {
        bill = 100*5 + 100*7 + 100*10 + (units - 300)*12;
        printf("Total bill = %d\n", bill);
    }
    return 0;
}