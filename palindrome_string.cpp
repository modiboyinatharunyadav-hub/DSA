#include <iostream>
using namespace std;

int main() {
    string s = "madam";
    int i = 0, j = s.length()-1;
    bool flag = true;

    while(i < j) {
        if(s[i] != s[j]) {
            flag = false;
            break;
        }
        i++; j--;
    }

    if(flag) cout << "Palindrome";
    else cout << "Not Palindrome";

    return 0;
}
