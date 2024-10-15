#include <stdio.h>
 
int main() {
 
    int num, hora;
    double vhora, salario;
    scanf("%d%d%lf%lf", &num, &hora, &vhora, &salario);
    salario= vhora*hora;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num, salario);
 
    return 0;
}
