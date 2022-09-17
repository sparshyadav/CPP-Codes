#include <utility>

pair<int, int> swap(pair<int, int> swapValues)
{
    int c = swapValues.first;
    swapValues.first = swapValues.second;
    swapValues.second = c;
    return swapValues;
}