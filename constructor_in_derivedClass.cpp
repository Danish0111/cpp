#include <iostream>
using namespace std;

class Base1{
    int data1;
    public:
        Base1 (int i){
            data1 = i;
            cout<<"Base1 constructor is called"<<endl;
        }
        void getDataBase1(){
            cout<<"Base1 data: "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2 (int i){
            data2 = i;
            cout<<"Base2 constructor is called"<<endl;
        }
        void getDataBase2(){
            cout<<"Base2 data: "<<data2<<endl;
        }
};

class Derived : public Base1, public Base2{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived constructor is called"<<endl;
        }
        void getDataDerived(){
            cout<<"derived1 data: "<<derived1<<endl;
            cout<<"derived2 data: "<<derived2<<endl;
        }
};

int main(){
    Derived d(2, 4, 6, 8);
    d.getDataBase1();
    d.getDataBase2();
    d.getDataDerived();
    return 0;
}