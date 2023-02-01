#include <iostream>
using namespace std;

int main(){
    int i,spin,pin,ch,chbal=0,wbal,dpcash;
    // cout<<"please set your atm pin ";
    // cin>>spin;
    spin = 4842;
    cout<<"please enter your atm pin";
    cin>>pin;
    while(spin!=pin){
    cout<<"please enter your atm pin";
    cin>>pin;
    }
    for(i=0;i<100;i++){
    if(spin==pin){
        cout<<"please select your choice";
        cout<<"press 1 to check your current balance";
        cout<<"press 2 to withdraw cash";   
        cout<<"press 3 to deposit cash";
        
        
        cin>>ch;

        switch(ch){
             case(1):
             cout<<"your current balance is "<<chbal;
             break;
             case(2):
             cout<<"enter amount you want to withdraw";
             cin>>wbal;
             chbal = chbal - wbal;
             cout<<"please collect your cash";
             break;
             case(3):
             cout<<"enter amount you want to deposit";
             cin>>dpcash;
             chbal = chbal + dpcash;
             cout<<dpcash<<"is deposited into your account";
             break;
             
            }

    }
    }
    
}