/*#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[20];
	printf("Enter string: ");
	scanf("%s",&str);
	printf("%s\n",strlwr(str));
	printf("%s\n",strupr(str));
	return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20],ch;
	int i;
	printf("Enter string1: ");
	gets(str1);
	printf("Enter string2: ");
	gets(str2);
	printf("Enter operator: ");
	scanf("%c",&ch);
	i=(int)ch;
	if(i==43)
	{
		puts(strcat(str1,str2));
	}
	else
	{
		puts("Enter proper operator");
	}
	return 0;
}*/


#include<stdio.h>
#include<math.h>
int main()
{
	int i,num,originalnum,sum=0,arr[10],k=0,j;
	for(i=1;i<=1000;i++)
	{
		num=i;
		originalnum=num;
		while(num>0)
		{
			arr[i]=num%10;
			num/=10;
			k++;
		}
		for(j=0;j<k;j++)
		{
			sum+=pow(arr[j],k);
		}
		if(sum==originalnum)
		{
		printf("%d",originalnum);	
		}
	}
	return 0;
}


/*#include<stdio.h>
#include<string.h>
struct book
{
	char author_name[20], book_title[50], edition[5], accn_no[10];
};
int main()
{
	struct book st[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("Enter the author name: ");
		gets(st[i].author_name);
		printf("Enter the title of the book: ");
		gets(st[i].book_title);
		printf("Enter the edition number: ");
		gets(st[i].edition);
		printf("Enter the accession number: ");
		gets(st[i].accn_no);
	}
	for(i=0;i<10;i++)
	{
		printf("Author name: ");
		puts(st[i].author_name);
		printf("Book title: ");
		puts(st[i].book_title);
		printf("Edition number: ");
		puts(st[i].edition);
		printf("Accession number: ");
		puts(st[i].accn_no);
	}
	return 0;
}*/
