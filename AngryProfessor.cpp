#include<iostream>
using namespace std;
int main(){

int t;
cout<<"Enter Number of Test Cases :";
cin>>t;
int k;
cout<<"Enter Class Cancellation Threshold :";
cin>>k;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int count=0;
string b;
for(int i=0;i<n;i++){
    if(a[i]<=0){
        count++;
    }
    if(count>=k){
        b="NO";
    }
    else{
        b="YES";
    }
    }
    cout<<"Class is Cancelled or Not :"<< b;
}
