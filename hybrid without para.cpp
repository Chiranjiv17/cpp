#include<iostream>
using namespace std;
class Animal 
{
	public:
	Animal() 
	{ 
		cout << "Animal def called" << endl; 
	}
};
class Pig: virtual public Animal 
{
	public:
	Pig() 
	{
		cout<<"Pig called"<< endl;
	}
};
class Horse : virtual public Animal 
{
	public:
	Horse( )
	{
		cout<<"Horse  called"<< endl;
	}
};
class Dog : public Pig, public Horse 
{
	public:
	Dog()
	{
		cout<<"Dog called"<< endl;
	}
};
int main() 
{
	Dog ta1;
}

