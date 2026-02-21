#include<iostream>

using namespace std;

class Number{
    int num1,num2;

private:
    Number(int a, int b){
    num1=a;
    num2=b

    }

int sum(){

return num1+num2;
}

float average(){

return (num1+num2)/2;

}
};

int main(){
Number 01(1,2),02(3,4);

cout<<01.sum()
cout<<01.average()



return 0;
};
