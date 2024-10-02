#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v){
    for (int i = 0; i <= v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> vec1; //vector with zero size
    vector<int> vec2(4); //vector with size 4
    vec2.push_back(6);
    vector<int> vec3(vec2); //vector created using another vector
    display(vec3);
    vector<int> vec4(4, 3); //vector with 4 3s
    display(vec4);
    int size;
    cout<<"enter size of vector"<<endl;
    cin>>size;
    int element;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter element of vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1, 2, 56);
    vec1.pop_back();
    display(vec1);
    return 0;
}