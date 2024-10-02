#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"enter the value of num1: "; //'<<' <-- insertion operator
    cin>>num1; //'>>' <-- extraction operator

    cout<<"enter the value of num1: "; //'<<' <-- insertion operator
    cin>>num2; //'>>' <-- extraction operator

    cout<<"sum of num1 and num2 is "<<num1 + num2;
    return 0;
}