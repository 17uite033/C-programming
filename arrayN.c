#include<stdio.h>
#include<math.h>
int main()
{
	int a[30];	
	int n,k,i,sum=0;
	scanf("%d/t",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d/n",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
