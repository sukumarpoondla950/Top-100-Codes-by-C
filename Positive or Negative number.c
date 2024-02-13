#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number:");
    scanf("%d",&x);
    if( x>0)
    {
    	printf("%d is a Positive Number",x);
	}
	
	else if(x==0)
	{
		printf("%d is a Zero",x);
	}
	{
		
	}
    else 
    {
	printf("%d is a Negative Number",x);
}
    return 0;
}
