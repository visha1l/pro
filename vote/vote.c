#include <stdio.h>

int main()
{
    int age ;
    int nationality ;
    
    
    printf("Enter your age: ");
    scanf("%d", &age);

    
    printf("Enter your nationality ( 1 for indian): ");
    scanf("%d", &nationality);

    
    if (age >= 18 && nationality == "indian") {
        printf("You are eligible to vote.\n");
    }
     else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}