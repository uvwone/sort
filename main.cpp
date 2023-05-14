#include <iostream>
#include <algorithm>

using namespace std;

void select1(int *p, int n, int k)
{
    for(int i = 0; i < k; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(p[i] > p[j]) swap(p[i], p[j]);
        }
    }
}

int main()
{
    int a[100],n,k;  cin >> n >> k;
    for(int i=0; i<n; i++) cin >> a[i];

    select1(a, n, k);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}
