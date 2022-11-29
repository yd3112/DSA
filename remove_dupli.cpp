#include <bits/stdc++.h>
using namespace std;

int remove(int a[], int n)
{
    int index = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            if (a[index - 1] != a[i + 1])
            {
                swap(a[i + 1], a[index]);
                index++;
            }
        }
    }
    return index;
}

int main(){
    int a[] = {10, 20,20,30,30,30};
    int res = remove(a , 6);
    for(int i = 0; i < res; i++){
        cout << a[i] << " ";
    }
    return 0;
}