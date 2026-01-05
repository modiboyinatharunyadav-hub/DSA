#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 3, 40, 5};
    int max = arr[0];

    for(int i = 1; i < 5; i++)
        if(arr[i] > max)
            max = arr[i];

    cout << "Max = " << max;
    return 0;
}
