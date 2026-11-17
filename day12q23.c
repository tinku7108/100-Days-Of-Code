#include <stdio.h>

int main() {
    int days;
    int fare;
    printf("Enter late days: ");
    scanf("%d", &days);

    if(days<0){
        printf("Invalid input");;
    }
    else if(days==0){
        printf("No fare");
    }
    else if (days<=5){
        fare = days*2;
        printf("Total fare = %d\n", fare);
    }
    else if(days<=10){
        fare = 2*5 + (days - 5)*4;
        printf("Total fare = %d\n", fare);
    }
    else if(days<=30){
        fare = 2*5 + 4*5 + (days-10)*6;
        printf("Total fare = %d\n", fare);
    }
    else{
        printf("Membership Cancelled\n");
    }
    return 0;
}