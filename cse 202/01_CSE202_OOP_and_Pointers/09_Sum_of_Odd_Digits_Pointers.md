# Sum of Odd Digits using Pointer Arithmetic

---

## 📌 Problem Statement
Extract and compute the sum of all odd digits from an input integer using pointers.

---

## 🧠 Key Concept & Logic
```text
Pass pointer to int -> extract digits via (*p % 10) -> if odd add to sum -> *p /= 10
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
int sumOddDigits(int *num) {
    int sum = 0;
    int temp = *num;
    while(temp > 0) {
        int digit = temp % 10;
        if(digit % 2 != 0)
            sum += digit;
        temp /= 10;
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

    int *p = &n;
    int temp = *p;
    int sum = 0;

    while(temp > 0) {
        int d = temp % 10;
        if(d % 2 != 0)
            sum += d;
        temp /= 10;
    }

    cout << sum << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
12345
```

### Output
```text
9
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(log10(N))`
- **Space Complexity:** `O(1)`
