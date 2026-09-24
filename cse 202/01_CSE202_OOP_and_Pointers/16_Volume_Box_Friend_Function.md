# Volume of Box / Cube using Friend Function

---

## 📌 Problem Statement
Create a `Box` or `Cube` class with private member `length` or `side`. Compute its volume using a friend function.

---

## 🧠 Key Concept & Logic
```text
Inside class: friend int volume(Box b);
Outside class: int volume(Box b) { return b.length * b.length * b.length; }
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
class Box {
    int length;
public:
    void input() { cin >> length; }
    friend int getVolume(Box b);
};

int getVolume(Box b) {
    return b.length * b.length * b.length;
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
using namespace std;

class Box {
    int length;
public:
    void input() {
        cin >> length;
    }
    friend int getVolume(Box b);
};

int getVolume(Box b) {
    return b.length * b.length * b.length;
}

int main() {
    Box b;
    b.input();
    cout << getVolume(b) << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
4
```

### Output
```text
64
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
