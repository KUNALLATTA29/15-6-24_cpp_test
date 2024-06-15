#include<bits/stdc++.h>
using namespace std;


int main(){
    map<string,int> map1={
        {"kunal", 22},
        {"babu", 12},
        {"lalu",44},
        {"kaku",66},
        {"damru",34}
    };
    
    map<int,string> map2;
    
    for(auto it:map1){
        map2[it.second]=it.first;
    }
    
    for(auto it:map2){
        cout<<it.first<<" = "<<it.second<<endl;
    }
    

    return 0;
}