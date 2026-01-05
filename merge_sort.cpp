#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int i=l, j=m+1;
    int temp[10], k=l;

    while(i<=m && j<=r)
        temp[k++] = (arr[i]<arr[j]) ? arr[i++] : arr[j++];

    while(i<=m) temp[k++] = arr[i++];
    while(j<=r) temp[k++] = arr[j++];

    for(int p=l; p<=r; p++)
        arr[p] = temp[p];
}

void mergeSort(int arr[], int l, int r) {
    if(l<r) {
        int m = (l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main() {
    int arr[] = {5,4,3,2,1};
    mergeSort(arr,0,4);

    for(int x:arr)
        cout<<x<<" ";

    return 0;
}
