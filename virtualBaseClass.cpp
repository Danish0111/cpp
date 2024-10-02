#include <iostream>
using namespace std;

class Student{
    protected:  
        int roll_no;
    public:
        void setNumber(int r){
            roll_no = r;
        }
        void printNumber(){
            cout<<"your roll no. is "<<roll_no<<endl;
        }

};

class Marks : virtual public Student{
    protected:
        float physics;
        float maths;
    public:
        void setMarks(float m1, float m2){
            physics = m1;
            maths = m2;
        }
        void printMarks(){
            cout<<"physics: "<<physics<<endl;
            cout<<"maths: "<<maths<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        int score;
    public:
        void setScore(int s){
            score = s;
        }
        void printScore(){
            cout<<"score: "<<score<<endl;
        }
};

class Total : public Marks, public Sports{
    float total; 
    public:
        void display(){
            total = physics + maths + score;
            printNumber();
            printMarks();
            cout<<"total score is "<<total<<endl;

        }
};

int main(){
    Total t;
    t.setNumber(132);
    t.setMarks(70, 77);
    t.setScore(6);
    t.display();
    return 0;
}