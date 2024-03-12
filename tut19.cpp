#include <iostream>
using namespace std;

class Shop
{
    int itemId[100], itemPrice[100], counter;

public:
    void initCounter(void){counter = 0;};
    void setPrice();
    void displayPrice();
};

void Shop::setPrice()
{
    cout << "Enter price of your item no " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item no " << i+1 << " is Rs." << itemPrice[i] << endl;
    }
}
int main()
{
    Shop item;
    item.initCounter();
    item.setPrice();
    item.setPrice();
    item.setPrice();
    item.setPrice();
    item.displayPrice();
    return 0;
}