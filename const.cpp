#include<iostream>
using namespace std;
class A 
{
public:
    A()
    {
        cout << "Constructor are person !"
             << endl;
    }
    ~A()
    {
        cout << "Destructor are person !"
             << endl;
    }
};
int main()
{ 
     A name;
}
