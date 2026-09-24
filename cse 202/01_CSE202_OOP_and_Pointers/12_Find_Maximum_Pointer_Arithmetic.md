# Find Maximum Element using Pointer Arithmetic

---

## 📌 Problem Statement
Find the maximum value in an array of size `n` using pointer arithmetic.

---

## 🧠 Key Concept & Logic
```text
max = *p; if(*(p + i) > max) max = *(p + i)
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
int findMax(int *p, int n) {
    int mx = *p;
    for(int i = 1; i < n; i++) {
        if(*(p + i) > mx)
            mx = *(p + i);
    }
    return mx;
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
    int mx = *p;
    for(int i = 1; i < n; i++) {
        if(*(p + i) > mx)
            mx = *(p + i);
    }

    cout << mx << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
5
23 45 12 89 34
```

### Output
```text
89
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
