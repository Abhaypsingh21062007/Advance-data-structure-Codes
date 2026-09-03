#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    stack<char> st;

    for (char ch : n) {
        st.push(ch);
    }

    bool isPalindrome = true;

    for (char ch : n) {
        if (ch != st.top()) {
            isPalindrome = false;
            break;
        }
        st.pop();
    }

    if (isPalindrome) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not palindrome" << endl;
    }

    return 0;
}