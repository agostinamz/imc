
#include <stdio.h>

int main() {
    float peso, altura, imc;
    
    do {
    printf("Ingrese su peso en kg: ");
    scanf("%f", &peso);
    if (peso <= 0)
    printf ("El peso debe ser un número positivo.\n");
    } while (peso <= 0);
    
    do {
    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);
    if (altura <= 0)
    printf ("La altura debe ser un número positivo.\n");
    } while (altura <= 0);

    imc= peso/(altura*altura);

    printf("\nSu índice de masa corporal es: %.2f\n\n",imc);
    printf("Índice\t\t| Condición\n");
    printf("---------------------------\n");
    printf("<18.5\t\t| Bajo peso\n");
    printf("18.5 - 24.9\t| Normal\n");
    printf("25.0 - 29.9\t| Sobrepeso\n");
    printf(">=30\t\t| Obesidad\n");
    
printf("\nCondicion actual: ");
    if (imc < 18.5)
    printf("Bajo peso\n");
    else if (imc < 25)
    printf ("Normal\n");
    else if (imc < 30)
    printf ("Sobrepeso\n");
    else
    printf("Obesidad\n");
    
    return 0;
}
