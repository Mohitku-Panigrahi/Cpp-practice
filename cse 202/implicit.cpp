#include<iostream>
using namespace std;
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
}