#include <iostream>
#include <list>
using namespace std;

void display(list<int> l){
    list<int> :: iterator iter = l.begin();
    for (iter=l.begin(); iter!=l.end(); iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
    
}
int main(){
    list<int> l1; //list with zero size
    l1.push_back(2);
    l1.push_back(1);
    l1.push_back(5);
    l1.push_back(8);
    // l1.pop_back();
    // l1.pop_front();
    // l1.remove(1);
    l1.sort();
    display(l1);

    list<int> l2(4); //empty list with size 4
    list<int> :: iterator iter = l2.begin();
    *iter = 54;
    iter++;
    *iter = 34;
    iter++;
    *iter = 64;
    iter++;
    *iter = 24;
    iter++;

    l2.sort();
    display(l2);

    l1.merge(l2);
    cout<<"l1 after merging with l2"<<endl;
    display(l1);
    return 0;
}