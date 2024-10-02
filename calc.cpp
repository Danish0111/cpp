#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    int num1, num2;
    char op;
public:
    void setData(){
        cout<<"enter first number: ";
        cin>>num1;
        cout<<"enter second number: ";
        cin>>num2;
        cout<<"enter operator: ";
        cin>>op;
    }
    int SimpleCalculation() { 
                         
        if (op  == '+')
        {
            cout<<"result: "<<num1 + num2<<endl;
        }
        if (op  == '-')
        {
            cout<<"result: "<<num1 - num2<<endl;
        }
        if (op  == '*')
        {
            cout<<"result: "<<num1 * num2<<endl;
        }
        if (op  == '/')
        {
            cout<<"result: "<<num1 / num2<<endl;
        }
    }
    
};

class ScientificCalculator{
    protected:
        int num;
        string op;
    public:
        void getNumber(){
            cout<<"enter operator: ";
            cin>>op;
            cout<<"enter value: ";
            cin>>num;
        }
        int ScientificCalculation(){

            if (op == "sqrt")
            {
                cout<<"result: "<<sqrt(num)<<endl;
            }
            if (op == "pow")
            {
                cout<<"result: "<<pow(num, num)<<endl;
            }
            if (op == "sin")
            {
                cout<<"result: "<<sin(num)<<endl;
            }
            if (op == "cos")
            {
                cout<<"result: "<<cos(num)<<endl;
            }
            
        }    
};

class hybrid : public SimpleCalculator, public ScientificCalculator{
    public:
        void showResult(){
            string calc_type;
            cout<<"select calculator type (simple or scientific) "<<endl;
            cin>>calc_type;
            if (calc_type == "simple")
            {
                setData();
                int simple = SimpleCalculation();
            }
            if (calc_type == "scientific")
            {
                getNumber();
                int sifi = ScientificCalculation();
            }
            
        }
};

int main(){
    hybrid hy;
    hy.showResult();
    cout<<"result: "<<0<<endl;
}