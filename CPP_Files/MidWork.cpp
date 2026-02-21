#include<iostream>
using namespace std;

class Item{
private:
    string itemName;
    int itemID;
    float price;
    int quantityInStock;

public:
    void setDetails(int id, string name,float pr, int qty){

    itemID = id; itemName= name; price= pr; quantityInStock = qty;
    }

    void displayDetails(){
        cout<<"itemName : "<<itemName<<endl;
        cout<<"itemID : "<<itemID<<endl;
        cout<<"price : "<<price<<endl;
        cout<<"quantityInStock : "<<quantityInStock<<endl;
        }

     void restock(int additionalQty){
         quantityInStock += additionalQty;
     }

     bool sell(int requestedQty){
         if(requestedQty <= quantityInStock){
            quantityInStock -= requestedQty;
         }
         return true;
     }

};


int main(){
    Item obj;
            obj.setDetails(16,"Mobile",25000,5);
            obj.displayDetails();
            obj.restock(10);
            obj.displayDetails();
            obj.sell(12);
return 0;
}
