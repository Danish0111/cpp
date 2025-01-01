#include <iostream>
using namespace std;

// abstract base class is a class which has at least one virtual function
class Base{ // abstract base class
    public:
        int base = 45;
        virtual void display()=0; // pure virtual function
};

class Derived1 : public Base{
    public:
        int derived1 = 50;
        void display(){
            cout<<"value of derived class variable derived1 is "<<derived1<<endl;
        }
};

class Derived2 : public Base{
    public:
        int derived2 = 60;
        void display(){
            cout<<"value of derived class variable derived2 is "<<derived2<<endl;
        }
};

int main(){
    Base * base_ptr[2];
    // Base b;  // not allowed as Base class is now abstract base class because we added a pure virtual function
    Derived1 d1;
    Derived2 d2;
    base_ptr[0] = &d1;
    base_ptr[1] = &d2;
    
    base_ptr[0]->display();
    base_ptr[1]->display();

    return 0;
}