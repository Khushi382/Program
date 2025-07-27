#include<iostream>
#include<string>
using namespace std;

void name(string x){
    int length=x.length();
    for(int i=0;i<length+4;i++){
        cout<<"*";
    }
    cout<<endl;

    cout<<"* "<<x<<" *"<<endl;

    for(int i=0;i<length+4;i++){
        cout<<"*";
    }
    cout<<endl;
}



int main(){
    name("KANWAR");




    return 0;
}