#include<iostream>
using namespace std;
class test
{
	private:
		int private_attribute;
	protected:
		int protected_attribute;
	public:
		test()
		{
			private_attribute = 10;
			protected_attribute = 20;
		}
	    friend void frifunction(test&);
};
void frifunction(test& t)
{
	cout<<"Private Attribute is: "<<t.private_attribute<<"\n";
	cout<<"Protected Attribute is: "<<t.protected_attribute;
}
int main()
{
	test t1;
	frifunction(t1);
	return 0;
}
