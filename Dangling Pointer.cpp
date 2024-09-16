#include<iostream>
using namespace std;
class Demo
{
	int x;
	int* y;
	public:
		Demo(int x, int y)
		{
			this->x=x;
			this->y =new int(y);
		}
		void display()
		{
			cout<<x<<"  "<<*y<<endl;
		}
		~Demo()
		{
			cout<<"destructor"<<endl;
			delete y;
		}
};
int main()
{
	Demo d1(20,30);
	d1.display(); 
	{
		Demo d2(d1);
		d2.display();
	}
	d1.display();
}
  
