#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Heap//priority_queue
{
    vector<int> H;
    int sz;

public:
    Heap() { H.resize(1); sz = 0; }

    void push(int k)
    {
        H.push_back(k);  sz++;
        for(int me = sz, par = me/2; par >= 1; me = par, par /= 2)
        {
            if(H[me] < H[par]) break;
            swap(H[me], H[par]);
        }
    }

    void pop()
    {
        H[1] = H.back();
        H.pop_back(); sz--;
        for(int me = 1, cld = me*2; cld <= sz; me = cld, cld *= 2)
        {
            if(cld + 1 <= sz && H[cld] < H[cld+1]) cld++;
            if(H[me] > H[cld]) break;
            swap(H[me], H[cld]);
        }
    }

    int top()
    {
        return H[1];
    }

    int size()
    {
        return sz;
    }
};

int main()
{
    int a[1000] = {39, 14, 51, 2, 23, 16, 85, 29, 33, 5}, n = 10;
    Heap hh;


    for(int i = 0; i < n; i++) hh.push(-a[i]);

    while(hh.size() > 0)
    {
        cout << -hh.top() << ' ';
        hh.pop();
    }
    return 0;
}
