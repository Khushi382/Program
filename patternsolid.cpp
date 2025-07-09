#include<iostream>
using namespace std;
int main()
{
   /* SOLID PATTERN
   for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<"*";
        }
        cout<<endl;

    }*/




    /*HOLLOW PATTERN
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==0||i==3||j==0||j==3){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;

    }*/




    /*RIGHT ANGLED TRIANGLE
    for(int i=0;i<6;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;

    }*/




    /*INVERTED RIGHT ANGLED
    for(int i = 6; i >= 1; i--) {          
        for(int j = 1; j <= i; j++) {      
            cout << "*";
        }
        cout << endl;                      
    }*/




    /*NUMBER TRIANGLE
    for(int i=1;i<6;i++){
        for(int j=1;j<i;j++){
            cout<<j;
        }
        cout<<endl;

    }*/



    /*INVERTED NUMBER TRIANGLE
    for(int i = 4; i >= 1; i--) {          
        for(int j = 1; j <= i; j++) {      
            cout << j;
        }
        cout << endl;                      
    }*/



   
    /*PYRAMID
    for(int i = 1; i <= 6; i++) {
        for(int j = 1; j <= 6- i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;  
    }*/




    /*INVERTED PYRAMID
    for(int i = 6; i >=1; i--) {
        for(int j = 6-i; j>=1; j--) {
            cout << " ";
        }
        for(int k = 2*i-1; k>=1; k--) {
            cout << "*";
        }
        cout << endl;  
    }*/



    /*DIAMOND PATTERN
    for(int i = 1; i <= 6; i++) {
        for(int j = 1; j <= 6- i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;  
    }
    for(int i = 6; i >=1; i--) {
        for(int j = 6-i; j>=1; j--) {
            cout << " ";
        }
        for(int k = 2*i-1; k>=1; k--) {
            cout << "*";
        }
        cout << endl;  
    }*/




    /*01 TRIANGLE
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            if((i + j) % 2 == 0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }*/




    /*FLOYD TRIANGLE
    int num=1;
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }*/




    /*PASCAL TRIANGLE
    int value;
    for(int i=1;i<=5;i++){
         for(int space=1;space<=5-i;space++){
         cout<<" ";
    }
    for(int j=1;j<=i;j++){
         if(i==1||j==1){
              value=1;
         }
         else{
              value=value*((i-j)+1)/(j-1);
         }
         cout<<" "<<value ;
    }
    cout<<endl;
    }*/




    /*BUTTERFLY
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2*(6 - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 6; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2*(6 - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }*/




    /*RHOMBUS
    for (int i = 1; i <= 5; i++) {
        for (int space = 1; space <= 5 - i; space++) {
            cout << " ";
        }
        for (int j = 1; j <= 5; j++) {
            cout << "*";
        }
        cout << endl;
    }*/




    /*HOLLOW DIAMOND
    for (int i = 1; i <= 5; i++) {
        for (int space = 1; space <= 5 - i; space++) {
            cout << " ";
        }
        for (int j = 1; j <= 2*i - 1; j++) {
            if (j == 1 || j == 2*i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    for (int i = 5 - 1; i >= 1; i--) {
        for (int space = 1; space <= 5 - i; space++) {
            cout << " ";
        }
        for (int j = 1; j <= 2*i - 1; j++) {
            if (j == 1 || j == 2*i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }*/








   










    return 0;







    
} 
