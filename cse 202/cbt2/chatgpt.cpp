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