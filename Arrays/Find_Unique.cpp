#include <iostream>
using namespace std;

int unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i]; 
        // Here (^) is the XOR operator which gives 0 when both the inputs are same.
    }
    return ans;
}

int main()
{

    int arr[9] = {1, 2, 3, 1, 2, 3, 4, 5, 4};
    cout << "The Unique Number is: " << unique(arr, 9);
    return 0;
}