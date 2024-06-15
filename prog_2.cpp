#include<bits/stdc++.h>
using namespace std;


int main(){
    map<string,int> map1={
        {"kunal", 2200},
        {"babu", 1200},
        {"lalu",4400},
        {"kaku",6600},
        {"damru",3400}
    };
    map<string,int> map2={
        {"kunal",3900},
        {"dinu",5500},
        {"lalu",8890},
        {"it",900},
        {"chunu",7900}
    };
    
    string s;
    for(auto it: map1){
        s=it.first;
            if(map2.find(s)!=map2.end()){
                swap(map1[s],map2[s]);
            }
        
    }
    

for(auto it:map1){
    cout<<it.first<<"="<<it.second<<endl;
}
cout<<endl;

for(auto it:map2){
    cout<<it.first<<"="<<it.second<<endl;
}
    

    return 0;
}