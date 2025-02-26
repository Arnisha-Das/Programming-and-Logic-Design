// Q1
/*#include <stdio.h>
#include <string.h>
int main()
{
	char str[100],Originalstr[100];
	printf("Enter a string: ");
	scanf("%s",&str);
	strcpy(Originalstr,str);
	char* start = str;
    char* end = str + strlen(str) - 1;
    
    while (start < end) 
	{
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;  
    }
    if(strcmp(Originalstr,str)==0)
    {
    	
    	printf("This string is palindrome.");
	}
	else
	{
		printf("This string is not palindrome.");
	}
    return 0;
}*/


//Q2
/*#include<stdio.h>
int main()
{
	int X[10]={3,5,7,9,11,13,17,19,23,29};
	int F[10]={2,3,2,3,4,2,4,3,4,2};
	int w_ave,i,sum=0,sum_w=0;
	for(i=1;i<=10;i++)
	{
		sum+=X[i]*F[i];
		sum_w+=F[i];
	}
	w_ave=sum/sum_w;
	printf("Weighted average:%d",w_ave);
	return 0;
}*/


//Q3
/*#include<stdio.h>
int main()
{
	int i,j,arr[]={45,32,17,84,77,65,7,54},tmp;
	for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i]<arr[j])
			{
				tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
	for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}*/


//Q4
/*#include<stdio.h>
int main()
{
	int A[]={0,0,1,1}, B[]={0,1,0,1}, Y[4];
	for(int i=0;i<4;i++)
	{
		if(A[i]==0)
		{
			Y[i]=1-A[i];
		}
		else if(A[i]==1)
		{
			Y[i]=B[i];
		}
	}
	printf("A\tB\tY\n");
	for(int i=0;i<4;i++)
	{
		printf("%d\t%d\t%d\n",A[i],B[i],Y[i]);
	}
	return 0;
}*/


//Q5
#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct book
{
	char cus_name[30], cus_id[30], p_no[20];
};
int main()
{
	struct book st[5];
	int i;
	char CUS_ID[30];
	for(i=0;i<5;i++)
	{
		printf("Enter the customer name: ");
	    gets(st[i].cus_name);
	    printf("Enter the customer id: ");
	    gets(st[i].cus_id);
	    printf("Enter the PAN No.: ");
	    gets(st[i].p_no);
	}
	printf("Enter the customer id: ");
	gets(CUS_ID);
	for(i=0;i<5;i++)
	{
	if(strcmp(st[i].cus_id , CUS_ID)==0)
	{
		printf("Customer name:");
		puts(st[i].cus_name);
		printf("Customer id:");
		puts(st[i].cus_id);
		printf("PAN No.:");
		puts(st[i].p_no);
	}	
	}
	return 0;
}


