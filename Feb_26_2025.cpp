// Q1)
/*#include<iostream>
#include<string>
using namespace std;
class details
{
	public:
		string name;
		int roll;
		int print()
		{
			cout << "My name is " << name << " and my roll number is " << roll;
			return 0;
		}
};
int main()
{
	details ds;
	cout << "Enter your name: ";
	getline(cin,ds.name);
	cout << "Enter your roll number: ";
	cin >> ds.roll;
	ds.print();
	return 0;
}*/


// Q2)
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int i,j;
	cout << "Enter your string value: ";
	getline(cin,str);
	j=str.length();
	for(i=0;i<j;i++)
	{
		if(isupper(str[i]))
		{
			str[i]=tolower(str[i]);
			cout << str[i];
		}
		else
		{
			str[i]=toupper(str[i]);
			cout << str[i];
		}
	}
	return 0;
}


// Q3)
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int i,j,k=0;
	cout << "Enter your string value: ";
	getline(cin,str);
	j=str.length();
	for(i=0;i<j;i++)
	{
		if(isdigit(str[i]))
		{
			cout << "\n" << str[i];
			k++;
		}
	}
	if(k==0)
		{
			cout << "No integer";
		}
	return 0;
}*/


// Q4)
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	string user_name="admin123",u_name,password="sysadmin@1234",p_word;
	int i,j,k=0;
	cout << "Enter your user name: ";
	getline(cin,u_name);
	cout << "Enter your password: ";
	getline(cin,p_word);
	if(user_name==u_name && password==p_word)
		{
			cout << "Logged in";
		}
		else
		{
			cout << "Try again";
		}
	return 0;
}*/
