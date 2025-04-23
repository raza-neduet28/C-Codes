#include<iostream>
using namespace std;
int main(){
double avg;
int n;
cout<<"Enter NumberS :";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int sum=0;
for(int j=0;j<n;j++){
    sum+=arr[j];
}
cout<<"The average of numbers is :"<<sum/n;

}
