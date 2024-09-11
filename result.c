#include <stdio.h>

int main()
{
    int eng,hin,math,sst,sci,total,per;
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
    printf("percentage is = %d",per);
    return 0;
}