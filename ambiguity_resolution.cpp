#include <iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"good morning Base1 greet";
        }
};

class Base2{
    public:
        void greet(){
            cout<<"Hello Base2 greet";
        }
};

class Derived : public Base1, public Base2{
    int a ;
    public:
        void greet(){
            Base1 :: greet();
        }
};
int main(){
    Derived d;
    d.greet();
    return 0;
}