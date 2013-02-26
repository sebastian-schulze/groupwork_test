#include <stdio.h>
void fctOutput(float fRes, int iCoils, int iCapacitors, int iLeds)
{
   printf("Dear Customer,\nYou pay EUR %.2f for resistors, %d coils, %d capacitors and %d Led's\n"
      ,fRes,iCoils,iCapacitors,iLeds);
}
