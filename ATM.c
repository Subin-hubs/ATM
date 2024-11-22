#include <stdio.h>

// Function to ask the user to input a number
int ask_number() {
    int num;
    printf("Which service do you need? ");
    scanf("%d", &num);
    return num;
}

// Main function
int main() {
    int pin;

    printf("Insert your card (Press Enter to continue): \n");
    getchar();  // Wait for the user to press Enter

    printf("Enter your PIN code: ");
    scanf("%d", &pin);

    // Check PIN validity
    if (pin == 1234) {
        printf("Enter 1 for Balance check\n");
        printf("Enter 2 to Withdraw money\n");
        printf("Enter 3 to Exit the ATM service\n");

        // Call function to get user input for the service
        int num = ask_number();

        if (num == 1) {
            printf("Your balance is $0.0\n");
        } else if (num == 2) {
            printf("Sorry, low on cash.\n");
        } else if (num == 3) {
            printf("Thank you for using our service.\n");
        } else {
            printf("Invalid option. Please try again.\n");
        }
    } else {
        printf("Incorrect PIN. Access denied.\n");
    }

    return 0;
}

