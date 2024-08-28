#include<iostream>
#include<string>
using namespace std;

class Address{
  string building;
  string street;
  string city;
  int pin;
  
  public:
  Address(string building,string street,string city,int pin )
  {
      this->building=building;
      this->street=street;
      this->city=city;
      this->pin=pin;
  }
  string getBuilding()
  {
      return building;
  }
  string getStreet()
  {
      return street;
  }
  string getCity()
  {
      return city;
  }
  int getPin()
  {
      return pin;
  }
  void setBuilding(string building)
  {
      this->building=building;
  }
  void setStreet(string street)
  {
      this->street=street;
  }
  void setCity(string city)
  {
      this->city=city;
  }
  void setPin(int pin)
  {
      this->pin=pin;
  }
  void display()
  {
      cout<<"Building Name is: "<<building<<endl;
      cout<<"Street Name is: "<<street<<endl;
      cout<<"City Name is: "<<city<<endl;
      cout<<" Pin is: "<<pin<<endl;
  }
};
int main()
{
    Address a("Sunbeam","Power House","Pune",414141);
    a.display();
}
