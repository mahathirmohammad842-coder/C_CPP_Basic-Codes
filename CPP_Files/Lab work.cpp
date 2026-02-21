#include<iostream>
#include<string>
using namespace std;
class Person{
private:
    string name;
    int age;
public:
    void setPerson(string n,int a){
    name=n;
    age=a;
    }
    void setdisplay(){
    cout<<"Name is:"<<name<<endl;
    cout<<"Age is:"<<age<<endl;
    }
};
class Student:public Person{
protected:
    int rollNumber;
public:
    void setStudent(string n,int a,int r){
    setPerson(n,a);
    rollNumber=r;
    }
    void studentdetails(){
    setdisplay();
    cout<<"Roll Number:"<<rollNumber<<endl;
    }
};
class GraduateStudent:public Student{
private:
    string researchTopic;
public:
    void setGraduate(string n,int a,int r,string t){
    setStudent(n,a,r);
    researchTopic=t;
    }
    void show(){
    studentdetails();
    cout<<"Research Topic:"<<researchTopic<<endl;
    }
};
int main(){
GraduateStudent obj;
obj.setGraduate("Avoy",20,15,"CSE");
obj.show();
return 0;
}
