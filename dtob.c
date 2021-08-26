#include<stdio.h>
int main()
{
	int num,i=31,n[32];
	printf("enter the number:\n");
	scanf("%d",&num);
	while(i>=0)
	{
		n[i]=num & 1;
		i--;
		num=num>>1;
	}
	int j;
	i=0;
	for( j=0;j<32;j++)
	printf("%d ",n[j]);
	for( j=0;j<32;j++)
	{
	    if(n[j]==1)
	    {
	    	i++;
		}
    }
    printf("\n%d are ones and %d are zeroes : ",i,j-i);	
}
