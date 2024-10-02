#include <iostream>
using namespace std;

template <class T>
class Vector{
    public:
        T *arr;
        int size;
        Vector(int n){
            size = n;
            arr = new T[size];
        }
        T dotProduct(Vector &v){
            T dot = 0;
            for (int i = 0; i < size; i++)
            {
                dot += arr[i] * v.arr[i];
            }
            return dot;
        }
};

int main(){
    Vector <float> v1(3);
    v1.arr[0] = 1.3;
    v1.arr[1] = 0.6;
    v1.arr[2] = 2.5;
    Vector <float> v2(3);
    v2.arr[0] = 0.2;
    v2.arr[1] = 1.6;
    v2.arr[2] = 1.1;
    float product = v1.dotProduct(v2);
    cout<<product<<endl;
    return 0;
}