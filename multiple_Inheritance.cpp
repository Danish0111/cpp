#include <iostream>
using namespace std;

class Base1{
    protected:
        int base1int;
    public:
        void setbase1int(int a){
            base1int = a;
        }
};

class Base2{
    protected:
        int base2int;
    public:
        void setbase2int(int a){
            base2int = a;
        }
};

class Derived : public Base1, public Base2{
    public:
        
        void show(){
        cout<<"value of base1int is "<<base1int<<endl;
        cout<<"value of base2int is "<<base2int<<endl;
        cout<<"and there sum is "<<base1int + base2int<<endl;
    }
};
int main(){
    Derived d;
    d.setbase1int(24);
    d.setbase2int(6);
    d.show();
    return 0;
}