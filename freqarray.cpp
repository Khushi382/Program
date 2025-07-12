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
    cout <<"FREQUENCY "<<endl;
    for(int i = 0; i < 100; i++) {
        if(freq[i] > 0) {
            cout << i << "=" << freq[i] << endl;
        }
    }

    return 0;
}
