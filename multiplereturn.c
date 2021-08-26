
#include<stdio.h>
void calci(int *a,int *b,int *result)
{
	char ch;
	printf("enter any operation to perform\n");
	scanf(" %c",&ch);
	switch(ch)
	{
		case '+': *result =*a +*b;break;
		case '-': *result =*a - *b;break;
		case '/': *result =*a / *b;break;
		case '*': *result =*a +*b;break;
		default : printf("enter legal value\n");
	}
}
int main()
{
	int a,b,result;
	printf("enter any two values : \n");
	scanf("%d%d",&a,&b);
	calci(&a,&b,&result);
	printf("result is : %d",result);
}
