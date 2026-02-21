#include<iostream>

using namespace std;

class Rectangle{

float length,width; //auto_private

public:

    Rectangle()
    {
        length = 1;
        width = 1;
    }

    Rectangle(float l,float w)
    {
        length=l,width=w;
    }



    ~Rectangle()
    {
       cout<<"Rectangle object destroyed"<<endl;
    }

    double area()
    {
      return  length*width;
    }

    double perimeter()
    {
        return 2 * (length+width);
    }

    void display()

    {
        cout<<"Length is : " <<length<<endl;
        cout<<"Width is : " <<width<<endl;
        cout<<"Area is : " <<area()<<endl;
        cout<<"Perimeter is : " <<perimeter()<<endl;
    }

};


int main()
{
 Rectangle num1,num2(4,5);


num1.display();
num2.display();

};
