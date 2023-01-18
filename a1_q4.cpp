#include <iostream>
using namespace std;
int prime(int x){
     // Corner case
    if (x <= 1)
        return 0;
 
    // Check from 2 to n-1
    for (int i = 2; i < x; i++)
        if (x % i == 0)
            return 0;
 
    return 1;
    }
int main(){
    int low;
    int high;
    cin>>low;
    cin>>high;

    for (int i=low+1; i<high;i++){
        int m=prime(i);
        if (m==1){
            cout<<i<<endl;
        }
        }
    }
    

