# Complex Numbers using Object Pointers

---

## 📌 Problem Statement
Create a `Complex` class with real and imaginary parts. Use object pointers to input and display two complex numbers in the format `a + bi`.

---

## 🧠 Key Concept & Logic
```text
Complex *p1 = &c1; Complex *p2 = &c2;
Access fields: p1->real, p1->imag
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
class Complex {
public:
    int real, imag;
    void input() { cin >> real >> imag; }
    void display() { cout << real << " + " << imag << "i" << endl; }
};
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    void input() {
        cin >> real >> imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2;
    Complex *p1 = &c1;
    Complex *p2 = &c2;

    p1->input();
    p2->input();

    p1->display();
    p2->display();

    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
3 4
5 6
```

### Output
```text
3 + 4i
5 + 6i
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
