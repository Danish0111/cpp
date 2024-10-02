#include <iostream>
using namespace std;

// float average(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float average2(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T1, class T2>
float average(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

int main(){
    float a = average(5.4, 4.5);
    printf("average of a and b %.3f\n", a);
    return 0;
}