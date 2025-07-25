#include <iostream>
using namespace std;

int main() {
    float num = 12.5;       
    float *ptr = &num;     
    cout<<"value: "<<*ptr;

    return 0;
}
