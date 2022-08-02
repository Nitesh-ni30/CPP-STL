#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s; // last in first out
    s.push(5);
    s.push(6);
    s.push(3);
    s.push(100);

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
