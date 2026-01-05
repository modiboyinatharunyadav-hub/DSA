#include <iostream>
using namespace std;

int main() {
    string s = "programming";
    string result = "";

    for(char c : s) {
        if(result.find(c) == string::npos)
            result += c;
    }

    cout << result;
    return 0;
}
