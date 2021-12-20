/* 
Pattern 


      1 
    2 5 
  3 6 8 
4 7 9 10 

*/





#include <iostream>
using namespace std;

int main() {
  int i , j , n ;
  cin >> n;
  for ( i=1 ; i<=n ; i++ )
  {
    int diff = n-1;
    int value = i;
    for ( j=1 ; j<=n ; j++)
    {
      if(j >= n+1-i)
      {
        cout << value << " ";
        value += diff;
        diff--;
      }

      else
      {
        cout << "  ";
      }
      
    }
    cout << endl;
  }

} 