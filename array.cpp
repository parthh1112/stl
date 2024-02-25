#include <iostream>
#include <array>
using namespace std;
int main (){
    // array<int,100> a{0};
    // for(int i=0;i<100;i++)cout<<a[i]<<" ";

    array<int,10> b;
    b.fill(0);
    // for(int i=0;i<10;i++)cout<<b[i]<<" ";
    // or
    for(int i=0;i<10;i++)cout<<b.at(i)<<" ";    

}