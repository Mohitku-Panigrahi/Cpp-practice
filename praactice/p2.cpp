#include <iostream>
#include <algorithm>
using namespace std;
int secondLowest(int arr[], int n) {

    sort(arr, arr + n);

    for (int i = 1; i < n; i++) {

        if (arr[i] != arr[0]) {
            return arr[i];
        }
    }

    return -1;
}

int secondLowest(int arr[], int n) {

    sort(arr, arr + n);

    return arr[1];
}

int main() {

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << secondLowest(arr, n);

    return 0;
}