#include <stdio.h>

int main() {
    int age;
    int countryCode;

    // Input the age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Input the country code
    printf("Enter your country code (1 for India): ");
    scanf("%d", &countryCode);

    // Check if age is 18 or older and if the country code is for India
    if (age >= 18 && countryCode == 1) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}