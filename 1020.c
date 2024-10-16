#include <stdio.h>
#include <math.h> 

int main() {
    int dias, anos, meses, dias_restantes;

    scanf("%d", &dias);

    anos = floor(dias / 365.0);
    dias_restantes = dias - floor(anos * 365);
    meses = floor(dias_restantes / 30.0);
    dias_restantes = dias_restantes - floor(meses * 30);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias_restantes);

    return 0;
}
