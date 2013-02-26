#include "./header files/input.h"
#include "./header files/output.h"
#include "./header files/resistors.h"

int main()
{
   int iRes, iCoi, iCap, iLed;
   float fResPrice, fCoiPrice, fCapPrice, fLedPrice;

   // input
   fctInput(&iRes,&iCoi,&iCap,&iLed);
   
   // calculation resistors
   fResPrice=fctResistors(iRes);
   
   // calculation coils

   
   // calculation capacitors

   
   // calculation LEDs


   // print out
   fctOutput(fResPrice,iCoi,iCap,iLed);

   return 0;
}
