#include<iostream>
using namespace std;

class employee{
    int empID; string name;
    public:
    
    void getData(){
        cout<<"Enter empID and name";
        cin>>empID>>name;
    }
    void display(){
        cout<<"Employee detailess:";
        cout<<"empID"<<empID<<endl;
        cout<<"Name "<<name<<endl;
    }
};
int main(){
    // employee *e = new employee;
    // e->getData();e->display();
    int n;
    cout<<"Enter no of employees";
    cin>>n; //n=3
    employee *e= new employee[n];
    for(int i=0;i<n;i++){
        e->getData();e->display();
    }
}