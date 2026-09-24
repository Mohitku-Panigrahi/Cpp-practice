# Rectangle Class (Area & Perimeter)

---

## 📌 Problem Statement
Create a class `Rectangle` with length and breadth. Provide member functions to calculate and return area and perimeter.

---

## 🧠 Key Concept & Logic
```text
area = length * breadth
perimeter = 2 * (length + breadth)
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
class Rectangle {
public:
    int length, breadth;

    void input() {
        cin >> length >> breadth;
    }

    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }
};
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, breadth;

    void input() {
        cin >> length >> breadth;
    }

    int area() {
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    Rectangle r;
    r.input();
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
5 4
```

### Output
```text
Area: 20
Perimeter: 18
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
