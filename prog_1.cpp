#include<bits/stdc++.h>
using namespace std;


int main(){
    map<string,int> map={
        {"kunal", 22},
        {"babu", 12},
        {"lalu",44},
        {"kaku",66},
        {"damru",34}
    };
    string s;
    cin>>s;
    if(map.find(s)!=map.end()){
        cout<<"yes";
    }else{
        cout<<"no";
    }

    return 0;
}