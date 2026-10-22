#include<iostream>
using namespace std;
class abc{
    int x,y,z;
    public:
    abc(int a,int b,int c){
        x=a;y=b;z=c;
    }
    friend void operator-(abc &obj);
    // void operator-() //operator function
    // {
    //     x = -x; y=-y;z = -z;
    // }
    void display(){
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
};
void operator-(abc &obj){
    obj.x= -obj.x;obj.y= -obj.y; obj.z= -obj.z;
}
int main(){
    abc s1(10,-20,30);
    s1.display();
    -s1;//interchanging - with ~ will also work 
    s1.display();
    
}

//  git add .
//  git commit --m "hii"
//  git push 