#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    // vector<int> v = {4,3,1,2,3,3};
    // set<int> s;
    // for(auto i : v){
    //     s.insert(i);
    // }
    // cout<<"The size of vector is => " << v.size()<< " and the elements are <=====> ";;
    // for(auto i : v)cout<<i<<" ";cout<<endl;
    // cout<<"The size of set is => " << s.size()<< " and the elements are <=====> ";;
    // for(auto i : s)cout<<i<<" ";cout<<endl;

    // set<int> s = {4, 3, 5, 1, 7};
    // for (auto i : s)cout << i << " ";cout << endl;
    // // s.erase(s.begin());
    // // for(auto i : s)cout<<i<<" ";cout<<endl;
    // // s.erase(s.begin(), s.begin()+2); // error ?
    // s.erase(4);
    // for (auto i : s)cout << i << " ";cout << endl;

    // set<int> s = {4, 3, 5, 1, 7};
    // for (auto i : s)cout << i << " ";cout << endl;
    // s.emplace(10);
    // for (auto i : s)cout << i << " ";cout << endl;

    // set<int> s = {4, 3, 5, 1, 7};
    // auto it = s.find(5);
    // cout<<*it<<endl;


    set<int> s = {4, 3, 5, 1, 7};
    for(auto it = s.begin(); it != s.end() ;it++)cout<<*it<<" ";cout<<endl;
    


    return 0;
}