#include <iostream>
using namespace std;

int main(){
    int n=3;
    for (int i=1; i<=n; i++){
        for (int k=n-i; k>0; k--){
            cout<<"   ";        }
        for (int j=1; j<=2*i-1; j++){
            cout<<"*  ";        }
        cout<<endl;
        
    }
    for (int i=n-1; i>=1; i--){
        for (int k=1; k<=n-i; k++){
            cout<<"   ";        }
        for (int j=n-2*i; j<=1; j++){
            cout<<"*  ";        }
        cout<<endl; 
    }
}
