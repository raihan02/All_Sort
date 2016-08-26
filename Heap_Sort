#include <bits/stdc++.h>
using namespace std;
int A[1001];
void Max_Heapify(int n , int i)
{
    int largest = i;
    int l = 2 * i + 1; /// left
    int r = 2 * i + 2; /// right
    if( l < n && A[l] > A[i])
    {
        largest = l;
    }
    else
        largest = i;
    if(r < n && A[r] > A[largest])
    {
        largest = r;
    }
    if(largest != i)
    {
        swap(A[i] , A[largest]);
        Max_Heapify(n , largest);
    }
}
void heap_sort(int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        Max_Heapify(n , i);///heapify(i);

    for(int i = n - 1; i >= 0; i--)
    {
      swap(A[0] , A[i]);
       Max_Heapify(i,0);
    }
}
int main()
{
   int n;
   cin >> n;
   for(int i = 0; i < n ;i++)
    cin >> A[i];
    heap_sort(n);

    for(int i = 0; i < n; i++)
        cout<<A[i] << " ";

}
