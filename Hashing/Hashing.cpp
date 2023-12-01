#include <bits/stdc++.h>
using namespace std;

class Hashing{
    vector<list<int>> hashtable;
    int buckets;

    Hashing(int size){
        buckets=size;
        hashtable.resize(size);
    }

    int hashvalue(int key){
        return key%buckets;
    }

    int add(int key){
        int idx=hashvalue(key);
        hashtable[idx].push_back(key);
    }
};

int main()
{

    return 0;
}