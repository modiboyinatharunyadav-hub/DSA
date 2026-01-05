#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40};
    int key = 30;

    for(int i = 0; i < 4; i++) {
        if(arr[i] == key) {
            cout << "Found at index " << i;
            return 0;
        }
    }

    cout << "Not Found";
    return 0;
}
