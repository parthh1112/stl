#include <bits/stdc++.h>
using namespace std;

int main()
{

    array<int, 5> a;
    for (int i = 0; i < 5; i++)
    {
        a.at(i) = i + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;
    // or
    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
    // or
    cout << endl;
    for (auto it = a.rbegin(); it != a.rend(); it++)
    {
        cout << *it << " ";
    }
    // or
    cout << endl;
    for (auto it = a.end() - 1; it >= a.begin(); it--)
    {
        cout << *it << " ";
    }
    // or
    cout << endl;
    for (auto it : a) // foreach loop
    {
        cout << it << " ";
    }
    return 0;
}