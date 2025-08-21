#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int m = 0; 
    int unique[100];

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < m; j++) {
            if (arr[i] == unique[j]) { found = true; break; }
        }
        if (!found) unique[m++] = arr[i];
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < m; i++) cout << unique[i] << " ";
    return 0;
}
