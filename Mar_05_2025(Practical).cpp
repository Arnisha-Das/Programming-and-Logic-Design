// Q1)
/*#include<iostream>
#include<string>
using namespace std;
class updatevalues
{
	private:
		int x=25;
		string y="Hello";
		public:
			int values(int p, string q)
			{
				x=p;
				y=q;
				return 0;	
			}
			int update()
			{
				cout << "\n" << x << "\n" << y;
				return 0;
			}
};

int main()
{
	updatevalues uv;
	int m;
	string n;
	cout << "Enter any integer: ";
	cin >> m;
	cout << "Enter any string: ";
	cin >> n;
	uv.update();
	uv.values(m,n);
	uv.update();
	return 0;
}*/


// Q2)
/*#include<iostream>
#include<string>
using namespace std;
class parent
{
	public:
		int Show()
		{
			cout << "Hello world" << "\n";
			return 0;
		}
};
class child:public parent
{
	public:
		int display()
		{
			cout << "How are you?";
			return 0;
		}
};
int main()
{
	child pc;
	pc.Show();
	pc.display();
	return 0;
}*/


// Q3)
#include<iostream>
#include<string>
using namespace std;

class employees
{
	public:
	string e_name;
	string e_id;
	string e_acc_no;
	int e_salary;
};

int main()
{
	employees details[5];
	int i;
	for(i=0;i<5;i++)
	{
		cout << "Enter the employee name: ";
		getline(cin,details[i].e_name);
		cout << "Enter the employee id: ";
		getline(cin,details[i].e_id);
		cout << "Enter the employee account no.: ";
		getline(cin,details[i].e_acc_no);
		cout << "Enter the employee salary: ";
		cin >> details[i].e_salary;
		cin.ignore();
	}
	for(i=0;i<5;i++)
	{
		cout << "Employee name: " << details[i].e_name << "\n";
		cout << "Employee id: " << details[i].e_id << "\n";
		cout << "Employee account no.: " << details[i].e_acc_no << "\n";
		cout << "Employee salary: " << details[i].e_salary << "\n";
	}
	return 0;
}




