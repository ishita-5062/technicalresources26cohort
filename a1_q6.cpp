#include <iostream>
#include <string>
using namespace std;
int main(){
    int num;
    cin>>num;
    string revnum="";
    int count=0;
    while (num!=0){
        revnum+= to_string(num%10);
        num=num/10;
        
    }
    cout<<revnum;
}