#include <iostream>
using namespace std;

template <class T1=int, class T2=float>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};

int main(){
    myClass<> d1(1, 2.4);
    d1.display();
    cout<<endl;
    myClass<int, char> d2(1, 'c');
    d2.display();

    return 0;
}