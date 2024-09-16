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
	friend class fri;
};

class fri
{
	public:
		void display(test& t)
		{
			cout<<"Private Attribute is: "<<t.private_attribute<<"\n";
			cout<<"Protected Attribute is: "<<t.protected_attribute;
		}
};

int main()
{
	test t1;
	fri f;
	f.display(t1);
	
}
