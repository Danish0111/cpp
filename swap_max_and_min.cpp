#include <iostream>
using namespace std;

int main(){
    int arr[] = {10, 6, 3, 2, 11};
    int size = 5, temp;
    int smallestIndex = 0;
    int largestIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[smallestIndex])
        {
            smallestIndex = i;
        }
        if (arr[i] > arr[largestIndex])
        {
            largestIndex = i;
        }
    }
    temp = arr[smallestIndex];
    arr[smallestIndex] = arr[largestIndex];
    arr[largestIndex] = temp;

    cout<<"array after swapping largest and smallest"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}