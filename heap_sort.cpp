#include <iostream>
#include <algorithm>
using namespace std;

//=====================

int H[10000], sz=0;


void Push(int k)
{
    H[++sz] = k;
    for(int me=sz,par=me/2; par>=1; me=par,par/=2)
    {
       if(H[me] < H[par]) break;
       swap(H[me], H[par]);
    }
}

void Pop()
{
    H[1] = H[sz--];
    for(int me=1,cld=me*2; cld<=sz; me=cld,cld*=2)
    {
        if(cld+1 <= sz && H[cld] < H[cld+1]) cld++;
       if(H[me] > H[cld]) break;
       swap(H[me],H[cld]);
    }
}

int Top()
{
    return H[1];
}

int Size()
{
    return sz;
}

int main()
{
    int a[100]={39, 14, 51, 2, 23, 16, 85, 29, 33, 5}, n=10;
    for(int i = 0; i<n; i++) Push(-a[i]);

    while(Size() > 0)
    {
       cout << -Top() << ' ';
       Pop();
    }
    return 0;
}
