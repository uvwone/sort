#include <iostream>
#include <algorithm>

using namespace std;

void select_sort1(int *p, int n)
{
    for(int i = 0; i<n; i++)
    {
        int* q = min_element(p+i,p+n);
        swap(p[i], *q);
    }
}

int main()
{
    int a[100]={39, 14, 51, 2, 23, 16, 85, 29, 33, 5}, n=10;
    select_sort1(a, n);
    for(int i = 0; i<n; i++) printf("%d ", a[i]);
    return 0;
}
