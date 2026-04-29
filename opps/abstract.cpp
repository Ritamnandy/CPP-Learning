//abstract class

#include<iostream>
#include<string>

using namespace std;


class Tea
{
private:
    /* data */
public:
    virtual void hello() = 0;
    virtual void call() = 0;
    virtual void print() = 0;

    void makecall(){
        hello();
        call();
        print();
    }
};


