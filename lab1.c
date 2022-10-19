#include <stdio.h>
#include <math.h>

int main()
{
 int  a, b, c, d, e, f, g, h; 
 double del;
    printf("Enter a -> ");
    scanf("%d", &a);
    printf("Enter b -> ");
    scanf("%d", &b);
    
    c = a / 100 % 10;
    d = a / 10 % 10;
    e = a % 10;
    f = b / 100 % 10;
    g = b / 10 % 10;
    h = b % 10;
    if (c + d + e > f + g + h)
        del = (float)(f + g + h) / b;
    else 
        del = (float)(c + d + e) / b;
    
    
   printf("%lf", del);
}
