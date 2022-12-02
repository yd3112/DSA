#include <iostream>
using namespace std;

int max_profit(int a[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            profit += (a[i] - a[i - 1]);
        }
    }
    return profit;
}

int main(){
    int a[] = {1,5,6,4,3,9};
    cout << max_profit(a , 6) << "\n";
}