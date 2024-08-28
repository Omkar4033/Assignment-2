#include<iostream>
using namespace std;
class Box{
  int length;
  int width;
  int height;
  
  public:
  Box()
  {
      length=1;
      width=1;
      height=1;
  }
  Box(int val):Box(val,val,val){};
  Box(int length,int width,int height)
  {
      this->length=length;
      this->width=width;
      this->height=height;
  }
  
  int volume()
  {
      return length*width*height;
  }
};
int main()
{
    while(true){
        cout<<"Calculate volume of the box "<<endl;
        cout<<"1.Volume with default values"<<endl;
        cout<<"2.Volume with same dimensions"<<endl;
        cout<<"3.Volume with different length,bredth,height"<<endl;
        cout<<"4.Exit"<<endl;
        int key;
        cout<<"<------Select an Option-------->"<<endl;
        cin>>key;
        switch(key){
            case 1:
                {
                    Box b;
                    cout<<"Volume of box is: "<<b.volume()<<endl;
                    break;
                }
                
            case 2:
                    {
                        int val;
                        cout<<"Enter the dimension: ";
                        cin>>val;
                        Box b(val);
                        cout<<"Volume of box is: "<<b.volume()<<endl;
                        break;
                    }
                
            case 3:
                    {
                        int length,width,height;
                        cout<<"Enter the length: ";
                        cin>>length;
                        cout<<endl;
                        cout<<"Enter the width: ";
                        cin>>width;
                        cout<<endl;
                        cout<<"Enter the height : ";
                        cin>>height;
                        cout<<endl;
                        Box b(length,width,height);
                        cout<<"Volume of box is: "<<b.volume()<<endl;
                        break;
                    }
                
            case 4:
                return false;
            default:
                break;
        }
        char c;
        cout<<"Want to Calculate Again (y/n) ?"<<endl;
        cin>>c;
        if(c!='y')
        break;
       
    }
}