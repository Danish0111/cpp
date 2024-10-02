#include <iostream>
using namespace std;

class Complex{
    int real;
    int imaginary;
    public:
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
        void getData(){
            cout<<"Real part is "<<real<<endl;
            cout<<"imaginary part is "<<imaginary<<endl;
        }
};

int main(){
    // Complex c1;
    // Complex *ptr = &c1;

    Complex *ptr = new Complex;
    (*ptr).setData(4,54);
    (*ptr).getData();

    Complex *ptr1 = new Complex[4];
    // (*ptr1).setData(4,54);
    // (*ptr1).getData();    
    ptr1->setData(4,54);
    ptr1->getData();    
    
    return 0;
}