#include<stdio.h>
#include<conio.h>

int main()
{
	long int n;
	int x,y;
	scanf("%ld",&n);
	
	if(n%2==0)
	{
		if((n/2)%2==0)
		{
			x=-((n/2)*10);
			y=x;
		}
		else if((n/2)%2!=0)
		{
			x=(n/2)*10;
			y=x+10;
		}
	}
	else if(n%2!=0)
	{
		if(((n-1)/2)%2!=0)
		{
			x=-(n-(n-1)/2)*10;
			y=-x;
		}
		else if(((n-1)/2)%2==0)
		{
			y=(n-(n-1)/2)*10;
			x=-(y-10);
		}
	}
	
	printf("%d %d",x,y);
	return 0;
}

