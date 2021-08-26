#include<stdio.h>
#include<string.h>
int main()
{
	char ch,str[100],str2[100];
	printf("enter any string : \n");
	gets(str);
	printf("enter any character from above string to remove :\n");
	scanf("%c",&ch);
	int temp,n=strlen(str);
	for(int i=0;i<n;i++)
	{
	here:	if(str[i]==ch)
		{
		   i++;
		   goto here;
		}
		printf("%c",str[i]);
	}
}
