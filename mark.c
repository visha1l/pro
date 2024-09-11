#include <stdio.h>

int main()
{
    int m1,m2,m3,m4,m5, mark;
    float per;
    printf("enter the marks m1 ");
    scanf("%d",&m1);
    printf("enter the marks m2 ");
    scanf("%d",&m2);
    printf("enter the marks m3 ");
    scanf("%d",&m3);
    printf("enter the marks m4 ");
    scanf("%d",&m4);
    printf("enter the marks m5 ");
    scanf("%d",&m5);
    mark = m1+m2+m3+m4+m5;
    printf("total marks = %d\n", mark);
    per = mark*100/500;
    printf("percentage = %f\n ", per);
    if (per>=60)
    {
        printf(" 1st ");
    }
    else if (per>50 && per<60)
    {
        printf(" 2nd ");
    }
    else if (per>40 && per<50)
    {
        printf(" 3rd ");
    }
    else 
    {
        printf(" Fail ");
    }    
    return 0;
}