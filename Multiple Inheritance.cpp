#include<iostream>
using namespace std;
class A
{
	public:
	void show()
	{
		cout<<"constructor called class A\n";
	}
};
class B
{
	public:
	void show()
	{
		cout<<"Constructor called class B\n";
	}
};
class C:public A, public B
{
	public:
		C()
		{
			cout<<"Constructor called class C\n";
		}

};
int main()
{
	C obj;
	obj.A::show();
	obj.B::show();
}
