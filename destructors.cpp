#include <iostream>
using namespace std;

int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "constructor is invoked for object number" << count << endl;
    }

    ~num()
    {
        cout << "destructor is invoked for object number" << count << endl;
        count--;
    }
};

int main()
{
    cout << "entering main function" << endl;
    cout << "creating object n1" << endl;
    num n1;
    {
        cout<<"creating two more objects"<<endl;
        num n2, n3;
    }
    cout<<"back to main"<<endl;
    return 0;
}