#include <stdio.h>
#include<math.h>
int main(){

double Q1,Q2,r;
double coulamb;
const double  k = 8.99e9;
printf("enter the value of Q1(in coulambs):");
scanf("%lf",&Q1);
printf("enter the vlaue of Q2(in coulambs):");
scanf("%lf",&Q2);
printf("enter the value of r(in meters):");
scanf("%lf",&r);
if (r!=0)
{
   coulamb = k*(Q1*Q2)/(r*r);
printf("coulamb force is %f N\n",coulamb);
}
else{
    printf("radius cannot be zero.\n");
}

    return 0;
}