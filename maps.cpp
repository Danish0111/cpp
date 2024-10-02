#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string, int> idMap;
    idMap["danish"] = 132;
    idMap["john"] = 122;    
    idMap["jack"] = 111;
    idMap.insert({"harry", 142});
    map<string, int> :: iterator itr;
    for (itr=idMap.begin(); itr!=idMap.end(); itr++)
    {
        cout<<(*itr).first<<" : "<<(*itr).second<<endl;
    }
    
    return 0;
}