#include<iostream>
using namespace std;

class toolbooth
{
  unsigned int total_cars;
  double amount;
  
  public:
  toolbooth()
  {
      total_cars=0;
      amount=0;
  }
  void payingCar()
  {
      total_cars++;
      amount+=0.5;
  }
  void nopayCar()
  {
      total_cars++;
  }
  void printOnConsole()
  {
      cout<<"No. of paying cars: "<<(amount*2)<<endl;
      cout<<"No. of Non-paying cars: "<<total_cars-(amount*2)<<endl;
  }
};
int main()
{
    toolbooth t;
    t.payingCar();
     t.payingCar();
      t.payingCar();
       t.payingCar();
       
    t.nopayCar();
    t.payingCar();
    t.nopayCar();
    t.payingCar();
    t.nopayCar();
    
    t.printOnConsole();
    
}