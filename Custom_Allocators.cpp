#include <iostream>
#include <vector>

using namespace std;
//custom allocators - low level optimization

//create own allocator
template<typename type>
struct Myalloc : allocator<type>{
    type * allocate(size_t size){
        cout<<"Allocation request size "<<size<<endl;
        return new type(size);
    }
    void deallocate(type * ptr, size_t size){
    cout<<"Deallocating size "<<size<<endl;
    delete[] ptr;}
};

int main()
{
    vector<int, Myalloc<int>> v1;
    v1.push_back(10);

    for(auto & val :v1)
        cout<<val<<endl;
    return 0;
}
