#include <iostream>
using namespace std;
class BankDeposite
{
    int Principle, Years;
    float InterestRate;
    int ReturnValue;

public:
    BankDeposite() {}
    BankDeposite(int p, int y, float r);
    BankDeposite(int p, int y, int r);
    void view();
};

void BankDeposite::view()
{
    cout << "Principle Amount was " << Principle << ". After " << Years << " Years ReturnValue is " << ReturnValue << endl;
}
BankDeposite::BankDeposite(int p, int y, float r)
{
    Principle = p;
    Years = y;
    InterestRate = r;
    ReturnValue = Principle;
    for (int i = 0; i < Years; i++)
    {
        ReturnValue = ReturnValue * (1 + InterestRate);
    }
}
BankDeposite::BankDeposite(int p, int y, int r)
{
    Principle = p;
    Years = y;
    InterestRate = float(r) / 100;
    ReturnValue = Principle;
    for (int i = 0; i < Years; i++)
    {
        ReturnValue = ReturnValue * (1 + InterestRate);
    }
}

int main()
{
    BankDeposite bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    cout << "Enter the value of p ,y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposite(p, y, r);
    bd1.view();

    cout << "Enter the value of p ,y and R " << endl;
    cin >> p >> y >> R;
    bd1 = BankDeposite(p, y, R);
    bd1.view();

    return 0;
}