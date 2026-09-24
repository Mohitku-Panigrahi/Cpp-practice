# Swap Two Numbers using Pointer-to-Pointer

---

## 📌 Problem Statement
Write a function `swapPtr(int** a, int** b)` to swap the values of two integer variables using double pointers (`int**`).

---

## 🧠 Key Concept & Logic
```text
int** -> dereference twice **a to get/set value: int temp = **a; **a = **b; **b = temp;
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void swapValues(int **a, int **b) {
    int temp = **a;
    **a = **b;
    **b = temp;
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
using namespace std;

void swapValues(int **a, int **b) {
    int temp = **a;
    **a = **b;
    **b = temp;
}

int main() {
    int x, y;
    cin >> x >> y;

    int *p1 = &x;
    int *p2 = &y;

    swapValues(&p1, &p2);

    cout << x << " " << y << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
10 20
```

### Output
```text
20 10
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
