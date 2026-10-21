#include<iostream>
using namespace std;
class abc{
    int x,y,z;
    public:
    abc(int a,int b,int c){
        x=a;y=b;z=c;
    }
    void display(){
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
};
int main(){
    abc s1(10,-20,30);
    s1.display();
}