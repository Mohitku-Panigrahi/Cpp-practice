# Compare Student Marks using Friend Function

---

## 📌 Problem Statement
Create two classes `ClassA` and `ClassB` storing private student marks. Use a common friend function to compare and find the highest score.

---

## 🧠 Key Concept & Logic
```text
Forward declaration -> declare friend function in both classes -> define function taking objects of both classes
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
class ClassB; // Forward declaration

class ClassA {
    int marks;
public:
    void input() { cin >> marks; }
    friend void findMax(ClassA a, ClassB b);
};

class ClassB {
    int marks;
public:
    void input() { cin >> marks; }
    friend void findMax(ClassA a, ClassB b);
};

void findMax(ClassA a, ClassB b) {
    if(a.marks > b.marks)
        cout << a.marks;
    else
        cout << b.marks;
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    int marks;
public:
    void input() { cin >> marks; }
    friend void findMax(ClassA a, ClassB b);
};

class ClassB {
    int marks;
public:
    void input() { cin >> marks; }
    friend void findMax(ClassA a, ClassB b);
};

void findMax(ClassA a, ClassB b) {
    if(a.marks > b.marks)
        cout << a.marks << endl;
    else
        cout << b.marks << endl;
}

int main() {
    ClassA a;
    ClassB b;
    a.input();
    b.input();
    findMax(a, b);
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
85 92
```

### Output
```text
92
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
