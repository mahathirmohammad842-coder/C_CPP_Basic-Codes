#include<iostream>
#include<string>
using namespace std;
class InventoryTracker{
protected:
    string _inventoryID;
public:

    int _stockCount;
    InventoryTracker(string id){

    _inventoryID=id;
    _stockCount=0;

    }

    void logShipment(int quantity){

    _stockCount+=quantity;

    cout<<"Shipped"<<quantity<<"items for Inventory ID:"<<_inventoryID<<endl;
    }
};


class SalesRecord{
protected:
    string _salesID;
public:
    double _unitPrice;
    SalesRecord(string id){
    _salesID=id;
    _unitPrice=10.0;
    }
    void applyDiscount(double percentage){
    _unitPrice=_unitPrice-(_unitPrice*(percentage/100));
    cout<<"Discount applied.New price:"<<_unitPrice<<endl;
    }
};


class SpecializedWidget : public InventoryTracker, public SalesRecord {
private:
    string _productName;

public:
    SpecializedWidget(string name, string inventoryID, string salesID) : InventoryTracker(inventoryID), SalesRecord(salesID) {
        _productName = name;
    }

    void printDetails() {
          cout<<"--- Specialized Widget Details --- "<<endl;
        cout << "Product Name: " << _productName << endl;
        cout << "Inventory ID: " << _inventoryID << endl;
        cout << "Sales ID: " << _salesID << endl;
        cout << "Unit Price: " << _unitPrice << endl;
    }

    void fullSetup(int initialStock) {
        _stockCount = initialStock;
        applyDiscount(15.0);
    }
};
int main(){
    SpecializedWidget obj("SW-500","INV-101","S-555");

    obj.fullSetup(100);
    obj.logShipment(5);
    obj.printDetails();
    return 0;
}

