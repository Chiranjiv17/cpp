#include<iostream>
using namespace std;
class Animal 
{
	public:
	Animal(char x) 
	{ 
		cout << "Animal para called" << endl; 
	}
	Animal() 
	{ 
		cout << "Animal def called" << endl; 
	}
};
class Pig: virtual public Animal 
{
	public:
	Pig(char x):Animal(x) 
	{
		cout<<"Pig para called"<< endl;
	}
};
class Horse : virtual public Animal 
{
	public:
	Horse(char x):Animal(x) 
	{
		cout<<"Horse para called"<< endl;
	}
};
class Dog : public Pig, public Horse 
{
	public:
	Dog(char x):Horse(x), Pig(x), Animal(x) 
	{
		cout<<"Dog called"<< endl;
	}
};
int main() 
{
	Dog ta1(30);
}

