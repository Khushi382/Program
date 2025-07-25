#include <iostream>
using namespace std;
void swap(int* a, int* b) {
int temp = *a;
*a = *b;
*b = temp;
}
int main() {
int x = 2, y = 3;
cout <<"BEFORE SWAPPING: "<< "x: " << x << ", y: " << y << endl;
swap(&x, &y);
cout <<"AFTER SWAPPING: "<< "x: " << x << ", y: " << y << endl;
return 0;
}