#include<iostream>
using namespace std;
template<class T>//T represent a corresponding data type
T sum(T a, T b){
    return(a+b);
}
int main(){
    int num1,num2, resultInt; double num3,num4, resultDou;
    char num5,num6,resultChar;
    cout<<"enter 2 integer Values ";
    cin>>num1>>num2;
    resultInt=sum(num1,num2);
    cout<<"The sum "<<resultInt<<endl;
    cout<<"enter 2 double Values ";
    cin>>num3>>num4;
    resultDou=sum(num3,num4);
    cout<<"The sum "<<resultDou<<endl;
    cout<<"enter 2 double Values ";
    cin>>num5>>num6;
    resultChar=sum(num5,num6);
    cout<<"The sum "<<resultChar<<endl;
}

