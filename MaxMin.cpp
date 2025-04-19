#include<iostream>
using namespace std;
int main(){

int n=5;

int ar[5];
int min=INT_MAX;
    int max=INT_MIN;
    int count=0;
    int precount=0;
for(int i=0 ;i<5 ;i++){
    if(i!=min){
        count+=ar[i];
    }
}
for(int j=0 ;j<5 ;j++){
    if(j!=max){
        precount+=ar[j];
    }
}
cout<<count;
cout<<precount;
}



