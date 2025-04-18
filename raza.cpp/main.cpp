#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    int small,large;
    cout<<"a";
    cin>>a;
    cout<<"b";
    cin>>b;
    cout<<"c";
    cin>>c;
    if(a>b && a>c){
        large=a;
    }
    else if(b>a && b>c){
        large=b;
    }
        else if(c>a && b<c){
        large=c;
    }
        else if(b<a && b<c){
        small=b;
    }
    else if(b>a && a<c){
        small=a;
    }
        else if(c<a && b>c){
        small=c;
    }

    cout<<"largest:"<<large;
    cout<<"smallest:"<<small;
}
