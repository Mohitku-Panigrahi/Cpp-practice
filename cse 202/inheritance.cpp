#include<iostream>
using namespace std; 
class square{ //base class or parent class
protected:
int side;
public:
    square(){ //base class constructor getting called auto matically
        cout<<"Base class constructor called "<<endl;
    }
};
class area:public square{  //derived class or child class
    public:
    area(){
        cout<<"Enter side of the square : ";
        cin>>side;
    }
    void getArea(){
        cout<<"Area of square is : "<< side*side<<endl;
    }

};
int main(){
    area obj;
    obj.getArea();
}