#include<iostream>
using namespace std;
int main(){
int a,b,s,t;
cin>>a>>b>>s>>t;
int n;
cin>>n;
int m;
cin>>m;
int apples[n];
int oranges[m];
for(int i=0;i<n;i++){
    cin>>apples[i];
}
for(int i=0;i<m;i++){
    cin>>oranges[i];
}
 int count=0;
    int precount=0;
    int sum;
for(int i=0;i<n;i++){
    sum =a+apples[i];
    if(sum>=s && sum<=t)
    count=count+1;
}
for(int i=0;i<m;i++){
    sum =b+oranges[i];
    if(sum>=s && sum<=t)
    precount=precount+1;
}
cout<<count<<endl;
cout<<precount;
}

