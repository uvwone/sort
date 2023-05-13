#include <iostream>

using namespace std;

void bubble_sort(int *p, int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n-(i+1); j++)
        {
            if(p[j] > p[j+1]) swap(p[j], p[j+1]);
        }
    }
}

int main()
{
    int a[100]={39, 14, 51, 2, 23, 16, 85, 29, 33, 5}, n=10;
    bubble_sort(a, n);
    for(int i = 0; i<n; i++) printf("%d ", a[i]);
    return 0;
}
