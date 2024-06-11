#include <bits/stdc++.h>
using namespace std;

class MaxHeap
{
    int *arr;
    int size;
    int totalSize;

public:
    MaxHeap(int n)
    {
        arr = new int[n];
        size = 0;
        totalSize = n;
    }

    void insert(int val)
    {
        if (size == totalSize)
        {
            cout << "Heal Overflow" << endl;
            return;
        }

        arr[size] = val;
        int idx = size;
        size++;

        while (idx > 0 && arr[(idx - 1) / 2] < arr[idx])
        {
            swap(arr[idx], arr[(idx - 1) / 2]);
            idx = (idx - 1) / 2;
        }

        cout << arr[idx] << " is Inserted" << endl;
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    void heapify(int idx)
    {
        int largest = idx;
        int left = 2 * idx + 1;
        int right = 2 * idx + 2;

        if (left < size && arr[left] > arr[largest])
        {
            largest = left;
        }

        if (right < size && arr[right] > arr[largest])
        {
            largest = right;
        }

        if (largest != idx)
        {
            swap(arr[idx], arr[largest]);
            heapify(largest);
        }
    }

    void Delete()
    {
        if (size == 0)
        {
            cout << "Heap Underflow" << endl;
            return;
        }

        cout << arr[0] << " deleted from the heap" << endl;
        arr[0] = arr[size - 1];
        size--;

        if (size == 0)
        {
            return;
        }

        heapify(0);
    }
};

int main()
{

    MaxHeap m(6);
    m.insert(5);
    m.insert(3);
    m.insert(7);
    m.insert(9);
    m.insert(5);
    m.insert(79);

    m.print();
    m.Delete();
    m.print();

    return 0;
}