#include<iostream>
using namespace std; 
class Num1{
    protected:
    int a;
    public:
    void getA(){
        cout<<"Enter a";
        cin>>a;
    }

};
class num2:public Num1{
    private:
    int b;
    public:
    void getB(){
        cout<<"Enter the value of b : ";
        cin>>b;
    }
    void mul(){
        int result= a*b;
        cout<<"Mul is: "<<result<<endl;

    }
};
int main(){
    num2 obj;
    obj.getB();
    obj.getA();
    obj.mul();
}
//Ambigity and divergent inheritance learn it 
