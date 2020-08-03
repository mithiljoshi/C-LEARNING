#include <iostream>
#include <vector> // contiguous memory location
#include <list> //doubly link list
#include <algorithm>

using namespace std;

int main()
{ //sequence containers
    int arr[]={100, 20, 300, 45, 55};
    int *begin = &arr[0];
    int *end = &arr[0]+ (sizeof(arr)/sizeof(int));

    vector<int> v;
    v.push_back(100);
    v.push_back(2001);
    v.push_back(301);
    v.push_back(361);
    v.push_back(377);
    v.push_back(358);

    for (auto &val : v)
    {
        cout<<"Vector val =  "<<val<<endl;
    }

    v.erase(std::remove(v.begin(), v.end(), 377), v.end());
    //v.erase(v.begin()+4, v.end()-1);
    cout<<endl;
    for (auto &val : v)
    {
        cout<<"Vector val =  "<<val<<endl;
    }


    sort(v.begin(), v.end());//takes only random access iterator
    // list is bidirection iterators

    // Iterators are similar to pointers..
    //list<int>::iterator itr = v.begin();
    //auto itr = v.begin();

    /*for (; begin!= end; begin++)
    {
        cout<<"Value = "<<*begin<<endl;
    }*/


    cout<<"Size => "<<v.size()<<endl;

    v.clear();

    cout<<"Size => "<<v.size()<<endl;

    return 0;
}

