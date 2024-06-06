#include <iostream>

using namespace std;

//                          ****** Memory allocation for object & using arrays**********

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void shop::setPrice(void)
{
    cout << "Enter Id of your item " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}