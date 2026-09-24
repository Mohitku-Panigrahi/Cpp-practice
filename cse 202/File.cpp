#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ///ofstresm fout("K3P25IL.txt");
    ofstream fout;
    fout.open("K3P25IL.txt");
    fout<<"Hello";
    fout.close();
}
