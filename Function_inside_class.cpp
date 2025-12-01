#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int math_mark;
    int english_mark;
    // constructor
    Student(string name, int roll , int math_mark, int english_mark){
        this->name = name;
        this->roll = roll;
        this->math_mark = math_mark;
        this->english_mark = english_mark;
    }
    // declared a func
    void hello(){
        cout << "Hello" << " " << name << endl;
    }
    void total_mark(){
        cout << "Total Mark of " << name << " " << math_mark + english_mark << endl;
    }
};

int main(){
    Student sakib("Sakib Ahmed", 23 , 82 , 52);
    // cout << sakib.name << " " << endl;
    sakib.hello(); // call hello() func
    Student rakib("Rakib Ahmed", 25 , 89 , 54);
    rakib.hello();
    sakib.total_mark();
    rakib.total_mark();

    return 0;
}