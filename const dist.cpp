#include <iostream>
using namespace std;
static int Count = 0;     
class Home
{
public:
 
    Home()
    { 
        Count++;
        cout << "I was buy new home: " << Count<< endl;
    }
     ~Home()
    {
         
        cout << "I can develop my home: " << Count << endl;                                  
        Count--;
    }
};
int main()
{
    Home h, h1, h2, h3;
}
