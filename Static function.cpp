#include<iostream>
using namespace std;
class Complex
{
	int real;
	int img;
	static int cnt;
	public:
	void accept();
	void setReal(int);
	int getImg();
	void show()
	{
		cout<<"complex number is "<<real<<"+"<<img<<"i"<<"  "<<cnt<<endl;	
	}
	static int getCnt()
	{
		cnt=5;
		return cnt;	
	}
};

int Complex::cnt;
void Complex::accept()
{
	cout<<"enter real and img\n";
	cin>>real>>img;
}
void Complex::setReal(int r )
{
	real=r;
}
int Complex::getImg()
{
	return img;
}
int main()
{
	Complex c1;
	c1.accept();
	c1.show();
	  cout<<"value is "<<c1.getCnt();
	
}
