/*#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, num, originalnum, sum=0, arr[10], k=0;
	for(i=1;i<=1000;i++)
	{
        num=i;
		k=0;
		sum=0;
		while(num>0)
		{
		arr[k]=num%10;
		num/=10;
		k++;
	    }
	for(j=0;j<k;j++)
	{
		sum+=pow(arr[j],k);
	}
	if(sum==i)
	{
		printf("This is a armstrong number:%d\n",sum);
	}
	}
	return 0;
}*/


#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct book
{
	char title[30], author[30], edition[5], acc_no[5];
};
int main()
{
	struct book st[10];
	int i;
	char acc_No[5];
	for(i=0;i<10;i++)
	{
		printf("Enter the book title: ");
	    gets(st[i].title);
	    printf("Enter the author name: ");
	    gets(st[i].author);
	    printf("Enter the edition number: ");
	    gets(st[i].edition);
	    printf("Enter the accession number: ");
	    gets(st[i].acc_no);
	}
	for(i=0;i<10;i++)
	{
		printf("Book title:");
		puts(st[i].title);
		printf("Author name:");
		puts(st[i].author);
		printf("Edition number:");
		puts(st[i].edition);
		printf("Accession number:");
		puts(st[i].acc_no);
	}
	printf("Enter the accession number: ");
	gets(acc_No);
	for(i=0;i<10;i++)
	{
	if(strcmp(st[i].acc_no , acc_No)==0)
	{
		printf("Book title:");
		puts(st[i].title);
		printf("Author name:");
		puts(st[i].author);
		printf("Edition number:");
		puts(st[i].edition);
		printf("Accession number:");
		puts(st[i].acc_no);
	}	
	}
	return 0;
}
