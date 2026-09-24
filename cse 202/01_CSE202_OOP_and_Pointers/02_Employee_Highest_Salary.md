# Employee Details & Find Highest Salary

---

## 📌 Problem Statement
Create a class `Employee` with name and salary. Given `n` employees, find and display the employee with the highest salary.

---

## 🧠 Key Concept & Logic
```text
Array of objects -> Read inputs -> Track index of max salary -> Display employee details
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void findHighest(Employee emp[], int n) {
    int maxIdx = 0;
    for(int i = 1; i < n; i++) {
        if(emp[i].salary > emp[maxIdx].salary) {
            maxIdx = i;
        }
    }
    cout << emp[maxIdx].name << " " << emp[maxIdx].salary;
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int salary;

    void input() {
        cin >> name >> salary;
    }
};

int main() {
    int n;
    cin >> n;
    Employee emp[n];

    for(int i = 0; i < n; i++)
        emp[i].input();

    int maxIdx = 0;
    for(int i = 1; i < n; i++) {
        if(emp[i].salary > emp[maxIdx].salary)
            maxIdx = i;
    }

    cout << emp[maxIdx].name << " " << emp[maxIdx].salary << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
3
Alice 50000
Bob 75000
Charlie 60000
```

### Output
```text
Bob 75000
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`
