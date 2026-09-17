#include<iostream>
using namespace std;
int main(){
    int arr[10];//sized element
    // int arr1[];//canaot declare like this we need to initialise something
    int arr1[]={1,2,3,4};//like this
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    for(int i=0;i<10;i++){
        cout<<"arr ["<<i<<"] : "<<arr[i]<<endl;
    }
}
