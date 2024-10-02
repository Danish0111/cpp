#include <iostream>
#include <fstream>
using namespace std;

int main(){
    
    // writing to a file
    ofstream out;
    out.open("sample2.txt");
    out<<"this is content of sample2.txt\n";
    out<<"this is next line";
    out.close();

    // reading a file
    ifstream in;
    in.open("sample.txt");
    string content;
    
    while (in.eof() == 0)
    {
        getline(in, content);
        cout<<content<<endl;
    }
    
    in.close();
    return 0;
}