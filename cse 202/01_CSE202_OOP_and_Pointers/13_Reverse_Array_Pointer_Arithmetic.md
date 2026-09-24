# Reverse Array using Pointer Arithmetic

---

## 📌 Problem Statement
Print an array of size `n` in reverse order using pointer arithmetic.

---

## 🧠 Key Concept & Logic
```text
Iterate from n-1 down to 0: print *(p + i)
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void printReverse(int *p, int n) {
    for(int i = n - 1; i >= 0; i--)
        cout << *(p + i) << " ";
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
    for(int i = n - 1; i >= 0; i--)
        cout << *(p + i) << " ";

    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
4
10 20 30 40
```

### Output
```text
40 30 20 10
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
