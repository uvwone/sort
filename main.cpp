#include <iostream>

using namespace std;

void select_sort2(int *p, int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(p[i] > p[j]) swap(p[i], p[j]);
        }
    }
}

int main()
{
    int a[100]={39, 14, 51, 2, 23, 16, 85, 29, 33, 5}, n=10;
    select_sort2(a, n);
    for(int i = 0; i<n; i++) printf("%d ", a[i]);
    return 0;
}
