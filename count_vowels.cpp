#include <iostream>
using namespace std;

int main() {
    string s = "education";
    int count = 0;

    for(char c : s) {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            count++;
    }

    cout << "Vowels = " << count;
    return 0;
}
