#include <iostream>
using namespace std;

class Base
{
public:
    string name;
    int id;
    // Base(){}
    // Base(string n, int i)
    // {
    //     name = n;
    //     id = i;
    // }
    void setNameId(string n, int i)
    {
        name = n;
        id = i;
    }
    void getName()
    {
        cout << "name : " << name << endl;
    }
    void getId()
    {
        cout << "Id : " << id << endl;
    }
};

class Derived : public Base
{
public:
    int age;
    Derived(int a)
    {
        age = a;
    }
    void getAge()
    {
        cout << "Age : " << age << endl;
    }
};
int main()
{
    // Base b;
    Derived d(18);
    d.setNameId("danish", 132);
    d.getId();
    d.getName();
    d.getAge();
    
    return 0;
}