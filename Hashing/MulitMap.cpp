#include<bits/stdc++.h>
using namespace std;

int main(){

    multimap<string, int> directory;
    directory.insert(make_pair("Sparsh", 1));
    directory.insert(make_pair("Sparsh", 1));
    directory.insert(make_pair("Shreya", 1));
    directory.insert(make_pair("Udhav", 1));

    for(auto it: directory){
        cout<<it.first<<" "<<it.second<<endl;
    }

    return 0;
}