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
    void display(){
        cout<<"Entered value "<<endl;
        cout<<rollNo<<endl;
        cout<<regdNum<<endl;
        cout<<name<<endl;
        cout<<section<<endl;
    }
};
int main(){
    
}