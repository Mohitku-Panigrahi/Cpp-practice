// #include<iostream>
// using namespace std;
// class Square{
//     private:
//     int length,breadth;
//     public:
//     Square(int l, int b){
//         length = l;
//         breadth = b;
//     }
//     void Area(){
//         cout<<"Area: "<<length*breadth<<endl;
//     }
// };
// int main(){
//     Square obj1(5,10);
    

//     obj1.Area();
// }


// // Create a class Employee with:
// // - Employee ID and salary.
// // - Parameterized constructor.
// // - Copy constructor.
// // - Function to display details.
// // Create one employee and copy its details into another object.
// #include<iostream>
// using namespace std;
// class Employee{
//     private:
//     int empid, salary;
//     public:
//     Employee(int e, int s){
//         empid=e; salary=s;
//     }
//     Employee( const Employee &e){
//         empid = e.empid; salary= e.salary;
//     }
//     void display(){
//         cout<<empid<<" "<<salary<<endl;
//     }
// };
// int main(){
//     Employee obj1(2,1000);
//     Employee obj2(obj1);
//     obj1.display();
//     obj2.display();
//     return 0;
// }


#include<iostream>
using namespace std;
class Summ{
    int a,b;
    Summ(int s,int v): a(s),b(v){
        cout<<"Done initialised"<<endl;
    }
    Summ operator+(Summ obj){
        Summ temp(0,0);
        temp.a= a+obj.a;
        temp.b=b+obj.b;
        return temp;
    }
    void display(){
        cout<<a<<"+"<<b<<endl;
    }
};
int main(){
    Summ obj1(2,3);
    Summ obj2(4,5);
    Summ obj3= obj1 + obj2;
    obj3.display();
}