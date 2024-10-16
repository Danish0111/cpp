#include <iostream>
using namespace std;

class Complex{
    int real, img;
    public:
        Complex(int a, int b){
            real = a;
            img = b;
        }
        Complex operator +(Complex obj){
            return Complex(real + obj.real, img + obj.img);
        }
        void display(){
            cout<<real<<" + i"<<img<<endl;
        }
};
int main(){
    Complex c1(3, 5), c2(1, 2);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}