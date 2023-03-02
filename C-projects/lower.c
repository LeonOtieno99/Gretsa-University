#include <stdio.h>

int lower(int c)
{
    if(c >= 'A' && c <='z')
        return c + 'a' - 'A';
    else
        return c;
}
int main(){

   lower();
}