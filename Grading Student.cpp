#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
 int grades[n];
 int arr[n];
    for(int i=0;i<n;i++){
        cin>>grades[i];}
    for(int i=0; i<n; i++){
    int newgrades = grades[i];
    while(newgrades%5!=0){
        newgrades = newgrades+1;
    }
    if(newgrades-grades[i]<3 && newgrades>=40){
        arr[i]=newgrades;
    }
    else{
        arr[i]=grades[i];
    }
    cout<<arr[i]<<endl;
}
}
