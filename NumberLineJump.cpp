#include<iostream>
using namespace std;
int main(){
int x1,x2,v1,v2;
cin>>x1>>v1;
cin>>x2>>v2;
int x,y;
for(int i=1;i<1000000;i++){
        x=x1+(v1*i);
        y=x2+(v2*i);
  if(x==y){
        cout<<"YES";
    }

}

cout<< "NO";
}

