#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int a[n][n];
    cout << "Enter elements of the matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int Sumr = 0, Suml = 0;
    for(int i = 0; i < n; i++) {
        Sumr += a[i][i];              
        Suml += a[i][n - i - 1];     
    }
    cout << "Diagonal1 Sum = " << Sumr << endl;
    cout << "Diagonal2 Sum = " << Suml << endl;

    return 0;
}
