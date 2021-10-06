//Understanding Prefix and Postflix with an Example
#include<stdio.h>
int main()
{
    int x = 10;
    int y = x++;// Here first y=x gets execute and then x=x++ gets performed.Now y=10&x=11
    int z = ++x;// Here first x=x++ (ie now x become 12) gets execute and then z=x get performed. Now z=12&x=12
    printf("%d\n%d\n%d", x,y,z);// Output is x=12 y=10 z=12
}
