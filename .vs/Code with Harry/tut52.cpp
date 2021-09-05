#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
        // 1  2  3
        //       ^
        //       | 
        //       |
        //      ptr
        //  ptrTemp

int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new Shop [34];
    // 1.General store item
    // 2.Veggies item
    // 3.Hardware item
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p; 
    float q; 
    for (int i = 0; i < size; i++)
    { 
        cout << "Id & Price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++) 
    {
        cout << "Item number: " << i + 1 << endl; 
        ptrTemp->getData();
        ptrTemp++; 
    }
    

    return 0;
} 