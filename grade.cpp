#include <iostream>
using namespace std;

int main() {
    int a;
    cout <<"enter" << endl;
    cin >> a;
    if(a>=90&&a<=100){
        cout << a << " A"<<endl;
    }
    else if(a>=80&&a<90){
        cout << a << " B"<<endl;
    }
    else if(a>=70&&a<80){
        cout << a << " C"<<endl;
    }
    else {
        cout << a << " Fail"<<endl;
    }
    return 0;
}