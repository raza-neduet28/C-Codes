#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number of day you find cumulative :";
cin>>n;
int shared=5;
int c=0;
for(int i=1;i<= n; i++) {
        int liked = shared/2;
        c+= liked;
        shared=liked*3;
    }

    cout<<c;
}
