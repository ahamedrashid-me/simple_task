#include <stdio.h>

int main() {
    int choice;

    do {
        // Display menu
        printf("\nOptions:\n");
        printf("1. Check Even/Odd\n");
        printf("2. Check Vowel/Consonant\n");
        printf("3. Check Leap Year\n");
        printf("0. Exit\n\n\n");

        // Input choice
        printf("### Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Check Even/Odd
                {
                    printf("### Checking even/odd number ###\n");
                    int number;
                    printf("Enter a number: ");
                    scanf("%d", &number);

                    if (number % 2 == 0) {
                        printf("%d is an even number.\n", number);
                    } else {
                        printf("%d is an odd number.\n", number);
                    }
                }
                break;

            case 2:
                // Check Vowel/Consonant
                {
                    printf("### Checking vowel/consonant ###\n");
                    char character;
                    printf("Enter a character: ");
                    scanf(" %c", &character);

                    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
                        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
                            character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
                            printf("%c is a vowel.\n", character);
                        } else {
                            printf("%c is a consonant.\n", character);
                        }
                    } else {
                        printf("Invalid input. Please enter a valid character.\n");
                    }
                }
                break;

            case 3:
                // Check Leap Year
                {
                    printf("### Checking leap year ! ###\n");
                    int year;
                    printf("Enter a year: ");
                    scanf("%d", &year);

                    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                        printf("%d is a leap year.\n", year);
                    } else {
                        printf("%d is not a leap year.\n", year);
                    }
                }
                break;

            case 0:

                 // Replace "https://www.example.com" with your desired URL
               {
                const char *url = "https://github.com/ahamedrashid-me";

                // Form the command to open the URL in the default web browser
                char command[256];
                snprintf(command, sizeof(command), "open %s", url);

                // Use system command to execute
                system(command);
               // printf("Exiting the program. Goodbye!\nTHANKS ME! fb/@ahamedrashid.me");
               }
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 0);

    return 0;
}
