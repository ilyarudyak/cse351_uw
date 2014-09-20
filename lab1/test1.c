
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    int x = -32769;
    int n = 16;
    
    int A = !(x>>31) & !(x>>(n-1));
    int B = !(~x>>31) & !(~x>>(n-1));
    
    
    
    printf("%i\n", A + B);
    
    
    
    
    

    
    return 0;
}

