#include <iostream>
using namespace std;

int main() {
    string s = "hello";
    int len = 0;

    for(char c : s)
        len++;

    cout << "Length = " << len;
    return 0;
}
