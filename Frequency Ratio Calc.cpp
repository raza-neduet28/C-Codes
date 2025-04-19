#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

double count=0;
double precount=0;
double passcount=0;
for(int i=0 ;i<n;i++){
    if(arr[i]>0){
        count=count+1;
    }
    if(arr[i]<0){
        precount=precount+1;
    }
    else{
        passcount=passcount+1;
    }

}
  cout<<(count/n)<<endl;
    cout<<(precount/n)<<endl;
    cout<<(passcount/n);
}
