#include<iostream>
using namespace std;
int main(){
int n,k;
cin>>n;
cin>>k;
int bill[n];
for(int i=0;i<n;i++){
    cin>>bill[i];
}
int b;
cin>>b;
 int sum=0;
for(int i=0;i<n;i++){
    if(i!=k){
    sum+=bill[i];}
}
int half=sum/2;
if(b==half){
        cout<<"Bon Appetit"<<endl;
    }
    else{
        cout<<b-half<<endl;
    }
}

