#include <iostream>
#define inf 1 << 30
using namespace std;
int A[1001];
int n;
void merges(int p , int q, int r)
{
    int n1=  q -p + 1;
    int n2 = r - q;
    int L[n1 + 1] , R[n2 + 1];
    for(int i = 1; i <= n1; i++)
    {
        L[i] = A[p + i - 1];
    }
    for(int j = 1; j <= n2; j++)
    {
        R[j] = A[q + j];
    }
    L[n1 + 1] = inf;
    R[n2 + 1] = inf;
    int i = 1, j = 1;
    for(int k = p; k <= r; k++)
    {
        if(L[i] <= R[j])
        {
            A[k] = L[i];
            i = i + 1;
        }
        else
        {
            A[k] = R[j];
            j = j + 1;
        }
    }
}
void mergesort(int p , int r)
{
    if(p < r)
    {
        int q = ((p + r) / 2);
        mergesort(p , q);
        mergesort(q + 1,  r);
        merges(p , q, r);
    }
}
int main()
{

   cin >> n;
   for(int i = 1; i <= n; i++)
   {
       cin >> A[i];
   }
   mergesort(1 , n);
  for(int i = 1; i <= n; i++)
    cout<<A[i] << " ";


}
