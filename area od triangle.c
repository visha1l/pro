#include <stdio.h>

int main()
{
    int b, h, area;
    printf("enter the value of b");
    scanf("%d", &b);
     printf("enter the value of h");
    scanf("%d", &h);
    area = (b*h)/2;
    printf("area of triangle = %d", area);
    return 0;
}