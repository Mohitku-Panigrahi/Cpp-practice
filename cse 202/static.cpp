#include<iostream>
using namespace std;
// class student{
//     public:
//     static int count;
//     string name;
//     void getdata(){
//         cin>>name;
//         cout<<"Name: "<<name;
//     }
//     void getcount(){
//         count++;
//         cout<<count<<" ";

//     }

// }
// obj1,obj2;
// int student::count;
// int main(){
//     obj1.getcount();
//     obj2.getcount();
// }




// class test{
//     static int count;
//     int code;
//     public:
//     void setcode(){
//         code=++ count;

//     }
//     void showcode(){
//         cout<<"Code : "<<code<<endl;
//     }
//     static void showcount(){
//         cout<<"count : "<<count<<endl;
//     }
// };
// int test::count;
// int main(){
//     test t1,t2;
//     t1.setcode();
//     test::showcount();
//     t1.showcode();
//     t2.showcode();
// }
class abc;
class dummy;
//     private:
//     friend void addition(abc obj, dummy obj1);
//     int c,d;
// };
class abc{
    private:
    int a,b;
    public:
    void sum(){
        cin>>a>>b;
        cout<<"Sum is: "<<a+b<<endl;
    }
    friend void addition(abc obj,dummy obj1);
};
class dummy{
    private:
    friend void addition(abc obj,dummy obj1);
    int c,d;
    
};
void addition(abc obj, dummy obj1){
    cin>>obj.a>>obj.b>>obj1.c>>obj1.d;
    cout<<"Sum is "<<obj.a+obj.b+obj1.c+obj1.d<<endl;
}
int main(){
    abc obj;
    dummy obj1;
    obj.sum();
    addition(obj,obj1);
};