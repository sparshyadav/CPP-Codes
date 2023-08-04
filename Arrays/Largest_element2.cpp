#include <iostream>
using namespace std;

int main()
{


    int a[10]={1,2,3,4,5,6,7,8};
    int p=(a+1)[5];
    cout<<p;

    // int arr[10] = {
    //     2,
    //     5,
    //     3,
    //     6,
    //     7,
    //     4,
    //     1,
    //     10,
    //     8,
    //     9,
    // };

    // char str[5]={"abc"};
    // cout<<str;
    // int max = arr[0];
    // for (int i = 1; i < 10; i++)
    // {
    //     if (arr[i] > max)
    //     {
    //         max = arr[i];
    //     }
    //     cout << max;
    // }
    return 0;
}



//   int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for (int i=0;i<n;i++){
//         sum =sum+arr[i];
//     }
//     cout<<sum;   



//     //Write your code here
//      for (int i=0;i<n;i++){
//         if (arr[i]==x){
//             return i;
//         }
//     }
//     return -1;