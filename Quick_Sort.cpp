#include <iostream>
#include <algorithm>
using namespace std;
int A[1001];
int parition (int p , int r)
{
   int x = A[r];
   int i = p - 1;
   for(int j = p; j <= r - 1; j++)
   {
       if(A[j] <= x)
       {
           i = i + 1;
           swap(A[i], A[j]);
       }
   }
   swap(A[i + 1] , A[r]);
   return i + 1;
}
void quick_Sort(int p, int r)
{
    if(p < r)
    {
        int  q = parition(p,r);
        quick_Sort(p , q- 1);
        quick_Sort(q + 1, r);
    }
}
int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    quick_Sort(0, n);
    for(int i = 1; i <= n; i++)
    {
        cout<<A[i] << " ";
    }
    cout<< endl;


}
