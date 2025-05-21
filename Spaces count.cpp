#include<iostream>
#include<string>
using namespace std;
int main(void)
{
 string x;
 int count=0;
 getline(cin,x);
 for(char ch:x){
 if(ch==' ') {
    count++;
 }}
cout<< count;
}
