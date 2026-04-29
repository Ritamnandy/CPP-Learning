

#include<iostream>

using namespace std;


class Tea{
    protected:
        string teaName;
        int Order;
    public:
    Tea(int oredr,string name){
        teaName = name;
        Order = oredr;
        cout << "Tea constructer called" <<teaName<< endl;
    }     
    virtual void brew()const {
        cout << "Brewing " << teaName << endl;
    }  
     virtual void serving()const{
        cout << "Serving coup of tea " << Order << endl;
    }  
};

class GreenTea: public Tea{

    public:
        GreenTea(int order) : Tea(order,"Green tea"){
            cout << "Green tea constructor called" << endl;
        };
        void serving()const override{
            cout << "Serving coup of  tea " << Order << endl;
        }
};

class MaselaTea: public Tea{

    public:
        MaselaTea(int order) : Tea(order,"Masela tea"){
            cout << "Masela tea constructor called" << endl;
        };
        void serving()const override final {
            cout << "Serving coup of  tea " << Order << endl;
        }
};


// class SpicyMaselaTea: public MaselaTea{

//     void serving()const override final{
//             cout << "Serving coup of  tea " << Order << endl;
//         }
// };

int main() {
    Tea *tea1=new GreenTea(20);
    Tea *tea2 = new MaselaTea(2);
    tea1->brew();
    tea1->serving();
    tea2->brew();
    tea2->serving();

    delete tea1;
    delete tea2;
    return 0;
}