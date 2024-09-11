#include <stdio.h>

int main()
{
    int eng,hin,math,sst,sci,total,per,name;
    printf("enter youe name");
    scanf("%d",& name);
    printf("enter the value of eng ");
    scanf("%d",& eng);
    printf("enter the value of hin ");
    scanf("%d",& hin);
    printf("enter the value of math ");
    scanf("%d",& math);
    printf("enter the value of sst ");
    scanf("%d",& sst);
    printf("enter the value of sci ");
    scanf("%d",& sci);
    total = eng+hin+math+sst+sci;
    per = total*100/500;
    printf("total mark is = %d",total);
    printf(" percentage is = %d",per);

    if (per>=90)
    {
        printf(" A+ grade");
    }
   else if (per>=80)
    {
         printf(" A grade");
    }
 
   else if (per>=70)
    {
        printf(" B+ grade");
    }
   else  if (per>=60)
    {
         printf(" B grade");
        
    }
    else  if (per>=50)
    {
        printf(" c+ grade");
    }
    else if (per>=40)
    {
         printf(" c grade");
    }
   
   else
   {
    printf( " D grade");
   }
   
 
 
    
    return 0;
}