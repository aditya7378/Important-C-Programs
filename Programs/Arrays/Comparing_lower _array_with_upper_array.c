/* 

i/p = 
4
aba
baba
aba
xzxb
3
aba
xzxb
ab


o/p = 
2
1
0

*/


#include<stdio.h>
#include<string.h>
int main()
{
    int n , m ;
    char arr[100][100];
    char prr[100][100];
    int store[100];
    scanf("%d", &n);
    
  
    // Initialization of 2-D char array
    for (int i = 0; i < n; i++)
        scanf("%s", arr[i]);
        
    scanf("%d", &m);
    
    
    for (int i = 0; i < m; i++)
        scanf("%s", prr[i]);
        
    for(int j=0; j<m; j++)
    {
        int count=0;
        for(int i=0; i<n; i++)
        {
            if(strcmp(prr[j],arr[i]) ==0)
            {
                count++;
            }
            
        }
        store[j] = count;
    }
    for(int i = 0 ; i<m; i++)
    {
        printf("%d\n", store[i]);
    }
}