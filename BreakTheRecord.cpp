#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int scores[n];
for(int i=0;i<n;i++){
    cin>>scores[i];
}
int counter=0;
int precount=0;
int max=scores[0];
int min=scores[0];


    for(int i=0;i<n;i++){
        if(scores[i]>max){
            max=scores[i];
            counter=counter+1;
        }
        else if(scores[i]<min){
            min=scores[i];
            precount=precount+1;
        }
    }
cout<<counter<<" "<<precount;
}
