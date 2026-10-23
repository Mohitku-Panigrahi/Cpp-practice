#include<iostream>
using namespace std;
class sum{
    int num1,num2;
    public:
    sum(){
        num2=50;
    }
    void getData(){
        cout<<"Enter value of num1"<<endl;
        cin>>num1;
    }
    friend int operator+(sum &ob,sum &obj);
    // int operator+(sum &ob){
    //     return (num1+ob.num2)
    // }
};
int operator+(sum &ob, sum &obj){
        return (ob.num1+obj.num1);
    }
int main(){
    int result;
    sum obj1,obj2;
    obj1.getData();
    result= obj1+obj2;
    cout<<"Sum = "<<result<<endl;
}