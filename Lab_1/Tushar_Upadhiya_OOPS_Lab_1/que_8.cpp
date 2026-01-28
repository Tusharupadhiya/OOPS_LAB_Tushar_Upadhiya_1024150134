#include<iostream>
using namespace std;
int main(){
   cout<<"Number of days the book is late: ";
   int d;
   cin>>d;
    if(d<=5){
         cout<<"Fine: "<<d*0.5<<endl;
    }
    else if(d>5 && d<=10){
        cout<<"Fine: "<<(5*0.5)+(d-5)*1<<endl;
    }
    else if(d>10 && d<=30){
        cout<<"Fine: "<<(5*0.5)+(5*1)+(d-10)*5<<endl;
    }
    else{
        cout<<"Membership cancelled"<<endl;
    }
    return 0;
}