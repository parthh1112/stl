#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq; // max_priority_queue = default
    pq.push(3);
    pq.push(2);
    pq.push(6);
    pq.push(-4);
    cout << pq.top() << endl;
    priority_queue<int, vector<int>, greater<int>> mpq; // min_priority_queue = default
    mpq.push(3);
    mpq.push(2);
    mpq.push(6);
    mpq.push(-4);
    cout << mpq.top() << endl;
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> mpq; // min_priority_queue = default
}