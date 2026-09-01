#include<iostream>
using namespace std;
int area(int n,int m){
    return n*m;
}
void avg(int s,int n, int m){
    cout<<"AVg is : "<< (n+m+s)/3.0<<endl;
}
void LNum(int s, int n, int m)
{
    if(s>n && s>m){
        cout<<"s its great";
    }
    else if(n>s && n>m){
        cout<<"n its great";
    }
    else if(m>n && m>s){
        cout<<"m its great";
    }else{
    cout<<"None "<<endl; 
    }
}
int main(){
    int n,m,s;
    cout<< "Enter thr no ";
    cin>>n>>m>>s;
    // cout<<"enter the length and breadth" ;
    // cin>>n>>m;
    // int s=area(n,m);
    // cout<<"AREA : "<< s<< endl;
    LNum(s,n,m);
    return 0;
}