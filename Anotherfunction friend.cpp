#include <iostream>
using namespace std;
 
class test;
class anotherClass 
{
public:
    void memberFunction(test&);
};
 
class test
{
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public:
    test()
    {
        private_variable = 10;
        protected_variable = 20;
    }
 
    friend void anotherClass::memberFunction(test&);
};
 
void anotherClass::memberFunction(test& obj)
{
    cout << "Private Variable: " << obj.private_variable
         << endl;
    cout << "Protected Variable: " << obj.protected_variable;
}
int main()
{
    test object1;
    anotherClass object2;
    object2.memberFunction(object1);
 
    return 0;
}

