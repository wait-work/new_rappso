#include <iostream>
using namespace std;

int fix(){
        static int chbal = 0; 
}

int main(){
    int i,spin,pin,ch,chbal=0,wbal,dpcash;
    // cout<<"please set your atm pin ";
    // cin>>spin;
    spin = 4842;
    cout<<"please enter your atm pin \n";
    cin>>pin;
    while(spin!=pin){
    cout<<"please enter your atm pin \n";
    cin>>pin;
    }
    for(i=0;i<100;i++){
    if(spin==pin){
        cout<<"please select your choice\n";
        cout<<"press 1 to check your current balance\n";
        cout<<"press 2 to withdraw cash\n";   
        cout<<"press 3 to deposit cash\n";
        cout<<"press 4 to exit \n";
        
        
        cin>>ch;

        switch(ch){
             case(1):
             cout<<"your current balance is  \n"<<chbal<<"\n";
             break;
             case(2):
             cout<<"enter amount you want to withdraw \n";
             cin>>wbal;
             chbal = chbal - wbal;
             cout<<"please collect your cash \n";
             break;
             case(3):
             cout<<"enter amount you want to deposit \n";
             cin>>dpcash;
             chbal = chbal + dpcash;
             cout<<dpcash<<"is deposited into your account \n";
             break;
             case(4):
             exit(0);
             
            }

    }
    }

    
    
}