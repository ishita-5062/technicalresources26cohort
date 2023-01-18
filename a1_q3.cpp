#include <iostream>
using namespace std;

int main(){
int t;
cout<<"Enter number of times you want to input a number";
cin>>t;

for (int i=0; i<t; i++){
    int num;
    cout<<"Enter number:";
    cin>>num;
    if (num==1 or num==2){
            cout<<"prime"<<endl;}
    for (int div=2; div<num;div++){
        if (num%div==0){
            cout<<"not prime"<<endl;
            break;
        }
    else{
        cout<<"prime"<<endl;
        break;
        }
     }
}
}


