#include <iostream>
using namespace std;

class A
{
    int b;
    int a;

public:
    // A(int i, int j) : a(i), b(j)
    A(int i, int j) : b(j), a(i+b) //a has garbage value because a is initialized first
    {
        cout << "value of a: " << a << endl;
        cout << "value of b: " << b << endl;
    }
};
int main()
{
    A a(4, 6);
    return 0;
}