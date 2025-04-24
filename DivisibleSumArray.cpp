#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int k;
cin>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 int counter=0;
    for(int i = 0; i < n; i++) {
            if((arr[i] + arr[n-i]) % k == 0) {
                counter=counter+1;
            }

    }
    cout<< counter;
    }



