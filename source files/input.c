#include <stdio.h>
#include <stdlib.h>
void fctInput(int *iResistors, int *iCoils, int *iCapacitors, int *iLeds)
{
   printf("\nHow many resistors would you like to order:\t");
   scanf("%d",&*iResistors);
   __fpurge(stdin);

   printf("\nHow many coils would you like to order:\t\t");
   scanf("%d",&*iCoils);
   __fpurge(stdin);

   printf("\nHow many capacitors would you like to order:\t");
   scanf("%d",&*iCapacitors);
   __fpurge(stdin);

   printf("\nHow many LEDs would you like to order:\t\t");
   scanf("%d",&*iLeds);
   __fpurge(stdin);
}
