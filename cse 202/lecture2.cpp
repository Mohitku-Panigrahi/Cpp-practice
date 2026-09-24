#include<iostream>
using namespace std;
class account{
    private:
    double balance=0;
    public:
    void deposit(double balance1){
        if(balance1>0)
        balance+=balance1;

    }
    void withdraw(double balance1){
        if (balance1>0 && balance>balance1)
        balance -= balance1;
    }
    void showbalance(){
        cout<<"Balance is : "<<balance;
    }
};
int main(){
    account obj;
    obj.deposit(1000);
    obj.showbalance();
}



//enumerators
#include<iostream>
using namespace std;
main(){
    enum days{sun,mon,tues,wed,thur,fri,sat};
    days day1,day2;
    day1=sun;
    day2 = fri;
    cout<<day1<<"\t"<<day2;
    if (day1>day2){
    cout<<"day1 comes after day2";
    }
    else{
        cout<<"day2 comes after day1";
    }
}



//if a function is inline the compiler places a copr of the code of that particular code at each and every time when the function is called at a compiler time 
//