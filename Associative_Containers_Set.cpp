#include <iostream>
#include <set>
#include <map>

using namespace std;
//creating own comparator
template <typename type>
struct mycomp {
    bool operator() (const type & first, const type & second) const{
        return first>second;
    }
};


int main()
{
    //set: associative container
    //only one value(key as value)

    map<int, string, mycomp<int>> mymap;
    mymap[10]='abc', mymap[30] = 'def', mymap[40]='ghi';
    for(auto &elem : mymap)
    {
        cout<<elem.first<<"-"<<elem.second<<endl;
    }

    set<int, less<int>>myset;
    myset.insert(1070), myset.insert(190),myset.insert(190), myset.insert(140), myset.insert(170);
    myset.erase(170);
    for(auto &setval: myset)
    {
        cout<<setval<<endl;
    }
    return 0;
}
