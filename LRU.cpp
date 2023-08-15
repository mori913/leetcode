#include <stdc++.h>
using namespace std;

class LRU
{
private:
    int size;
    list<int> cache;
    unordered_map<int, list<int>::iterator> map;
public:
    LRU(int size);
    ~LRU();
    int fetch(int addr);
};

LRU::LRU(int size){
    this->size = size;
}
LRU::~LRU()
{
}

int LRU::fetch(int addr){
    if(map.count(addr)){
        int value = *map[addr];
        cache.erase(map[addr]);
        cache.push_front(value);
        map[addr] = cache.begin();
    }
    else{
        
    }
}

int main()
{

    return 0;
}