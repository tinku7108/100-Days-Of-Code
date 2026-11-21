#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[200];
    fgets(name, sizeof(name), stdin);

    // Last wale space ki position (index) dhoondho
    int last_space = -1;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            last_space = i;
        }
    }

    // Last space se pehle ke words ke initials print karo
    if (name[0] != ' ' && last_space > 0) {
        printf("%c.", toupper(name[0]));
    }

    for (int i = 1; i < last_space; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c.", toupper(name[i]));
        }
    }

    // Ab surname print karo
    if (last_space != -1) {
        if (last_space > 0) {
            printf(" "); // Initials aur surname ke beech ek space
        }
        for (int i = last_space + 1; name[i] != '\0' && name[i] != '\n'; i++) {
            printf("%c", name[i]);
        }
    } else {
        // Agar naam mein koi space hi nahi hai (sirf ek naam)
        for (int i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
            printf("%c", name[i]);
        }
    }

    printf("\n");
    return 0;
}