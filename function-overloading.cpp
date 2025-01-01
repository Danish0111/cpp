#include <iostream>
using namespace std;

class A{
    public:
        int sum(int a, int b){
            return a + b;
        }
        int sum(int a, int b, int c){
            return a + b + c;
        }
        float sum(int a, float b){
            return a + b;
        }

        float sum(int a, float b, int c){
            return a + b + c;
        }
        double sum(int a, double b, int c){
            return a + b + c;
        }
};
int main(){
    A a;
    cout<<a.sum(4, 6)<<endl;
    cout<<a.sum(4, 6, 5)<<endl;
    cout<<a.sum(4, 6.5f)<<endl;
    cout<<a.sum(4, 6.5f, 5)<<endl;
    cout<<a.sum(4, 6.55567, 5)<<endl;
    return 0;
}