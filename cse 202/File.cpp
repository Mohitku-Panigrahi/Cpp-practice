#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ///ofstresm fout("K3P25IL.txt");
    ofstream fout;
    fout.open("K3P25IL.txt");
    fout<<"Hello";
    fout.close();
    ifstream fin("K3P25IL.txt");
    //ifstream fin;
    //fin,open("K3P25IL.txt");
    string str;
    fin>>str;
    cout<<"Content "<<endl;
    cout<<str<<endl;
    fin.close();
}
