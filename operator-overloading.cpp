#include <iostream>
using namespace std;

class Increment{
    int num;
    public:
        Increment(int n){
            num = n;
        }
        void operator ++(int){
            num++;
        }
        void operator ++(){
            ++num;
        }
        void display(){
            cout<<"value of num is: "<<num<<endl;
        }
};
int main(){
    Increment i(10);
    i++;
    i.display();
    ++i;
    i.display();
    return 0;
}