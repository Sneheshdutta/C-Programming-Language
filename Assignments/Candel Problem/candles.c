#include<stdio.h>
int main()
{
	int t, n,i,ar[100010],s=0,sum;
	scanf("d",&t);
	while(t>0)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&ar[i]);
		}
		sum=ar[0];
		for(i=1;i<n;i++)
		{
			sum+=ar[i];
			s+=sum;
		}
		printf("%d",s);
		t--;
	}
}
