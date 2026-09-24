#include<iostream>
using namespace std;
// class student{
// private:
//     int a; float b; ///a,b data member
// public:
//     void getData(){
        
//     }
// };
// int main(){
//     student obj;
//     cout<<"Memory taken by obj : "<< sizeof(obj);
// }
class student{
    private:
    int regdNum; char name;double fees;
    public:
    void getData(){
        cout<<"Enter regno, name,fees";
        cin>>regdNum>>name>>fees;
    
    }
    void showData(){
        cout<<"r no"<<regdNum<<endl;
        cout<<"Name"<<name<<endl;
        cout<<"fees"<<fees<<endl;
    }
};
int main(){
    student obj;
    
}