#include<iostream>
using namespace std;
class Counter{
    private:
    int count;
    public:
    Counter() : count(0)//constructor
    {
        
    }
    int get_count(){
        return count;
    }
    void operator++(){
        ++count;
    }
};

int main(){
    Counter c1,c2;
    cout<<"c1"<<c1.get_count()<<endl;
    cout<<"c2"<<c2.get_count()<<endl;
    ++c1;++c2;
    cout<<"c1"<<c1.get_count()<<endl;
    ++c2;
    cout<<"c1"<<c1.get_count()<<endl;
    cout<<"c1"<<c1.get_count()<<endl;
}