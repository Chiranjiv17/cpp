#include<iostream>
using namespace std;
class BIKES
{
	public:
	Car()
	{
		cout<<"Constructor Called in BIKES\n";
	}
};
class ZMR :virtual public BIKES
{
	public:
	ZMR()
	{
		cout<<"Constructor Called in ZMR\n";
	}
};
class R15 :virtual public BIKES
{
	public:
	R15 ()
	{
		cout<<"Constructor Called in R15\n";
	}
};
class Karizma:public R15,public ZMR
{
	public:
	Karizma()
	{
		cout<<"Constructor called in Karizma";
	}
};
int main()
{
	Karizma obj;
}
