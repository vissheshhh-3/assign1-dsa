#include <iostream>
using namespace std;
int arr[100], n = 0;  // array and size
void create() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
}
void display() {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
void insert() {
    int pos, val;
    cout << "Enter position (0-based): "; cin >> pos;
    cout << "Enter value: "; cin >> val;
    for (int i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = val;
    n++;
}
void Delete() {
    int pos;
    cout << "Enter position to delete: "; cin >> pos;
    for (int i = pos; i < n-1; i++) arr[i] = arr[i+1];
    n--;
}
void linearSearch() {
    int key;
    cout << "Enter element to search: "; cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Found at position " << i << endl;
            return;
        }
    }
    cout << "Not found\n";
}
int main() {
    int choice;
    while (1) {
        cout << "\nMENU\n1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch(choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert(); break;
            case 4: Delete(); break;
            case 5: linearSearch(); break;
            case 6: return 0;
            default: cout << "Invalid choice\n";
        }
    }
}
