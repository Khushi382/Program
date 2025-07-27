#include <iostream>
using namespace std;

int main()
{ 
    int choice,days;
    double cost=0;
    int Allowedperiod=0;
    cout<<"Enter book type:"<<endl;
    cout<<"1. Fiction (14 days)"<<endl;
    cout<<"2. Non-Fiction (21 days)"<<endl;
    cout<<"3. Reference (7 days)"<<endl;
    cout<<"Choice: "<<endl;
    cin>>choice;
    cout<<"Enter days since borrowed: "<<endl;
    cin>>days;
    
    switch(choice){
        case 1:
        cout<<"Book Type:Fiction"<<endl;
         Allowedperiod= 14;
        break;
        case 2:
        cout<<"Book Type:Non-Fiction"<<endl;
        Allowedperiod= 21;
        break;
        case 3:
        cout<<"Book Type:Reference"<<endl;
        Allowedperiod= 7;
        break;
    }
    cout<<"Allowed period: "<<Allowedperiod<<endl;
    cout<<"Days borrowed: "<<days<<endl;
    cout<<"Overdue by: "<<days-Allowedperiod<<endl;
    
    if(days-Allowedperiod>=1&&days-Allowedperiod<=7){
        cost=0.50;
    }
    else if(days-Allowedperiod>=8&&days-Allowedperiod<=14){
        cost=1.00;
    }
    else{
        cost=2.00;
    }
    cout<<"Fine calxulation"<<endl;
    cout<<"Days 1-"<<days-Allowedperiod<<"overdue:"<<(days-Allowedperiod)*cost<<endl;
    
    

    return 0;
}