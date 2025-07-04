#include <iostream>
using namespace std;

int main() {
    int a;
    cout <<"enter" << endl;
    cin >> a;
    if(a%4==0 &&a%100!=0 || a%400==0){
        cout << a << "is leap"<<endl;
    }
    else{
        cout << a << "is not leap"<<endl;
    }
    return 0;
}