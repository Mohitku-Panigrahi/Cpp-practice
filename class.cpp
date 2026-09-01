#include<iostream>
using namespace std;
// int main(){
//     // cout<<"Hello..."<<endl;
//     // cout<<9876<<endl;
//     // //int a=6,b=8;
//     // int a,b,sum;
//     // cin>>a>>b;
//     // cout<<"a = "<<a<<endl;
//     // cout<<"Sum="<< a+b<<endl;
//     // int age;
//     // cin>> age;
//     // cout<< age;
//     // return 0; 
//     // int a,n=0;
//     // cin>>n;
//     // for(int i=1;i<n;i++){
//     //     a+=i;    
//     // }
//     // cout<<a;
   
//     // int a, sum = 0, count = 0;
//     // cin >> a;

//     // while(a > 0) {
//     //     sum += a % 10;
//     //     count++;
//     //     a /= 10;
//     // }

//     // cout <<"Sum = " << sum;
//     int add(int a,int b);
// }

// void avg(dummy obj, dummy1 obj1)



// class B{
//     int c;
//     public:
//     void ip( A &obj){
//         obj.a=23; obj.b=24;
//     }
// };
// main(){
//     A objA;
//     // in call by value the actual argument gets copied to the formal argument , whatever changes make in the formal arguments doesnot make changes in actual arguments .
// }
// void swap(int *a,int *b);
// void swap(int *a,int *b){
//     int temp;
//     temp = *a;
//     *a=*b;
//     *b= temp;
// }
// int sum(int x,int y
// )


cout << setw(15)<< "Name" 
     <<setw(10) <<"Roll no"
     <<setw(12) <<"Marlks"<< endl;
cout << setfill('-') << setw(37) << "" << endl; 
/// reset fill character
cout<< setfill(' ');
/// left +setw() + fixed + setprecision()
cout << left << setw(15) << name << setw(10)<< rollNo
     <<fixed << setprecison(2)
     << setw(12) << marks << endl;
cout<< endl;
