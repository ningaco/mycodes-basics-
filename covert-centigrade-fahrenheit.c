//The program for to covert centigrade to fahrenheit.
#include <stdio.h>
 main() 
{
    int centigrade;
    float fahrenheit;
    printf("Enter the temperature in centigrade: ");
    scanf("%d", &centigrade);
    fahrenheit = (centigrade * 1.8f) + 32;
    printf("Centigrade: %d\n", centigrade);
    printf("Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}
