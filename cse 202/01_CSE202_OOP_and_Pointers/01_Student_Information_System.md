# Student Information System (Class & Object)

---

## 📌 Problem Statement
Create a class `Input` or `Student` to store a student's name and roll number. Read and display the details using class member functions.

---

## 🧠 Key Concept & Logic
```text
Class definition -> Private/Public members -> Input method -> Display method -> Instantiate object in main
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
class Student {
public:
    string name;
    int roll;

    void input() {
        cin >> name >> roll;
    }

    void display() {
        cout << name << " " << roll;
    }
};
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void input() {
        cin >> name >> roll;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
Mohit 101
```

### Output
```text
Name: Mohit, Roll: 101
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
