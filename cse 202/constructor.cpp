#include<iostream>
using namespace std;
class student
{
private:
    int rollNo, regdNum;
    string name,section;
public:    
    student(){
        cout<<"Enter roll, regd"<<endl;
        cin>>rollNo>>regdNum;
        cout<<"Enter name and section"<<endl;
        cin>>name>>section;
    }
    student(int roll,int regd,string n,string sec){
        rollNo=roll;
        regdNum=regd;
        name=n;
        section = sec;
    }
    ~student(){
        cout<<"Destructor called"<<endl;
    }
    void display(){
        cout<<"Entered value "<<endl;
        cout<<rollNo<<endl;
        cout<<regdNum<<endl;
        cout<<name<<endl;
        cout<<section<<endl;
    }
};
int main(){
    student obj,obj1(2,123,"acs","IKL");
    obj.display();
    obj1.display();
}