// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int n) {
//     for(int i = 0; i < n - 1; i++) {
//         int minIndex = i;

//         for(int j = i + 1; j < n; j++) {
//             if(arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }

//         // swap
//         int temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     selectionSort(arr, n);

//     cout << "Sorted array:\n";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// struct Student {
//     string name;
//     int marks;
// };

// void selectionSort(Student arr[], int n) {
//     for(int i = 0; i < n - 1; i++) {
//         int minIndex = i;

//         for(int j = i + 1; j < n; j++) {
//             if(arr[j].marks < arr[minIndex].marks) {
//                 minIndex = j;
//             }
//         }
//     swap(arr[i], arr[minIndex]);
//     }
// }

// int main() {
//     Student s[] = {{"A",78}, {"B",45}, {"C",90}, {"D",60}};
//     int n = 4;

//     selectionSort(s, n);

//     for(int i = 0; i < n; i++)
//         cout << s[i].name << " " << s[i].marks << endl;
// }

#include <iostream>
using namespace std;

struct Product {
    string name;
    float price;
    float rating;
};

void bubbleSort(Product arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j].price > arr[j + 1].price) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(Product arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j].rating < arr[minIndex].rating) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int binarySearch(Product arr[], int n, float targetPrice) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid].price == targetPrice)
            return mid;
        else if(arr[mid].price < targetPrice)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
void display(Product arr[], int n) {
    cout << "\nProducts List:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i].name << " | Price: " << arr[i].price 
             << " | Rating: " << arr[i].rating << endl;
    }
}

int main() {
    int n = 3; 

    Product walmartProducts[3] = {
        {"Mobile", 0, 0},
        {"Laptop", 0, 0},
        {"Headphone", 0, 0}
    };

    for(int i = 0; i < n; i++) {
        cout << "\nEnter details for " << walmartProducts[i].name << ":\n";
        cout << "Price: ";
        cin >> walmartProducts[i].price;
        cout << "Rating: ";
        cin >> walmartProducts[i].rating;
    }
    cout << "\nOriginal Data (Walmart Products):";
    display(walmartProducts, n);

    bubbleSort(walmartProducts, n);
    cout << "\nAfter Bubble Sort (by Price):";
    display(walmartProducts, n);

    selectionSort(walmartProducts, n);
    cout << "\nAfter Selection Sort (by Rating):";
    display(walmartProducts, n);


    float searchPrice;
    cout << "\nEnter price to search: ";
    cin >> searchPrice;

    bubbleSort(walmartProducts, n);

    int index = binarySearch(walmartProducts, n, searchPrice);

    if(index != -1)
        cout << "Product found: " << walmartProducts[index].name << endl;
    else
        cout << "Product not found!" << endl;

    return 0;
}