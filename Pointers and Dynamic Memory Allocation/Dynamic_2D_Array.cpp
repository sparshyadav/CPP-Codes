#include <iostream>
using namespace std;

int main()
{

    // int n;
    // cin>>n;

    // array with n rows and n columns
    // int**arr =new int*[n];
    // for(int i=0; i<n;i++){
    //     arr[i]=new int[n];
    // }
    // dynamically 2D array created

    // array with n rows and m columns
    int rows;
    cin >> rows;

    int cols;
    cin >> cols;

    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}