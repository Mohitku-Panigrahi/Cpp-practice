#include<iostream>
using namespace std;
template<class T>
class abc{
    T a,b;
    public:
    abc(T x,T y){
        a=x;
        b=y;
    }
    T max1(){
        return (a>b?a:b);
    }
};


// template<class T>
// class abc{
//     T *a;
//     int size;
//     public:
//     abc(){
//         cout<<"\n Enter the size of array: ";
//         cin>>size;
//         a= new T[size];
//         cout<<"\n Enter the array values: ";
//         for(int i=0;i<size;i++){
//             sum = sum + a[i];
//         }
//         return sum;
//     }
// };



 int main(){
    abc<int> obj(10,20); cout<<"\nmax value is "<<obj.max1();
    abc<float> obj1(10.2,34.7); cout<<"\nmax value is "<<obj1.max1();
    abc<char> obj2('A','a'); cout<<"\nmax value is "<<obj2.max1();
 }