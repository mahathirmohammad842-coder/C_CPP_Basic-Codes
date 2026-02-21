#include<iostream>
//using namespace std;
//using std::cout;

namespace Number{

    class A{
            public:
                int a;

        A(int b){

            a= b;
        }

        void show(){
        std:: cout<<a;
        }

        };
}

class A{
        public:
            int a;

    A(int b){

        a= b;
    }

    void show1(){
    std:: cout<<a;
    }

};




int main(){

    Number:: A obj(5);
    A obj(10);
    obj.show1();
    obj.show();

return 0;
}
