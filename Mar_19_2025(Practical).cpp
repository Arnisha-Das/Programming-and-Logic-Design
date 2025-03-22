// Q1)

// C

/*#include <stdio.h>
#include<string.h>
int main() 
{
	char st[10]="abcdefgh";
	char st1[10]="";
	int n=strlen(st);
	int i;
	for(i=n-1;i>=0;i--)
	{
	    st1[n-1-i]=st[i];
	}
	printf("%s",st1);
    return 0;
}*/


// C++

#include <iostream>
#include<string>
using namespace std;
int main() 
{
	string st="abcdefgh";
	string st1;
	int n=st.length();
	int i;
	for(i=n-1;i>=0;i--)
	{
	    st1 += st[i];
	}
	cout << st1;
    return 0;
}


// C using 1 variable

/*#include <stdio.h>
#include<string.h>
int main() 
{
	char st[10]="abcdefgh";
	int n=strlen(st);
	int i;
	for(i=0;i<n/2;i++)
	{
	    char ch=st[i];
	    st[i]=st[n-1-i];
	    st[n-1-i]=ch;
	}
	printf("%s",st);
    return 0;
}*/


// Q2)

/*#include <iostream>
#include<list>
using namespace std;
int main() 
{
	list<int>number={};
	list<int>number1={};
	int i;
	for(i=0;i<=10;i++)
	{
		cout << "Enter the value: ";
		cin >> i;
		number.push_back(i);
	}
	number1=number;
	for(int i : number)
	{
		cout << i << "\t";
	}
	cout << "Enter the value at the back side: ";
	cin >> i;
	number1.push_back(i);
	cout << "Enter the value at the back side: ";
	cin >> i;
	number1.push_back(i);
	cout << "Enter the value at the front side: ";
	cin >> i;
	number1.push_back(i);
	number1.pop_back();
	number1.pop_back();
	for(int i : number1)
	{
		cout << i << "\t";
	}
	return 0;
}*/


// Q3)

/*#include <iostream>
#include<stack>
using namespace std;
int main() 
{
stack<int>number={};
	stack<int>number1={};
	int i;
	for(i=0;i<=10;i++)
	{
		cout << "Enter the value: ";
		cin >> i;
		number.push(i);
	}
	number1=number;	
	while(!number1.empty())
	{
		int t=number1.top();
		cout << t << endl;
		number1.pop();
	}
	number1.push(i);
	number1.pop();
	number1.pop();
	number1.pop();
	number1=number;	
	while(!number1.empty())
	{
		int t=number1.top();
		cout << t << endl;
		number1.pop();
	}
	return 0;
}*/





