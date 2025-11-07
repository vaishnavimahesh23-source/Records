#include <iostream>
using namespace std;

class Array {
private:
    int arr[100];    // Static array with max size
    int size;        // Current number of elements

public:
    Array() {
        size = 0;
    }

    // Insert element at end
    void insert(int element) {
        if (size < 100) {
            arr[size] = element;
            size++;
        } else {
            cout << "Array is full. Cannot insert more elements.\n";
        }
    }

    // Delete element by index
    void remove(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index.\n";
            return;
        }

        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        cout << "Element deleted at index " << index << ".\n";
    }

    // Search for an element
    void search(int key) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == key) {
                cout << "Element " << key << " found at index " << i << ".\n";
                return;
            }
        }
        cout << "Element " << key << " not found.\n";
    }

    // Display all elements
    void display() {
        if (size == 0) {
            cout << "Array is empty.\n";
            return;
        }

        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Main function
int main() {
    Array myArray;
    int choice, value, index;

    do {
        cout << "\n--- Array Operations ---\n";
        cout << "1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                myArray.insert(value);
                break;
            case 2:
                cout << "Enter index to delete: ";
                cin >> index;
                myArray.remove(index);
                break;
            case 3:
                cout << "Enter value to search: ";
                cin >> value;
                myArray.search(value);
                break;
            case 4:
                myArray.display();
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;
}

