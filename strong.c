#include<stdio.h>
void main()
{
	int n,i,a,sum=0,r;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+fact(r);
		n=n/10;
	}
	if(sum==n)
	printf("strong number");
	else
	printf("not a strong number");
}
int fact(int r)
{
	int f=1,i;
	for(i=1;i<r;i++)
	{
		f=f*i;
	}
	return 0;
}
