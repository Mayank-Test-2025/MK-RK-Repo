// Create basic leap year program
#include <stdio.h>

// Function to check if a year is a leap year
int is_leap_year(int year) {
    // A year is a leap year if it is divisible by 4 but not by 100,
    // except if it is also divisible by 400
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

/**
 * Reads an input year from the user and checks if it is a leap year.
 * 
 * The function performs the following steps:
 * 1. Reads an integer input from the user.
 * 2. If the input is not a valid integer, prints an error message and exits the program with an error code.
 * 3. Checks if the entered year is a leap year using the `is_leap_year` function.
 * 4. Prints a message indicating whether the entered year is a leap year or not.
 * 
 * @return 1 if the input is not a valid integer, otherwise returns nothing.
 */

int main() {
    int year;
    // Prompt the user to enter a year
    printf("Enter a year: ");
    
    // Read the input year from the user
    if (scanf("%d", &year) != 1) {
        // If the input is not a valid integer, print an error message
        printf("Invalid input. Please enter a valid year.\n");
        return 1; // Exit the program with an error code
    }

    // Check if the entered year is a leap year
    if (is_leap_year(year)) {
        // If it is a leap year, print the corresponding message
        printf("%d is a leap year.\n", year);
    } else {
        // If it is not a leap year, print the corresponding message
        printf("%d is not a leap year.\n", year);
    }

    return 0; // Exit the program successfully
}
