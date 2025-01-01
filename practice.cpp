#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream out;
    out.open("telephone.txt");
    out<<"john ";
    out<<34567<<endl;
    out<<"hari ";
    out<<56792<<endl;

    string name;
    cout<<"Enter name : ";
    getline(cin, name);

    long number;
    cout<<"Enter number : ";
    cin>>number;
    
    out<<name<<" ";
    out<<number<<endl;

    out.close();

    ifstream in("telephone.txt");
    string content;
    while (in.eof() == 0)
    {
        getline(in, content);
        cout<<content<<endl;
    }

    in.close();
    
    return 0;
}