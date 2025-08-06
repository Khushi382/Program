/*#include <iostream>
using namespace std;
void swap(int* a, int* b, int* c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
int& largest(int* a, int* b, int* c) {
    if (*a > *b && *a > *c) {
        return *a;
    }
    else if (*b > *c && *b > *a) {
        return *b;
    }
    else {
        return *c;
    }
}
int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    cout << "BEFORE SWAPPING: " << "a: " << a << ", b: " << b << ", c: " << c << endl;
    swap(&a, &b, &c);
    cout << "AFTER SWAPPING: " << "a: " << a << ", b: " << b << ", c: " << c << endl;
    int largeresult = largest(&a, &b, &c); 
    cout << "Largest: " << largeresult << endl;
    largest(&a, &b, &c) = 100; 
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;

    return 0;
}*/


/*#include<iostream>
using namespace std;
int calculate(int x, int y){
    return x+y;
}
float calculate(float a, float b){
    return a*b;
}
int calculate(int e, int f, int g){
    return ((e+f+g)/3);
}
int main(){
    int x=14;
    int y=26;
    float a=1.1;
    float b=1.2;
    int e=1;
    int f=2;
    int g=3;
   
    cout<<"SUM: "<< calculate(x,y)<<endl;
    cout<<"PRODUCT: "<<calculate(a,b)<<endl;
    cout<<"AVERAGE: "<<calculate(e,f,g)<<endl;
    
    return 0;
}*/




/*#include<iostream>
using namespace std;
int double_funvalue(int x){
    return x*x;
}
int double_fun(int &x){
    return x*x;
}
int main(){
    int k=2;
    cout<<"BY VALUE: "<<double_funvalue(k)<<endl;
    cout<<"BY REFERENCE: "<<double_fun(k)<<endl;
    return 0;
}*/


/*#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int* ptr=a;
    int sum=0;
    cout<<"Reverse: "<<endl;
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<" ";
        sum+=(*(ptr+i));
    }
    cout<<endl;
    cout<<"Sum: "<<endl;
    cout<<sum;

    return 0;
}*/



/*#include <iostream>
using namespace std;
class Calculator {
public:
    int process(int a, int b) {
        return a + b;
    }
    int process(int* a, int* b) {
        return *a + *b;
    }
     int process(int& a) {
        a = a * 2;
        return a;
    }
    int process(int a, int* b) {
        return a * (*b);
    }
};

int main() {
    Calculator calc;
    int x = 5, y = 10;
    cout << "Sum of two ints: " << calc.process(x, y) << "\n";
    cout << "Sum of two int pointers: " << calc.process(&x, &y) << "\n";
    int z = 7;
    cout << "Original z: " << z << "\n";
    cout << "Doubled z: " << calc.process(z) << "\n";
    cout << "z after doubling: " << z << "\n";
    cout << "Product of int and int pointer: " << calc.process(x, &y) << "\n";

    return 0;
}*/



#include <iostream>
#include <memory>

int main() {
    
std::unique_ptr<int> p1(new int(42));
std::cout << "Number: " << *p1 << std::endl;

std::shared_ptr<int> p2(new int(99));
std::cout << "p2: " << *p2 << std::endl;
std::cout << "Count: " << p1.use_count() << std::endl;

return 0;
}

