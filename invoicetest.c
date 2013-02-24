#include <stdio.h>
#include <stdlib.h>
#include "./libraries/input.h"
#include "./libraries/output.h"

int main()
{
   int iRes, iCoi, iCap;
   char strFirst[50]="";
   char strLast[50]="";

   // input
   fctInput(&strFirst,&strLast,&iRes,&iCoi,&iCap);
   // calculation resistors test

   // calculation coils test

   // calculation capacitors test

   // print out
   fctOutput(iRes,iCoi,iCap);

   return 0;
}
