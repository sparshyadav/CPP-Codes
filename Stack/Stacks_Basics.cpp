#include <iostream>
#include<climits>
using namespace std;

class Stack
{
    int capacity;
    int *arr;
    int top;

public:
    Stack(int c)
    {
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push(int data)
    {
        if (this->top == this->capacity - 1)
        {
            cout<<endl;
            cout << "Stack Overflow" << endl;
            return;
        }
        this->top++;
        this->arr[this->top] = data;

    }

    void pop()
    {
        if (this->top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        this->top--;
    }

    int getTop()
    {
        if (this->top == capacity - 1)
        {
            cout << "Stack Overflow" << endl;
            return INT_MIN;
        }
        cout<<endl;
        return this->arr[this->top];
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        return 0;
    }

    bool isFull()
    {
        return this->top == capacity - 1;
    }

    int size()
    {
        cout<<endl;
        return this->top + 1;
    }

};

int main()
{

    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << st.getTop();
    st.push(5);
    cout << st.getTop();
    // st.pop();
    st.pop();
    st.pop();
    st.push(10);    
    // st.push(15); 
    int size=st.size();
    cout<<size;  
    cout<<st.getTop();

    return 0;
}