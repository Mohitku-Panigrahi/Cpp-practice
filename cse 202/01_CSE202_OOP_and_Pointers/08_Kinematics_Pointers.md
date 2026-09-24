# Kinematics Calculation using Pointers

---

## 📌 Problem Statement
Calculate final velocity (v = u + a*t) and distance (s = u*t + 0.5*a*t^2) using pointers for initial velocity u, acceleration a, and time t.

---

## 🧠 Key Concept & Logic
```text
Pointers *pu, *pa, *pt -> dereference to compute: *pv = *pu + (*pa)*(*pt)
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void calculateKinematics(double *u, double *a, double *t, double *v, double *s) {
    *v = *u + (*a) * (*t);
    *s = (*u) * (*t) + 0.5 * (*a) * (*t) * (*t);
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
using namespace std;

int main() {
    double u, a, t;
    cin >> u >> a >> t;

    double *pu = &u, *pa = &a, *pt = &t;

    double v = *pu + (*pa) * (*pt);
    double s = (*pu) * (*pt) + 0.5 * (*pa) * (*pt) * (*pt);

    cout << "Velocity: " << v << endl;
    cout << "Distance: " << s << endl;

    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
5 2 3
```

### Output
```text
Velocity: 11
Distance: 24
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
