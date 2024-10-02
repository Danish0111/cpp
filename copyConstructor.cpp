#include <iostream>
using namespace std;

class Number{
    int a = 0;
    public:
        Number(){}
        Number(int num){
            a = num;
        }
        Number(Number &obj){
            a = obj.a;
        }
        void display(){
            cout<<"value of a is "<<a<<endl;
        }
};
int main(){
    Number x, y, z(64);
    x.display();
    y.display();
    z.display();
    Number z1(z);
    z1.display();
    return 0;
}