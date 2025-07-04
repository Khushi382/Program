#include <iostream>
using namespace std;

int main() {
    int a;
    cout <<"enter a" << endl;
    cin>>a;
    int b;
    cout <<"enter b" << endl;
    cin>>b;
    char x;
    cout<<"Enter the operator"<<endl;
    cin>>x;

    switch(x){
        case '+': cout<<a+b<<endl;
        break;
        case '-': cout<<a-b<<endl;
        break;
        case '*': cout<<a*b<<endl;
        break;
        case '%': cout<<a/b<<endl;
        break;
    }
    return 0;
}