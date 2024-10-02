#include <iostream>
using namespace std;

class Complex {
    int a, b;
    public:
        Complex(int x, int y){
            a = x;
            b = y;
        }
        void printNumber(){
            cout<<"before swapping"<<endl;
            cout<<"a = "<<a<<"\nb = "<<b<<endl;
        }
        void swap(){
            int temp = a;
            a = b;
            b = temp;
            cout<<"after swapping"<<endl;
            cout<<"a = "<<a<<"\nb = "<<b<<endl;
        }
};
int main(){
    Complex c1(3, 5);
    c1.printNumber();
    c1.swap();
    return 0;
}