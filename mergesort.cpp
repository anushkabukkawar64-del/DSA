// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int n) {
//     for(int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;

//         while(j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }

//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int arr[] = {5, 2, 9, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     insertionSort(arr, n);

//     cout << "Sorted array:\n";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }                                                                                                                                                                                                               

// #include <iostream>
// using namespace std;

// void merge(int arr[], int left, int mid, int right) {

//     int n1 = mid - left + 1;
//     int n2 = right - mid;

//     int L[n1], R[n2];

//     for(int i = 0; i < n1; i++) {
//         L[i] = arr[left + i];
//     }
//     for(int j = 0; j < n2; j++) {
//         R[j] = arr[mid + 1 + j];
//     }

//     int i = 0, j = 0, k = left;

//     while(i < n1 && j < n2) {
//         if(L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         } else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }

//     while(i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }

//     while(j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int temp[100]; 
    int i = l, j = m + 1, k = l;
    