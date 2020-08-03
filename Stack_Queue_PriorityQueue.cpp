#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>

using namespace std;
//STL container adapters: stack, queue and priority queue
int main()
{
    //stack<int>cstk;
    priority_queue<int, vector<int>, std::greater<int>>cstk;
    cstk.push(100);
    cstk.push(200);
    cstk.push(300);
    cstk.push(120);
    cstk.push(379);

    while(!cstk.empty())
    {
        cout<<cstk.top()<<endl;
        //cout<<cstk.front()<<endl;
        //cout<<cstk.back()<<endl;
        cstk.pop();
    }

    return 0;
}


