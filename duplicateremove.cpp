#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array numbers: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    cout<<"FINAL ARRAY IS : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}