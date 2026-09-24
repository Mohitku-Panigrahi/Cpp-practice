# Compare Two Objects

---

## 📌 Problem Statement
Create a class `Number` with an integer value. Write a member function or compare method to determine which of the two objects has the greater value.

---

## 🧠 Key Concept & Logic
```text
Object method receives another object by value/reference: if(n1.val > n2.val) return n1
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void compareNumbers(Number a, Number b) {
    if(a.val > b.val)
        cout << a.val << " is greater";
    else if(b.val > a.val)
        cout << b.val << " is greater";
    else
        cout << "Both are equal";
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
using namespace std;

class Number {
public:
    int val;
    void input() { cin >> val; }
};

int main() {
    Number a, b;
    a.input();
    b.input();

    if(a.val > b.val)
        cout << a.val;
    else
        cout << b.val;

    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
15 28
```

### Output
```text
28
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
