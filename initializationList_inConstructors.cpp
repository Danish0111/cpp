#include <iostream>
using namespace std;

class A
{
    int a; //a has garbage value because a is initialized first
    int b;

public:
    // A(int i, int j) : a(i), b(j)
    A(int i, int j) : b(j), a(i+b) 
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