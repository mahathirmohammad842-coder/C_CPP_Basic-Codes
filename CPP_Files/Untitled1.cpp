#include<iostream>

using namespace std;
class Student{     //pascal case starts with capital
   public:
    string name;
    int rno;
    float gpa;

};

int main(){
    Student s1,s2;   //initialization

    s1.name = "Mahathir";
    s1.rno = 16;
    s1.gpa = 9.1;

    s2.name = "Avoy";
    s2.rno = 15;
    s2.gpa = 9.2;

    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
    cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;

return 0;
}
