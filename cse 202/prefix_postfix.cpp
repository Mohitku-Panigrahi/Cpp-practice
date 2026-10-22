#include<iostream>
using namespace std;
class Counter{
    int count;
    public:
    Counter()//default constructor
    {
        count=0;
    }
    void getCount(){
        cout<<"Count : "<<count<<endl;
    }
    void operator++()//prefix
    {
        ++count;
    }
    void operator++(int)//postfix
    {
        count++;
    }
    void operator--()//prefix
    {
        --count;
    }
    void operator--(int)//postfix
    {
        count--;
    }
};
int main(){
    Counter c1,c2;
    c1.getCount();
    c2.getCount();
    // ++c1;++c2; this will not work if we do it directly
    ++c1;++c2;
    c1.getCount();
    c2.getCount();
    --c1;--c2;
    c1.getCount();
    c2.getCount();
}
