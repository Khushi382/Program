#include <iostream>
using namespace std;
int swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"value of a "<<a<<endl;
    cout<<"value of b "<<b<<endl;
}

int main() {
    int a;
    cout<<"Enter a"<<endl;
    cin>>a;
    int b;
    cout<<"Enter b"<<endl;
    cin>>b;
    int result= swap(a,b);


    return 0;
}