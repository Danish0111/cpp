#include <iostream>
using namespace std;
class Stack
{
    int capacity;
    int top;
    int *arr;

public:
    Stack(int c)
    {
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }
    void push(int data)
    {
        if (this->top == this->capacity - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        this->top++;
        this->arr[top] = data;
    }
    int pop()
    {
        if (this->top == -1)
        {
            cout << "Stack Underflow" << endl;
            return INT16_MIN;
        }
        this->top--;
    }
    int getTop()
    {
        if (this->top == -1)
        {
            cout << "Under flow \n";
            return INT16_MIN;
        }
        return this->arr[this->top];
    }

    bool isEmpty()
    {
        if (this->top == -1){
            cout<<"Stack underflow"<<endl;
        }
    }
    bool isfull()
    {
        if (this->top == this->capacity - 1){
            cout<<"Stack overflow"<<endl;
        }
    }
    int size()
    {
        return this->top + 1;
    }
};
int main()
{
    Stack S1(5);
    S1.push(10);
    S1.push(20);
    cout << S1.getTop() << endl;
    return 0;
}