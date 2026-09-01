#include<iostream>
using namespace std;
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int s;
    cout<<"Enter the index u want to : ";
    cin>>s;
    int t;
    for(int i=0;i<4;i++)
    {if(a[i]>a[i+1])
        t=a[0];
        a[0]= a[i+1];
        a[i+1]=t;
    };
    cout<<a[s];
    
    
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[5];

//     // Input array elements
//     cout << "Enter 5 numbers: ";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> a[i];
//     }

//     // Bubble Sort
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4 - i; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 int t = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = t;
//             }
//         }
//     }

//     // Ask for index
//     int s;
//     cout << "Enter the index you want: ";
//     cin >> s;

//     // Check whether index is valid
//     if (s >= 0 && s < 5)
//     {
//         cout << "Element at index " << s << " is: " << a[s] << endl;
//     }
//     else
//     {
//         cout << "Invalid index!" << endl;
//     }

//     return 0;
// }
