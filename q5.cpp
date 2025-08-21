#include <iostream>
using namespace std;
int main() {
    int a[10][10], r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter elements:\n";
    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++) cin >> a[i][j];


    for (int i=0;i<r;i++) {
        int sum=0;
        for (int j=0;j<c;j++) sum += a[i][j];
        cout << "Row " << i << " sum = " << sum << endl;
    }

    for (int j=0;j<c;j++) {
        int sum=0;
        for (int i=0;i<r;i++) sum += a[i][j];
        cout << "Column " << j << " sum = " << sum << endl;
    }
}
