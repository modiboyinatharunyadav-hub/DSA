#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50};
    int key = 30, low = 0, high = 4;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key) {
            cout << "Found at index " << mid;
            return 0;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Not Found";
    return 0;
}
