// Q1)
/*#include<iostream>
using namespace std;
int main()
{
	int y;
	cout << "Enter the year: ";
	cin >> y;
	if(y%4==0 && y%100!=0 || y%400==0)
	{
		cout << "The year is leap year.";
	}
	else
	{
		cout << "The year is not leap year.";
	}
	return 0;
}*/


//Q2)
/*#include<iostream>
using namespace std;
int main()
{
	int n,reminder,reversenum=0;
	cout << "Enter any number: ";
	cin >> n;
	while(n!=0)
	{
		reversenum=(reversenum*10)+n%10;
		n/=10;
	}
	cout << "Reverse number= " << reversenum;
	return 0;
}*/


//Q3)
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,sum=0,num;
	for(i=1;i<=1000;i++)
	{
		num=i;
		sum=0;
		while(num>0)
		{
			sum+=num%10;
			num/=10;
		}
		if(i % sum == 0)
		{
			cout << i << "\t";
		}
	}
	return 0;
}*/


//Q4)
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i=0,sum=0;
	cout << "Enter the binary number: ";
	cin >> n;
	while(n>0)
	{
		sum+=(n%10)*pow(2,i);
		n/=10;
		i++;
	}
	cout << "Decimal number: " << sum;
	return 0;
}*/




