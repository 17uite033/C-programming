#include<stdio.h>
int main()
{

    int a,t,rem,sum=0;
    scanf("%d",&a);
    a=t;
    while(a>0)
    {
      rem=a%10;
      a=a/10;
      sum=(sum*10)+a;
     }
     if(sum==t)
     {
        printf("yes");
      }
      else
      {
        printf("no");
      }
      return 0;
}
