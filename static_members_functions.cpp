#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count; //static members
    public:
        void setData(){
            cout<<"enter employee id"<<endl;
            cin>>id;
            count++;
        }
        void getData(){
            cout<<"employee id is "<<id<<" and employee no. is "<<count<<endl;
        }
        static int displayCount(){ 
            //cout<<id; //static functions can only use static members
            cout<<"the count is "<<count<<endl;
        }
};
int Employee :: count;
int main(){
    Employee e[3];
    for (int i = 0; i < 3; i++)
    {
        e[i].setData();
        e[i].getData();
        Employee :: displayCount();
    }
    
    return 0;
}