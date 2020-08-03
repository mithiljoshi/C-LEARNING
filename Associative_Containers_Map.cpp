#include <iostream>
#include <map>

using namespace std;

int main()
{
    pair<int, int> p =make_pair(10,20);
    cout<<p.first<<"-"<<p.second<<endl;

    //map<int, int>mp;
    //unordered_map has hash implemetation

    multimap<int, int> mp;
    //mp[4]=400;
    //mp[3]=330;
    mp.insert(make_pair(10,100));
    mp.insert(make_pair(1,400));
    mp.insert(make_pair(30,6700));
    mp.insert(make_pair(60,155));
    mp.insert(make_pair(10,1800));
    //mp[7]=700;
    //maps sort the order by the key
    //mp[10]=22;// this form updates the key to a new value
    // not allowed in multimap



    //iterate
    for(auto it = mp.begin(); it!= mp.end(); it++)
    {
        cout<<it->first<<"----"<<it->second<<endl;
    }


    return 0;
}
