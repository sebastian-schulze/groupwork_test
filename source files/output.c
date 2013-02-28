#include <stdio.h>
void fctOutput(float fRes, float fCoi, float fCap, float fLed)
{
   printf("Dear Customer,\nYou pay EUR %.2f for resistors, EUR %.2f for coils, EUR %.2f for capacitors and EUR for %.2f Led's\n"
      ,fRes,fCoi,fCap,fLed);
}
