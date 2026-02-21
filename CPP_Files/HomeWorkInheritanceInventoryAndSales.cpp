#include<iostream>
#include<string>


using namespace std;

class InventoryTracker {
protected:
    string _inventoryID;

public:
    int _stockCount = 0;

 InventoryTracker(string id) {
        _inventoryID = id;
    }

    void logShipment(int quantity) {
        _stockCount += quantity;
        cout << "Shipped " << quantity << " items for Inventory ID: " << _inventoryID << endl;
    }
};


class SalesRecord {
protected:
    string _salesID;

public:
    double _unitPrice = 10.0;

    SalesRecord(string id) {
        _salesID = id;
    }

    void applyDiscount(double percentage) {
        _unitPrice -= (_unitPrice * percentage / 100.00);
        cout << "Discount applied. New price: " << _unitPrice << endl;
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

int main() {

    SpecializedWidget widget("SW-500",  "INV-101" , "S-555" );

    widget.fullSetup(100);

    widget.logShipment(5);
    widget.printDetails();

    return 0;
}
