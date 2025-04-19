#include<iostream>
using namespace std;
int main(){

int a[3];
int b[3];
for(int i=0 ;i<3 ;i++){
    cin>>a[i];
}
for(int i=0 ;i<3 ;i++){
    cin>>b[i];
}
    int count=0;
            int passcount=0;
for(int i=0 ;i<3 ;i++){
    if(a[i]>b[i]){

        count=count+1;

    }
    if(a[i]<b[i]){

     passcount=passcount+1;

    }


}
   cout<<passcount;
   cout<<count;
}


