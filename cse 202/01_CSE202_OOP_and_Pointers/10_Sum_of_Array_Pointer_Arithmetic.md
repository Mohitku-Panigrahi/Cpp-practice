# Sum of Array using Pointer Arithmetic

---

## 📌 Problem Statement
Calculate the sum of all elements of an array of size `n` using pointer arithmetic.

---

## 🧠 Key Concept & Logic
```text
arr[i] == *(p + i) where p = arr
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
int sumArray(int *p, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(p + i);
    }
    return sum;
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int *p = arr;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(p + i);
    }

    cout << sum << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
5
1 2 3 4 5
```

### Output
```text
15
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
