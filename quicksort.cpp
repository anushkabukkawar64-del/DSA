#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high) {
    if (low < high) 
    return;

    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    quickSort(arr , low, i-1);
    quickSort(arr , i+1, high);
}
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = 6;

    quickSort (arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;

}