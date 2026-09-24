# Array of Objects — Highest Marks Student

---

## 📌 Problem Statement
Store `n` students with name and marks in an array of objects. Find and display the student with maximum marks.

---

## 🧠 Key Concept & Logic
```text
Read n objects -> Linear scan for max mark -> Display matching student
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void findTopStudent(Student arr[], int n) {
    int maxIdx = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i].marks > arr[maxIdx].marks)
            maxIdx = i;
    }
    cout << arr[maxIdx].name << " " << arr[maxIdx].marks;
}
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
    int marks;

    void input() {
        cin >> name >> marks;
    }
};

int main() {
    int n;
    cin >> n;
    Student s[n];

    for(int i = 0; i < n; i++)
        s[i].input();

    int best = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[best].marks)
            best = i;
    }

    cout << s[best].name << " " << s[best].marks << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
3
Rahul 88
Priya 95
Aman 91
```

### Output
```text
Priya 95
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`
