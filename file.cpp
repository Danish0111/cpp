#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    // writing to a file
    ofstream out("sample.txt");
    string name;
    cout<<"Enter your name : ";
    // cin>>name;
    getline(cin, name); // to get a line
    out<<name<<endl;

    // reading a file
    ifstream in("sample.txt");
    string content;
    // in>>content;
    getline(in, content); // to get a line
    cout<<"content of this file is : "<<content<<endl;
    
    in.close();
    return 0;
}