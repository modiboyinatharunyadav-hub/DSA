#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 40, 30};
    int largest = arr[0], second = -1;

    for(int i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    cout << "Second Largest = " << second;
    return 0;
}
