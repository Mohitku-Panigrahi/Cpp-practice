#include<iostream>
using namespace std;
class shape{
    private:
    int radius, length, width;
    public:
    void areaCircle();
    void areaSquare();
};
void shape::areaCircle(){
    cout<<"Enter the radius of circle: ";
    cin>> radius;
    cout<<"Area: "<<3.14*radius*radius<<endl;
}
void shape::areaSquare(){
    cout<<"Enter the length and width: ";
    cin>> length>> width;
    cout<<"Area: "<<length*width<<endl;
}
int main(){
    shape obj;
    obj.areaCircle();
    return 0;
}