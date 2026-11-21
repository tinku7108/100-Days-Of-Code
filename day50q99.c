#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    scanf("%19s", date);

    // Check if the input matches dd/04/yyyy structure
    if (strlen(date) == 10 && date[2] == '/' && date[3] == '0' && date[4] == '4' && date[5] == '/') {
        printf("%c%c-Apr-%c%c%c%c\n",
               date[0], date[1],
               date[6], date[7], date[8], date[9]);
    } else {
        printf("Invalid format\n");
    }

    return 0;
}