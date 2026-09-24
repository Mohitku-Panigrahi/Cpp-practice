# Score Tracker using Pointer-to-Pointer

---

## 📌 Problem Statement
Implement `updateHighScore(int** current, int** highScore)` to update `highScore` if `current` is strictly greater.

---

## 🧠 Key Concept & Logic
```text
if(**current > **highScore) { **highScore = **current; }
```

---

## ⚡ Function Implementation (NeoColab Format)
```cpp
void updateHighScore(int **current, int **highScore) {
    if(**current > **highScore) {
        **highScore = **current;
    }
}
```

---

## 💻 Complete Executable C++ Program
```cpp
#include <iostream>
using namespace std;

void updateHighScore(int **current, int **highScore) {
    if(**current > **highScore) {
        **highScore = **current;
    }
}

int main() {
    int current, highScore;
    cin >> current >> highScore;

    int *p1 = &current;
    int *p2 = &highScore;

    updateHighScore(&p1, &p2);

    cout << highScore << endl;
    return 0;
}
```

---

## 🧪 Sample Test Cases

### Input
```text
95 80
```

### Output
```text
95
```

---

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`
