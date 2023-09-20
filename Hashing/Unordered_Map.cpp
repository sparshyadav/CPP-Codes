#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<string, int> record;
    record.insert(make_pair("Sparsh", 1383));
    record.insert(make_pair("Shreya", 1421));
    record.insert(make_pair("Udhav", 1472));

    for(auto it: record){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}