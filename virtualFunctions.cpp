#include <iostream>
using namespace std;

class Base{
    public:
        int base;
        virtual void display(){
            cout<<"value of base class variable base is "<<base<<endl;
        }
};

class Derived : public Base{
    public:
        int derived = 60;
        void display(){
            cout<<"value of derived class variable derived is "<<derived<<endl;
        }
};

int main(){
    Base * base_ptr;
    Derived obj_derived;
    base_ptr = &obj_derived;
    base_ptr->base = 54;
    base_ptr->display();

    return 0;
}