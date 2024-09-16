#include<iostream>
using namespace std;
class Complex
{
	int real;
	int img;
	static int x;
	public:

	void accept();
	void setReal(int);
	int getImg()const;
	void show()const
	{
		cout<<"complex number is "<<real<<"+"<<img<<"i"<<endl;	
	}
	Complex(int r,int i)
	{
		real=r;
		img=i;
	}
};
void Complex::accept()
{
	cout<<"enter real and img\n";
	cin>>real>>img;
}
void Complex::setReal(int r )
{
	real=r;
}
int Complex::getImg()const
{
	return img;
}
int main()
{
	 const Complex d1(1,2);
	//d1.accept();
	d1.show();
	//d1.setReal(10);
	d1.show();
	cout<<"imaginary part is "<<d1.getImg();
	cout<<"size of object is "<<sizeof(d1);
	
}
