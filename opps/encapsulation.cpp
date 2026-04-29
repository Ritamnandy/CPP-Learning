//encapsulation 

#include<iostream>

using namespace std;


class BankAccount
{
    private:
        string name;
        double Balance;
        double getBalance()const{
            return Balance;
        }
    public:
    BankAccount(string accname,double taka){
        name = accname;
        Balance = taka;
    }
    void setBalance(double taka) {
        if(taka>0)
        {
            Balance += taka;
            cout << "Deposited " << taka << endl;
        }else{
            cout << " Invalid amount" << endl;
        }
    }
    void withDraw(double amount){
        if(amount>0&&amount<=Balance){
            Balance -= amount;
        }else{
            cout << " Invalid amount" << endl;
        }
    }
    void display(){
        cout << "Now balance " << Balance << endl;
    }
};


int main(){
    BankAccount myacomnt("12658778", 1000.00);
    myacomnt.setBalance(200);
    myacomnt.withDraw(100);
    myacomnt.display();
    return 0;
}


