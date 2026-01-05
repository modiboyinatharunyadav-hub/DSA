#include <iostream>
using namespace std;

int main() {
    string s = "I love coding";
    int count = 1;

    for(char c : s)
        if(c == ' ')
            count++;

    cout << "Words = " << count;
    return 0;
}
