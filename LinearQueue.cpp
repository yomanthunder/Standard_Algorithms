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
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    Queue *obj = new Queue(n);
    cout << obj->top() << " " << endl;
    obj->pu(5);
    obj->pu(6);
    obj->pu(8);
    cout << obj->top() << " " << endl;
    obj->po();
    cout << obj->top() << " " << endl;
    obj->po();
    cout << obj->top() << " " << endl;
    obj->po();
    obj->po();
}
