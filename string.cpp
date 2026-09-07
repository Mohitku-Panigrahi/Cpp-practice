#include<iostream>
using namespace std;
int main(){
    string s1= "Hello";
    string s2 = "World !";
    cout<< "S1 concatenate S2"<<s1<<" "<<s2<<endl; //
    cout<< "S1 concatenate S2"<<s1 + s2<<endl; //concatenation
    s1= s1+s2;
    cout<< "S1 concatenate S2"<<s1<<endl; //concatenate??
    string s3= s1+s2;
    cout<< "S1 concatenate S2"<<s3<<endl; 
}