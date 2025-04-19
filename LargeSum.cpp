#include<iostream>
using namespace std;
int main(){
    long n;
    cin>>n;
int ar[n];
for(int i=0;i<n;i++){
    cin>>ar[i];
}
long long count=0;
for(int j=0;j<n;j++){
    count+=ar[j];
}
cout<<count;
}


