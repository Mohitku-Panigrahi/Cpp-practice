#include<iostream>
using namespace std;
int main(){
    //Remove all the duplicate from the sorted array 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t;
    for(int i=0;i<n-1;i++)
    {if(a[i]>=a[i+1])
        t=a[0];
        a[0]= a[i+1];
        a[i+1]=t;
    };
    // for this we can make another array then add the unique element to it 
    

}