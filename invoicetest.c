#include <stdio.h>
#include <stdlib.h>

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
