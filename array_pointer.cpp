#include<iostream>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    int* ptr=a;
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<" ";
    }
    return 0;
}
