#include<iostream>
using namespace std;
class Car
{
	public:
	Car()
	{
		cout<<"Constructor Called in Car\n";
	}
};
class Nano :virtual public Car
{
	public:
	Nano()
	{
		cout<<"Constructor Called in Nano\n";
	}
};
class Polo :virtual public Car
{
	public:
	Polo ()
	{
		cout<<"Constructor Called in Polo\n";
	}
};
class BMW:public Polo,public Nano
{
	public:
	BMW()
	{
		cout<<"Constructor called in BMW";
	}
};
int main()
{
	BMW obj;
}
