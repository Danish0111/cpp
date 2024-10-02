#include <iostream>
using namespace std;

class Complex;

class Calculator
{
public:
    int sumRealCOmplex(Complex, Complex);
    int sumcompCOmplex(Complex, Complex);
};

class Complex
{
    int a, b;

    //individualy declaring functions as friend
    // friend int Calculator ::sumRealCOmplex(Complex o1, Complex o2);
    // friend int Calculator ::sumcompCOmplex(Complex o1, Complex o2);

    //declaring the whole class as friend
    friend class Calculator;

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
int Calculator :: sumRealCOmplex(Complex o1, Complex o2)
{
    return o1.a + o2.a;
}
int Calculator :: sumcompCOmplex(Complex o1, Complex o2)
{
    return o1.b + o2.b;
}

int main()
{
    Complex c1, c2;
    c1.setComplex(1, 4);
    c2.setComplex(2, 3);

    Calculator sum;
    int res = sum.sumRealCOmplex(c1, c2);
    cout<<"Sum of real part of complex number is "<<res<<endl;

    int resc = sum.sumcompCOmplex(c1, c2);
    cout<<"Sum of complex part of complex number is "<<resc<<endl;
    return 0;
}