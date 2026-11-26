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
    
}

