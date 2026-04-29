#include<iostream>

using namespace std;

int main()
{
    int numberOfcups;
    double pricePerCup, totalprice, discountprice;

    cout << "Enter the number of cup:- ";
    cin >> numberOfcups;
    cout << "Enter the price per cup:- ";
    cin >> pricePerCup;
    totalprice = pricePerCup * numberOfcups;
    if(totalprice>=100)
    {
        discountprice = totalprice - (totalprice * 0.05);
        cout << "Discounted price is " << discountprice << endl;
    }else{
          cout << "Totalprice price is " << totalprice << endl;
    }
    return 0;
}