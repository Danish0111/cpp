#include <iostream>
using namespace std;

class Base{
    protected:
        int a; 
    private:
        int b;
};

class Derived : public Base{
    public:
        void setData(int val){
            a = val; //a is accessible here because it is protected
        }
        int getData(){
            return a;
        }
};
int main(){
    Derived d;
    d.setData(5);
    int value = d.getData();
    cout<<"value of a is "<<value<<endl;
    // d.a = 5; //not allowed
    return 0;
}