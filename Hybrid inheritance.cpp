#include<iostream>
using namespace std;
class Employee
{
	public:
	Employee()
	{
		cout<<"Constructor Called in Employee\n";
	}
};
class Wegemployee:virtual public Employee
{
	public:
	Wegemployee()
	{
		cout<<"Constructor Called in Wegemployee\n";
	}
};
class Salesemployee:virtual public Employee
{
	public:
	Salesemployee()
	{
		cout<<"Constructor Called in SalesEmployee\n";
	}
};
class Salesmanager:public Wegemployee,public Salesemployee
{
	public:
	Salesmanager()
	{
		cout<<"Constructor called in Salesmanager";
	}
};
int main()
{
	Salesmanager obj;
}
