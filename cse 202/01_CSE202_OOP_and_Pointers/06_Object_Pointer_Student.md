# Object Pointer — Student Details

---

## 📌 Problem Statement
Create a `Student` class containing marks. Use an object pointer (`Student* p = &s`) and arrow operator `->` to input and display marks.

---

## 🧠 Key Concept & Logic
```text
Normal object: s.input()  |  Object pointer: p->input() where p = &s
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void processWithPointer(Student* p) {
    p->input();
    p->display();
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
using namespace std;

class Student {
public:
    int marks;

    void input() { cin >> marks; }
    void display() { cout << marks << endl; }
};

int main() {
    Student s;
    Student *p = &s;

    p->input();
    p->display();

    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
92
```

### Output
```text
92
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
