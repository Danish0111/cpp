#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    friend Complex sumComplex(Complex c1, Complex c2);
    // now sumComplex() can be able to access Complex private members

public:
    void setComplex(int c1, int c2)
    {
        a = c1;
        b = c2;
    }
    void printComplex()
    {
        cout << "complex number is " << a << " + i" << b << endl;
    }
};
Complex sumComplex(Complex c1, Complex c2)
{
    Complex c3;
    c3.setComplex((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setComplex(2, 3);
    c1.printComplex();

    c2.setComplex(1, 4);
    c2.printComplex();

    sum = sumComplex(c1, c2);
    sum.printComplex();
    return 0;
}