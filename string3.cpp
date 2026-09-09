#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <algorithm>

using namespace std;

// Snippet 1: String Size / Capacity Inspection
void demoStringSize() {
    string s1 = "Example";
    cout << s1.length() << endl;
    cout << s1.size() << endl;
    cout << s1.max_size() << endl;
}

// Snippet 2: Substring Extraction
void demoSubstr() {
    string str = "Hello World";
    string s2;
    s2 = str.substr(); // Default copies entire string from index 0
    cout << s2 << endl;
}

// Snippet 3: Character Classification (alpha, digits, whitespace)
void demoCharCount() {
    char str[] = "Abcabc 123 1@";
    int alpha = 0, num = 0, space = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]) != 0) {
            alpha++;
        } else if (isdigit(str[i]) != 0) {
            num++;
        } else if (isspace(str[i]) != 0) {
            space++;
        }
    }

    cout << alpha << endl;
    cout << num << endl;
    cout << space << endl;
}

// Snippet 4: Sorting std::string vs C-style char array
int main() {
    string str1 = "Hello";
    char str2[] = "programming";
    int len2 = strlen(str2);

    sort(str1.begin(), str1.end());
    sort(str2, str2 + len2);

    cout << str1 << endl;
    cout << str2 << endl;

    return 0;
}