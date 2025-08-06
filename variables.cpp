#include <iostream>
int globalVar = 10;
class MyClass {
public:
    int instanceVar;             
    static int staticMemberVar;  
    MyClass(int val) {
        instanceVar = val;
    }
    void show() {
        std::cout << "Instance variable: " << instanceVar << std::endl;
        std::cout << "Static member variable: " << staticMemberVar << std::endl;
    }
};
int MyClass::staticMemberVar = 100;

int main() {
    std::cout << "Global variable: " << globalVar << std::endl;
    int localVar = 5;               
    static int staticLocalVar = 1;  
    std::cout << "Local variable: " << localVar << std::endl;
    std::cout << "Static local variable: " << staticLocalVar << std::endl;
    MyClass obj1(10);
    MyClass obj2(20);
    obj1.show();
    obj2.show();
    staticLocalVar++; 
    return 0;
}
