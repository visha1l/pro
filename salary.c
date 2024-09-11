#include <stdio.h>

int main()
{
     int basicsalary,da,hra ,grosssalary;
     printf("enter the value of  basic salary ");
     scanf("%d",&basicsalary);
     da = basicsalary *40/100;
     hra = basicsalary *20/100;
     grosssalary = basicsalary+da+hra;
     printf("gross salary = %d",grosssalary);

    return 0;
}