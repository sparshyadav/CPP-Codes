// write a program for a user to reach his/her home from a source distance
#include <iostream>
using namespace std;

void reachHome(int source, int destination)
{
    if (source == destination)
    {
        cout << "Reached Home";
        return;
    }
    source++;
    reachHome(source, destination);
}

int main()
{

    int source = 1;
    int destination = 10;

    int reachHome(source, destination);

    return 0;
}