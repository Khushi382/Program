#include<iostream>
using namespace std;

int main() {
    int a[5];
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    int freq[100] = {0};
    for(int i = 0; i < 5; i++) {
        freq[a[i]]++;
    }
    cout <<"DUPLICATE "<<endl;
    for(int i = 0; i < 100; i++) {
        if(freq[i] >= 2) { 
            cout<<i<<endl;
        }
    }

    return 0;
}





//ANOTHER CODE FOR DUPLICATE





#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 7, 2, 5, 4, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate elements are: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}
