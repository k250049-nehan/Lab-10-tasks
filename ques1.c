#include <stdio.h>
#include <string.h>
int main() {
    char password[20];
    int is_strong = 1;
    int has_upper = 0;
    int has_digit = 0;
    int has_special = 0;
    char spec_char[] = "!@#$%";

    printf("Enter a password: ");
    scanf("%s", password);

    printf("\n--- Validation Results ---\n");

    if (strlen(password) < 8) {
        printf("Password must be at least 8 characters long.\n");
        is_strong = 0;
    }

    for (int i = 0; password[i] != '\0'; i++) {
        char ch = password[i];
        if (ch >= 'A' && ch <= 'Z') {
            has_upper = 1;
        }
        else if (ch >= '0' && ch <= '9') {
            has_digit = 1;
        }
        else if (strchr(spec_char, ch) != NULL) {
            has_special = 1;
        }
    }

    if (!has_upper) {
        printf("Password must contain at least one uppercase letter.\n");
        is_strong = 0;
    }
    if (!has_digit) {
        printf("Password must contain at least one digit.\n");
        is_strong = 0;
    }
    if (!has_special) {
        printf("Password must contain at least one special character (!, @, #, $, %%).\n");
        is_strong = 0;
    }
    if (is_strong == 1) {
        printf("Password is Strong!\n");
    } else {
        printf("Password is Weak. Please try again.\n");
    }
    return 0;
}