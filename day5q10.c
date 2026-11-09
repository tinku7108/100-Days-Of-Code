#include <stdio.h>

int main() {
    int seconds, minutes, hours;
    printf("Enter seconds: ");
    scanf("%d", &seconds);

    //first calculate minutes 
    hours = seconds / 3600;
    minutes = seconds%3600 /60;
    seconds = seconds%60;
    printf("Time in hours:minutes:seconds format is %02d:%02d:%02d", hours, minutes, seconds);
    return 0;
}