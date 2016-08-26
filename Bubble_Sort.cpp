#include <iostream>
using namespace std;
#include <algorithm>
int A[1001];
int n;
void bubble_sort()
{
    for(int i = 1; i <= n - 1; i++)
    {
        for(int j = n; j >= i + 1; j--)
        {
            if(A[j] < A[j - 1])
            {
                swap(A[j], A[j - 1]);
            }
        }
    }
}
int main()
{

   cin >> n;
   for(int i = 1; i <= n; i++)
   {
       cin >> A[i];
   }
   bubble_sort();
   for(int i = 1; i <= n; i++)
   {
       cout<<A[i] << " ";
   }

}
