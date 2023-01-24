#include <iostream>
#include <string>
using namespace std;
int main(){
    int num;
    cin>>num;
    string revnum="";
    int k;
    cin>>k;
    int count=0;
    while (count!=0){
        revnum= to_string(num%10)+revnum;
        num=num/10;
        count-=1;
        
    }
    revnum+= to_string(num);
    cout<<revnum;
}