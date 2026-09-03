#include <iostream>
#include<iomanip>
using namespace std;


/*about class
#include<iostream>
using namespace std;
class account
{
private:
    double balance;
    
public: void deposit(double balance1)
{
    if (balance1>0)
    balance=balance+balance1;
}
void withdraw( double balance1){
if (balance1>0 && balance>balance1){
    balance=balance-balance1;
}
}
void showBalance(){
    cout<<"Balance is:"<<balance<<endl;
}
};
int main(){
    account obj;
    obj.deposit(1000.00);
    obj.showBalance();
    obj.withdraw(500);
    obj.showbalance();
}

/*union
#include<iostream>
using namespace std;
union account
{
    int balance;
    char name[20];
};
int main(){
    account obj;
    cout<<"Memory Occupied by obj is:"<<sizeof(obj)<<endl;
    cin>>obj.name;
    cin>>obj.balance;
    cout<<"Name ="<<obj.name<<endl;
    cout<<"Balance ="<<obj.balance<<endl;
}*/
/*enumeration
#include<iostream>
using namespace std;
int main(){
    enum days{sun,mon,tue,wed,thur,fri,sat};
    days day1,day2;
    day1=sun;
    day2=fri;
    cout<<day1<<"\t"<<day2<<endl;
    if(day1>day2){
        cout<<"day1 comes after day2";
    }else{
        cout<<"day 1 comes before day2";
    }
}
*/
/*static function and static member */
/*class student{
public: 
static int count;
string name;
void getdata(){
    cin>>name;
    cout<<"Name: "<<name;
}
void getcount(){
    count++;
    cout<<count<<" ";
}
}obj1,obj2;
int student::count;
int main(){
    obj1.getcount();
    obj2.getcount();
}*/
/*static member function can only access the static data

class test{
    static int count;
    int code;
    public:
    void setcode(){
        code=++count;
    }
    void showcode(){
        cout<<"Code:"<<code<<endl;

    }
     static void showcount(){
        cout<<"count: "<<count<<endl;
     }
};
int test::count;
int main(){
    test t1,t2;
    t1.setcode();
    test::showcount();
    t1.showcode();
    t2.showcode();
}*/
/*friend function
class dummy;
class abc{
    private:
    int a,b;
    public:
    void sum(){
        cin>>a>>b;
        cout<<"Sum is: "<<a+b<<endl;
    }
    friend void addition(abc obj,dummy obj1);
};
class dummy{
    private :
    friend void addition(abc obj,dummy obj1);
    int c,d;
};

    void addition(abc obj,dummy obj1){
        cin>>obj.a>>obj.b>>obj1.c>>obj1.d;
        cout<<"Sum is: "<<obj.a+obj.b+obj1.c+obj1.d<<endl;
    }
int main(){
    abc obj;
    dummy obj1;
    obj.sum();
    addition(obj,obj1);
}*/
/*New friend class example
class A{
    int a,b;
    public:
    void output(){
        cout<<a<<endl<<b;
    }
    friend class B;
};
class B{
    int c;
    public:
    void ip(A &obj){
        obj.a=23; obj.b=24;
    }
};
int main(){
    A objA;
    B obj1;
    obj1.ip(objA);
    objA.output();
}*/
/*function 
int sum();
int  main(){
    int result;
    result=sum();
    cout<<"Sum="<<result<<endl;
 }
int sum(){
    int num1,num2;
    cout<<"Enter 2 Numbers"<<endl;
    cin>>num1>>num2;
    return (num1+num2);
}*/
/*call by function ,call by reference ,call by address*/
/*Swap
void swap(int ,int);
int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<"Before Swap "<<num1<<" "<<num2<<endl;
    swap(num1,num2);
    cout<<"After Swap called :"<<num1<<" "<<num2<<endl;

}
void swap(int a,int b){
    int temp;
    cout<<"in function call before Swapping"<<a<<" "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"in function call after swapping"<<a<<" "<<b<<endl;
}*/
/*void swap(int *a,int *b);

int main(){
    int num1,num2;
    cin>>num1>>num2;
    cout<<"Before function call"<<num1<<" "<<num2<<endl;
    swap(&num1,&num2);
    cout<<"After dunction call"<<num1<<" "<<num2;
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}*/
/*char 
void display(char a='@',int b=100);
int main(){
    //display();
    //display('y');
    //display('y',10000);

}
void display(char x,int y){
    cout<<"char ="<<x<<"int = "<<y;
}
*/
/*int sum(int ,int);
double sum(double,double);
double sum(int ,double);
int main(){
    int a=10,b=20;
    double c=20.4,d=45.45;
    cout<<sum(a,b)<<endl;
    cout<<sum(c,d)<<endl;
    cout<<sum(a,c)<<endl;
}
int sum(int x ,int y ){
    return(x+y);
}
double sum(int x ,double y ){
    return(x+y);
}
double sum(double x ,double y ){
    return(x+y);
}
*/
/*int main(){
    int a[5]={1,2,3,4,5};
    int *ptr=a;
    ptr++;
    cout<<"address of ptr"<<ptr <<endl;
    cout<<*ptr<<endl;
    ptr=ptr +2;
    cout<<*ptr <<endl;
    cout<<"address of ptr"<<ptr<<endl;

}
int main(){
    int a[5]={1,2,3,4,5};
    int *ptr=a;
   int *ptr1=&a[1];
   cout<<(ptr-ptr1)<<endl;

}*/
// class simple{
//     public:
//     int a;
// };
// int main(){
//     simple obj;
//     simple *ptr;
//     ptr=&obj;
//     obj.a=10;
//     ptr->a=200;
//     cout<<obj.a<<endl;
//     cout<<ptr->a;
// }
class data{
    public:
    int a;
    void print(){cout<<"a is ="<<a<<endl;};
};
int main(){
    data d,*dp;
    dp=&d;
    int data::*ptr=&data::a;
    d.*ptr=10;
    d.print();
    dp->*ptr=20;
}