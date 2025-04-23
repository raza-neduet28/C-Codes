#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter numbers of terms :";
cin>>n;
int pre=1 ;
int next=1;
int sum;
cout<<pre<<" "<<next<<" ";
for(int i=1;i<=n;i++){

        sum=pre+next;
    cout << sum << " ";
        pre = next;
        next = sum;

}

}
