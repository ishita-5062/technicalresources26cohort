#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int marks;
    cin>>marks;
    
    //write your code here
    if (marks>90){
        cout<<"Excellent"<<endl;
    }
    else if (marks>80 and marks<=90){
        cout<<"Good"<<endl;
    }
    else if (marks>70 and marks<=80){
        cout<<"Fair"<<endl;
    }
    else if (marks>60 and marks<=70){
        cout<<"Meets expectations"<<endl;
    }
    else{
        cout<<"Below par"<<endl;
    }
  
}
