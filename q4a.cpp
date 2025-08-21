#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n/2; i++)
        swap(arr[i], arr[n-1-i]);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}


