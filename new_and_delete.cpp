#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int *ptr = &a;
    cout<<"valuer of a is "<<*ptr<<endl;

    // new keyword
    int *p = new int(40);
    cout<<"value at value p is "<<*p<<endl;

    int *arr = new int[3];
    arr[0] = 3;
    arr[1] = 2;
    arr[2] = 5;
    cout<<"value of arr[1] is "<<arr[1]<<endl;

    // delete keyword
    delete[] arr;
    cout<<"value of arr[1] after deleting arr is "<<arr[1]<<endl;
    return 0;
}