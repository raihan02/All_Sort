#include <iostream>
using namespace std;
int A[1001];
int n;
void Insertion ()
{
    for(int j = 2; j <= n; j++)
    {
        int key = A[j];
        int i = j - 1;
        while(i > 0 and A[i] > key)
        {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = key;
    }
}
int main()
{

   cin >> n;
   for(int i = 1; i <= n; i++)
   {
       cin >> A[i];
   }
   Insertion();
   for(int i = 1; i <= n; i++)
   {
       cout<<A[i] << " ";
   }


}
