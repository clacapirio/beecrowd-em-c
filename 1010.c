#include <stdio.h>
 
int main() {
 
    int cod1, qtd1, cod2, qtd2;
    double pre1, pre2, total;
    
    scanf("%d%d%lf" , &cod1, &qtd1, &pre1);
    scanf("%d%d%lf" , &cod2, &qtd2, &pre2);
    
    total = qtd1*pre1 + qtd2*pre2;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}
