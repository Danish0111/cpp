#include <iostream>
using namespace std;

int factorial(int num){
    if (num == 0 || num == 1)
    {
        return 1;
    }
    return num * factorial(num-1);
}
int main(){
    float e = 1.0;
    for (int i = 1; i <= 10; i++)
    {
        e+=1.0/factorial(i);
    }
    cout<<"value of the series is: "<<e<<endl;
    
    return 0;
}