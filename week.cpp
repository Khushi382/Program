#include <iostream>
using namespace std;

int main() {
    int a;
    cout <<"enter a" << endl;
    cin>>a;

    switch(a){
        case 1: cout<<" MONDAY"<<endl;
        break;
        case 2: cout<<" TUESDAY"<<endl;
        break;
        case 3: cout<<" WEDNESDAY"<<endl;
        break;
        case 4: cout<<" THURSDAY"<<endl;
        break;
        case 5: cout<<" FRIDAY"<<endl;
        break;
        case 6: cout<<" SATURDAY"<<endl;
        break;
        case 7: cout<<" SUNDAY"<<endl;
        break;
    }
    return 0;
}