#include<iostream>
#include<cmath>
using namespace std;
int main(){
int h,b,p;
double radian1,degree1,degree2,radian2,pi=3.142;
cout<<"Enter the length of Perpendicular :";
cin>>p;
cout<<"Enter the length of Base :";
cin>>b;
h=sqrt((b*b)+(p*p));
cout<<"Enter the length of Hypotenuse is :"<<h<<endl;
degree1=p/h;
radian1=degree1*(pi/180);
degree2=b/h;
radian2=degree2*(pi*180);
cout<<"The angle of Perpendicular and Hypotenuse is :"<<asin(radian1)<<endl;
cout<<"The angle of Base and Hypotenuse is :"<<acos(radian1)<<endl;
cout<<"The sine angle is :"<<sin(radian1)<<endl;
cout<<"The cosine angle is :"<<cos(radian1)<<endl;
cout<<"The sine angle is :"<<sin(radian2)<<endl;
cout<<"The cosine angle is :"<<cos(radian2)<<endl;
}
