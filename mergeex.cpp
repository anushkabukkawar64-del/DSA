#include <iostream>
using namespace std;

// merge function 
void merge(int arr[], int left, int mid, int right) {
    int i = left, 
    j = mid + 1, 
    k = 0;
    
    int temp[100]; 

    //merge two sorted parts 
    while (i <= mid && j <= right) {
        if (arr[i] < arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    
    // copy remaining elements 
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

while (j <= right) {
    temp[k++] = arr[j++];
}

// copying back to original array 
for (int p = 0; p < k; p++) {
        arr[left + p] = temp[p];
    }
}

//merge sort function
void mergeSort(int arr[], int left, int right) {
    if (left < right) { 
        int mid = left + (right - left) / 2; 

        mergeSort(arr, left, mid); 
        mergeSort(arr, mid + 1, right); 

        merge(arr, left, mid, right); 
    }
}

// display array 
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// main function 
int main() {
    int arr[] = {5,2,4,1,3};
    
    cout << "Original array: ";
    display(arr, 5);

    mergeSort(arr, 0, 4);

    cout << "Sorted array: ";
    display(arr, 5);
    
    return 0;
}