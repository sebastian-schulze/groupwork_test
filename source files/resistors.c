#define price 2
#define discount 0.95
float fctResistors(int iResistors)
{
   float fPrice;
   if (iResistors>=50) 
   {
      fPrice=iResistors*price*discount;
   }
   else
      {
         fPrice=iResistors*price;
      }
   
   return fPrice;
}
