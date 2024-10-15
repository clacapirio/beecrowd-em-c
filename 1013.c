#include <stdio.h>
#include <stdlib.h>

int main() {
 
    int a, b, c, result, ehmaior;
    scanf("%d%d%d", &a, &b, &c);
    result= (a+b+abs(a-b))/2;
    ehmaior= (result+c+abs(result-c))/2;
    
    printf("%d eh o maior\n", ehmaior);
 
    return 0;
}
