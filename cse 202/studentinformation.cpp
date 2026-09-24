#include<iostream>
using namespace std;
class student{
    private:
    string name; int rollNo;
    public:
    void getData(){
        cout<<"name: rollno: ";
        cin>>name>>rollNo;

    }
    void display(){
        cout<<"Name: "<< name <<endl;
        cout<<"Rollno: "<< rollNo <<endl;
    }
};
int main(){
    // student obj;
    // obj.getData();
    // obj.display();
    student obj[3];
}