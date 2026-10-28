#include<iostream>
using namespace std;
class A{
    public:
    float y;
    A(){
        y=0;
    }A(float t){
        y=t;
    }
};
int main(){
    int a=10;
    float b=10.3;
    a=b; //implict
    char c='A';
    cout<< "a= "<< a<<endl;
    a=(int)b; //explicit
    cout<<"a= "<<a<<endl;
    a=c;
    cout<<"a= "<<a<<endl;
    return 0;
}