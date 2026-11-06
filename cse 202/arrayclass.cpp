#include <iostream>
using namespace std;

class Array {
    int* arr;
    int n;

public:
    Array() {
        cout << "Enter Size: ";
        cin >> n;

        arr = new int[n];

        cout << "Enter elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }

    ~Array() {
        delete[] arr;
    }
};

int main() {
    Array a;
    a.display();
    return 0;
}