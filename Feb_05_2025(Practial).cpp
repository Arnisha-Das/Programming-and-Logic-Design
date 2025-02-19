/*#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[20];
	int i,j,k=0;
	printf("Enter the string value: ");
	scanf("%s",&str);
	j=strlen(str);
	for(i=0;i<j;i++)
	{
		if(isdigit(str[i]))
		{
			printf("%c\n",str[i]);
			k++;
		}
    }
	if(k==0)
	{
	printf("No integer.");	
	}
	return 0;
}*/


/*#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[20];
	printf("Enter the string value: ");
	scanf("%s",&str);
	printf("%s\n",strlwr(str));
	printf("%s\n",strupr(str));
	return 0;
}*/


/*#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[20]="Arnisha Das",b[20],c[10]="arma1234",d[10];
	printf("Enter your name: ");
	gets(b);
	printf("Enter your password: ");
	gets(d);
	if(strcmp(a,b)==0 && strcmp(c,d)==0)
	{
		printf("Login successful");
	}
	else
	{
		printf("Invalid login");
	}
	return 0;
}*/
