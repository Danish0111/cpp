#include <iostream>
#include <iomanip>  
using namespace std;
int global = 4;
void sum(){
    cout<<global;
}
int main(){
    // std::cout<<"Hello World";
    int global = 8;
    int a=4, b=15, c=167, d=1323;
    cout<<"value of a is "<<a<<" and the value of b is "<<b<<"\n";
    cout<<global<<"\n";
    sum();
    cout<<"\nvalue of global variable is "<<::global<<endl; //'::' scope resolution operator

    cout<<"value of a without setw is "<<a<<endl;
    cout<<"value of b without setw is "<<b<<endl;
    cout<<"value of c without setw is "<<c<<endl;

    cout<<"value of a with setw is "<<setw(4)<<a<<endl;
    cout<<"value of b with setw is "<<setw(4)<<b<<endl;
    cout<<"value of c with setw is "<<setw(4)<<c<<endl;
    return 0;
}