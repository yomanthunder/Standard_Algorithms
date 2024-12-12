#include <bits/stdc++.h>
using namespace std;
class Queue
{
private:
    int s, e, size;
    int *arr; // dynamically alocated array

public:
    Queue(int k)
    {
        // constructor is used to initialise values at the start of the function
        arr = new int[k];
        s = 0;
        e = -1;
        size = k;
    };
    ~Queue()
    {
        delete[] arr;
    }
    int top()
    {
        if (e == -1)
            return -1;
        else if (s > e)
            return -1;
        else
            return arr[s];
    }
    void pu(int v)
    {
        if (e < size - 1)
        {
            e++;
            arr[e] = v;
        }
        else
            cout << "you are way above limit";
    }
    void po()
    {
        if (s <= e)
        {
            arr[s] = 0;
            s++;
        }
        else
            cout << "bruh , there nothing left here , pop yours if your desprate";
    }
};
// dynamically allocated space do not have member functions size();

class CircularQueue
{
private:
    int s, e;
    int *arr;
    int capacity;

public:
    CircularQueue(int k) : capacity(k)
    {
        arr = new int[capacity];
        s = -1;
        e = -1;
    }
    ~CircularQueue()
    {
        delete[] arr;
    }
    void resize()
    {
        int oldSize = (e >= s) ? e - s + 1 : capacity - s + e + 1;
        int newSize = capacity * 2;
        int *newArr = new int[newSize];

        for (int i = 0; i < oldSize; ++i)
        {
            newArr[i] = arr[(s + i) % capacity];
        }

        delete[] arr;
        arr = newArr;
        s = 0;
        e = oldSize - 1;
        capacity = newSize;
    }
    void pu(int v)
    {
        if ((e + 1) % capacity == s) resize();
        if (isEmpty()) s = 0;
        e = (e + 1) % capacity;
        arr[e] = v;
    }
    int po()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int temp = arr[s];
        if (s == e)
        {
            s = -1;
            e = -1;
        }
        else
        {
            s = (s + 1) % capacity;
        }
        return temp;
    }
    bool isEmpty()
    {
        return s == -1;
    }
    int top()
    {
        if (isEmpty()) return -1;
        return arr[s];
    }
};

// dynamic circular queue 
class DyCircularQueue{
    private:
       
    public:
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    Queue *obj = new Queue(n);
    CircularQueue *cobj = new CircularQueue(5);
    cobj->pu(5);
    cobj->pu(6);
    cobj->pu(7);
    cobj->pu(8);
    cout<<cobj->top()<<endl;
    int k = cobj->po();
    cout<<cobj->top()<<endl;
}
