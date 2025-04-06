//Q1)
/*#include<stdio.h>
#include<string.h>
int main()
{
	char str[30],str1[30],str2[30];
	printf("Enter your combing string value: ");
	gets(str);
	int i=0,k;
	int length=strlen(str);
	while(str[i]!=' ')
	{
		str1[i]=str[i];
		i++;
	}
	k=i+1;
	i=0;
	while(str[k]!='\0')
	{
		str2[i]=str[k];
		i++;
		k++;
	}
	printf("%s\n%s",str1,str2);
	return 0;
}*/



// Q2)
/*#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	for(i=1;i<=1000;i++)
	{
		int squre=pow(i,2),sum=0;
		while(squre)
		{
			sum+=squre%10;
			squre/=10;
		}
		if(sum==i)
		printf("%d\n",i);
	}
	return 0;
}*/



// Q3)
/*#include<stdio.h>
int sort(float x[],int y)
{
	int i,j;
	for(i=0;i<y;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(x[j]>x[i])
			{
				float tmp=x[j];
				x[j]=x[i];
				x[i]=tmp;
			}
		}
	}
	return 0;
}
int main()
{
	float ar[10],med;
	int i,n;
	printf("Enter the no. of element: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element: ");
		scanf("%f",&ar[i]);
	}
	sort(ar,n);
	if(n%2==0)
	{
		med=(ar[(n/2)-1]+ar[n/2])/2;
	}
	else
	{
		med=ar[(n+1)/2-1];
	}
	for(i=0;i<n;i++)
	{
		printf("%f\t",ar[i]);
	}
	printf("\nThe median number is: %f",med);
	return 0;
}*/





