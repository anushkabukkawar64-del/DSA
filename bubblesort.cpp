#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {7,4,5,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0; 
}



// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int n) {
//     bool swapped;

//     for (int i = 0; i < n - 1; i++) {
//         swapped = false;

//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }

//         // 🚀 Optimization: stop if already sorted
//         if (!swapped) break;
//     }
// }

// int main() {
//     int arr[] = {4, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     bubbleSort(arr, n);

//     cout << "Sorted array:\n";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int marks;
};
bool compare(Student a, Student b) {
    return a.marks < b.marks; 
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];

    // Input
    for (int i = 0; i < n; i++) {
        cout << "Enter name and marks: ";
        cin >> s[i].name >> s[i].marks;
    }

    // Sorting
    sort(s, s + n, compare);

    // Output
    cout << "\nSorted by marks:\n";
    for (int i = 0; i < n; i++) {
        cout << s[i].name << " - " << s[i].marks << endl;
    }

    return 0;
}