#include <iostream>
#include <string>
using namespace std;

struct Order {
    string id;
    int time;
    string priority;
};

// Display orders
void display(Order arr[], int n) {
    cout << "\nID\tTime\tPriority\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i].id << "\t" << arr[i].time << "\t" << arr[i].priority << endl;
    }
}

// Insertion sort (by time)
void insertionSort(Order arr[], int n) {
    for (int i = 1; i < n; i++) {
        Order key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j].time > key.time) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Priority value
int priorityValue(string p) {
    if (p == "High") return 3;
    if (p == "Medium") return 2;
    return 1;
}

// Selection sort (by priority)
void selectionSort(Order arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (priorityValue(arr[j].priority) > priorityValue(arr[max_idx].priority)) {
                max_idx = j;
            }
        }
        Order temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }
}

// Bubble sort (by time)
void bubbleSort(Order arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].time > arr[j + 1].time) {
                Order temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Main function
int main() {
    Order orders[10];
    int n = 4;

    // Initial data
    orders[0] = {"O1", 30, "Medium"};
    orders[1] = {"O2", 10, "High"};
    orders[2] = {"O3", 20, "Low"};
    orders[3] = {"O4", 5, "High"};

    int choice;

    do {
        cout << "\n\n===== MENU =====\n";
        cout << "1. Display Orders\n";
        cout << "2. Sort by Time (Insertion)\n";
        cout << "3. Add New Order\n";
        cout << "4. Sort by Priority (Selection)\n";
        cout << "5. Update Order Time\n";
        cout << "6. Sort by Time (Bubble)\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                display(orders, n);
                break;

            case 2:
                insertionSort(orders, n);
                cout << "Sorted by time using Insertion Sort!\n";
                break;

            case 3:
                cout << "Enter ID: ";
                cin >> orders[n].id;
                cout << "Enter Time: ";
                cin >> orders[n].time;
                cout << "Enter Priority (High/Medium/Low): ";
                cin >> orders[n].priority;
                n++;
                cout << "Order Added!\n";
                break;

            case 4:
                selectionSort(orders, n);
                cout << "Sorted by priority!\n";
                break;

            case 5: {
                string id;
                cout << "Enter Order ID to update: ";
                cin >> id;
                bool found = false;

                for (int i = 0; i < n; i++) {
                    if (orders[i].id == id) {
                        cout << "Enter new time: ";
                        cin >> orders[i].time;
                        found = true;
                        break;
                    }
                }

                if (!found) cout << "Order not found!\n";
                else cout << "Updated successfully!\n";
                break;
            }

            case 6:
                bubbleSort(orders, n);
                cout << "Sorted using Bubble Sort!\n";
                break;

            case 7:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 7);

    return 0;
}