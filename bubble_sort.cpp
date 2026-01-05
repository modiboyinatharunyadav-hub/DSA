#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,4,3,2,1};

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 4-i; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);

    for(int x : arr)
        cout << x << " ";

    return 0;
}
