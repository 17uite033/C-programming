#include<stdio.h>
int main()
{
        int a[30];
        int n,t,i,max;
        scanf("%d",&n);
        scanf("%d",&t);
        for(i=1;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        max=a[0];
        for(i=1;i<n;i++)
        {
                if(a[i]>max)
                {
                        max=a[i];
                }
        }
        printf("%d",max);
        return 0;
}
