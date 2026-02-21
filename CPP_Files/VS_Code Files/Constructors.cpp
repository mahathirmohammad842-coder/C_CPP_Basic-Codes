#include<iostream>

using namespace std;
class Student{     //pascal case starts with capital
   public:
    string name;
    int rno;
    float gpa;
    Student(){}   //default constructor
    Student(string s, int r, float g){  //parameterized constructor
        name = s;
        rno = r;
        gpa = g;
    }

    

};


int main(){
    Student s1("Mahahtir ", 16 , 9.1);
    Student s2("Avoy ", 15 , 9.2);

    Student s3,s4;
    s3.name = "Esha";
    s3.rno = 17;
    s3.gpa = 9.1;

    s4 = s3; //Deep Copy 
    s4.name = "Sanjida";
    s4.rno = 19;

   Student s5(s4); // Deep copy

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<endl;
    cout<<s4.name<<" "<<s4.rno<<" "<<s4.gpa<<endl;
    cout<<s5.name<<" "<<s5.rno<<" "<<s5.gpa<<endl;

}
