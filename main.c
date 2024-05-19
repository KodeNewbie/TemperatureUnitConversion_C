#include <stdio.h>

int  main()
{
    char unit;
    double inputTemp;
    double C;
    double F;
    double K;

    printf("\nSelect the input Unit ( C, F, K ) : ");
    scanf(" %c", &unit);

    printf("Unit selected : %c", unit);

    printf("\nEnter the temperature : ");
    scanf("%lf", &inputTemp);

    switch (unit)
    {
    case 'C':
        C = inputTemp;
        F = (C * (9.0/5.0)) + 32;
        K = C + 273.15;
        break;
    
    case 'F':
        F = inputTemp;
        C = (F-32)*(5.0/9.0);
        K = C + 273.15;
        break;
    
    case 'K':
        K = inputTemp;
        C = K-273.15;
        F = (C*(9.0/5.0))+32;
        break;
    
    default:
        printf("\nError: Wrong Unit input");
        break;
    }

    printf ("\nC = %.2lf\nF = %.2lf\nK = %.2lf",C,F,K);
    return 0;
}