#include <stdio.h>
#include <math.h>
int main()
{
    double B, I ,L, N;
    const double u = 4 * 3.14e-7;
    printf("the the value of I (in ampere): ");
    scanf("%lf",&I);
     printf("the the value of L (in meter): ");
    scanf("%lf",&L);
     printf("the the value of N : ");
    scanf("%lf",&N);
    B = u *N*I*L;
    printf("magnetic field of  solenoid =  %f ", B);
    return 0;
}