#include <iostream>
using namespace std;
void test()
{
    static int count = 0;
    cout << count << " ";
    count++;
}
 int main()
{
    for (int i = 0; i < 5; i++)
        test();
    return 0;
}
