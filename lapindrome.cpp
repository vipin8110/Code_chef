#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string a,b;
    int x=str.length();
    int mid= x/2;
    for(int i=0;i<mid;++i)
        a=a+str[i];
        if(x%2!=0)
            mid=mid+1;
    for(int i=mid;i<x;++i)
        b=b+str[i];
    if(a==b)
        cout<<"they are lapindrome"<<endl;
    else
        cout<<"they are not lapindrome"<<endl;
    cout<<"First string:"<<a<<endl;
    cout<<"SEOONCD strig:"<<b<<endl;
    return 0;

}
