#include <iostream>
using namespace std;

class Base{
    int a;
    public:
        virtual void display(int x){
            a = x;
            cout<<"value of a is : "<<a<<endl;
        }
};

class Derived : public Base{
    int b;
    public:
        void display(int y) override{
            b = y;
            cout<<"value of b is : "<<b<<endl;
        }
};

int main(){
    Base *baseptr;
    Derived derived;

    baseptr = &derived;
    baseptr->display(5);
    return 0;
}