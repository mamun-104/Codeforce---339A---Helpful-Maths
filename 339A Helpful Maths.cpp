#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    int a=0,b=0,c=0;
    int i;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='1'){a++;}
        else if(s[i]=='2'){b++;}
        else if(s[i]=='3'){c++;}

    }
    //first loop for 1
    if(a>0){
    while(1)
    {
        if(a>0){cout<<"1";a--;}
        if(a!=0 || b!=0 || c!=0){cout<<"+";}
        if(a==0){break;}

    }}

    //2nd loop for 2
    if(b>0){
    while(1)
    {
        if(b>0){cout<<"2";b--;}
        if(b!=0 || c!=0){cout<<"+";}
        if(b==0){break;}

    }}

    //third loop for 3
    if(c>0){
    while(1)
    {
        if(c>0){cout<<"3";c--;}
        if(c!=0){cout<<"+";}
        if(c==0){cout<<endl; break;}


    }}


    return 0;
}

