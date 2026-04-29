//eck if the given number is the Armstrong number or not (e.g 153 =
// 27+125+1).

#include<iostream>
#include<cmath>
using namespace std;

class Calculate_Armstrong_number
{
    private:
      int  total = 0;
      int i = 0;
      int temp;

  public:
      Calculate_Armstrong_number(){};
      void Calculate(int Arm_number)
        {
            temp = Arm_number;
            while (temp!=0)
            {
            temp = temp/ 10;
            i++;
            }
            temp = Arm_number;
            while (temp!=0)
            {
                int x = temp % 10;
                total += (int)pow(x, i);
                temp /= 10;
            }
            
            if(total==Arm_number){
                cout << Arm_number << " is an armstrong number"<<endl;
            }else{
                cout << Arm_number << " is not an armstrong number"<<endl;
            }
        }  
};


int main()
{
    Calculate_Armstrong_number cal1;

    cal1.Calculate(153);
    return 0;
}
