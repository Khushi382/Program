/*#include<iostream>
using namespace std;
class Demo{
    public:
    static int counter;                        //Declaration inside class
    Demo(){
        counter++;
    }
};
int Demo::counter=0;                                 //Definition outside class
int main(){
    Demo a,b;
    cout<<Demo::counter;                            
    return 0;
}*/





#include<iostream>
using namespace std;
class Demo{
    public:                     
    static int result(int x){
        return x*x;
    }
};                             
int main(){
    cout<<Demo::result(5);                            
    return 0;
}