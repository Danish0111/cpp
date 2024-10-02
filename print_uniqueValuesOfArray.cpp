#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 1, 1, 2, 4, 4, 5, 5, 6, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool isUnique = true;
    for (int i = 0; i < size; i++)
    {
        isUnique = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
            
        }
        if (isUnique)
        {
            cout<<arr[i]<<" ";
        }
    }
    
    return 0;
}