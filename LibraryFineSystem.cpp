#include<iostream>
using namespace std;
int main(){
int d1,d2,m1,m2,y1,y2;
int fine;
cin>>d1>>m1>>y1;
cin>>d2>>m2>>y2;

if(y1==y2 && m1==m2){
    if(d1!=d2){
        if(d1<d2){
            fine=0;
        }
        else{
        fine=15*(d1-d2);}
    }
    else{
        fine=0;
    }
}
 if(y1==y2){
    if( m1!=m2){
        if(m1<m2){
            fine=0;
        }
        else{
        fine=500*(m1-m2);}
    }

    }
    if(y1!=y2){
        if(y1<y2){
        fine=0;}
        else{
            fine=10000;
        }
    }
    cout<< fine;
}


