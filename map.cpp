#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    map<string,int> m;
    m["parth"] = 36;
    m["parv"] = 37;
    m["dev"] = 17;
    // for(auto i : m)cout<<i.first<<" "<<i.second<<endl;
    // for(auto it=m.begin();it!=m.end();it++)
    //     cout<<it->first<<" "<<it->second<<endl;
    // // or
    for(auto it=m.begin();it!=m.end();it++)
        cout<<(*it).first<<" "<<(*it).second<<endl;


	multimap<string, int> mpp;
	mpp.emplace("raj", 2); 
	mpp.emplace("raj", 5); 
 
}