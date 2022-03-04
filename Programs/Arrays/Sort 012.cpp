#include <iostream>
using namespace std;
int main()
{
    int a[] = {0, 2, 2, 1, 0, 1, 1, 0, 2};
    int n = 9;
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[low++], a[mid++]);
            break;

        case 1:
            mid++;
            break;

        case 2:
            swap(a[mid], a[high--]);
            break;
        }
    }

    for (auto it : a)
    {
        cout << it << " ";
    }
}