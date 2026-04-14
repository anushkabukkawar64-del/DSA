// // #include <iostream>
// // using namespace std;

// // int main() {
// //     double n, fact = 1;
// //     cout << "Enter a number: ";
// //     cin >> n;

// //     for(double i = 1; i <= n; i++) {
// //         fact = fact * i;
// //     }

// //     cout << "Factorial = " << fact;
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int arr[] = {10, 25, 30, 45, 50};
// //     int n = 5;
// //     int key = 30;

// //     for (int i = 0; i < n; i++) {
// //         if (arr[i] == key) {
// //             cout << "Element found at index " << i;
// //             return 0;
// //         }
// //     }

// //     cout << "Element not found";
// //     return 0;
// // }
// // #include <iostream>
// // using namespace std;

// // int findMin(int arr[], int n) {
// //     int min = arr[0];
// //     for(int i = 1; i < n; i++) {
// //         if(arr[i] < min) {
// //             min = arr[i];
// //         }
// //     }
// //     return min;
// // }
// // int main() {
// //     int n;
// //     cout << "Enter number of elements: ";
// //     cin >> n;
// //     int arr[n];
// //     cout << "Enter elements: ";
// //     for(int i = 0; i < n; i++) {
// //         cin >> arr[i];
// //     }
// //     int result = findMin(arr, n);
// //     cout << "Minimum element is: " << result;

// //     return 0;
// // }


// // linear search in sring
// #include <iostream>
// using namespace std;

// int main() {
//     string str = "hello janemann";
//     char key = 'l';

//     for(int i = 0; i < str.length(); i++) {
//         if(str[i] == key) {
//             cout << "Character found at index: " << i;
//             return 0;
//         }
//     }

//     cout << "Character not found";
// }

// Binary search code

// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int key) {
//     int low = 0, high = n - 1;

//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (arr[mid] == key) {
//             return mid; // element found
//         }
//         else if (key < arr[mid]) {
//             high = mid - 1; // go left
//         }
//         else {
//             low = mid + 1; // go right
//         }
//     }
//     return -1; // not found
// }
// int main() {
//     int arr[] = {2, 4, 6, 8, 10, 12};
//     int n = 6;
//     int key = 10;
//     int result = binarySearch(arr, n, key);

//     if (result != -1)
//         cout << "Element found at index : " << result;
//     else
//         cout << "Element not found";

//     return 0;
// }

// int searchRotated(int arr[], int n, int key) {
//     int low = 0, high = n - 1;

//     while (low <= high) {
//         int mid = (low + high) / 2;

//         if (arr[mid] == key)
//             return mid;

//         // Left half sorted
//         if (arr[low] <= arr[mid]) {
//             if (key >= arr[low] && key < arr[mid])
//                 high = mid - 1;
//             else
//                 low = mid + 1;
//         }
//         // Right half sorted
//         else {
//             if (key > arr[mid] && key <= arr[high])
//                 low = mid + 1;
//             else
//                 high = mid - 1;
//         }
//     }

//     return -1;
// }       

#include <iostream>
using namespace std;

int lowerBound(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int ans = n; // default if no element >= key

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= key) {
            ans = mid;
            high = mid - 1; // search left
        } else {
            low = mid + 1; // search right
        }
    }

    return ans;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = 5;
    int key = 6;

    int result = lowerBound(arr, n, key);

    cout << "Lower bound index: " << result << endl;

    return 0;
}