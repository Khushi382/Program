#include<iostream>
using namespace std;
int main(){
    int a[5];

    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int largest=a[0];
    int smallest=a[0];
    for(int i=0;i<5;i++){
        if(a[i]>largest){
            largest=a[i];
        }
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    cout<<"LARGEST "<<largest <<endl;
    cout<<"SMALLEST "<<smallest <<endl;
    

    return 0;
}