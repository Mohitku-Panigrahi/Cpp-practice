# Count Even Numbers using Pointer Arithmetic

---

## 📌 Problem Statement
Count the number of even numbers in an integer array using pointer arithmetic.

---

## 🧠 Key Concept & Logic
```text
*(p + i) % 2 == 0 -> increment count
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
int countEven(int *p, int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(*(p + i) % 2 == 0)
            count++;
    }
    return count;
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
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(*(p + i) % 2 == 0)
            count++;
    }

    cout << count << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
6
10 15 22 33 40 55
```

### Output
```text
3
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
