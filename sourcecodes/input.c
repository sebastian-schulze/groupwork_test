void fctInput(char *strFirstName, char *strLastName, int *iResistors, int *iCoils, int *iCapacitors)
{
   printf("\n\nDear Costumer,\nYou are in the Electronic Devices Online Shop.\n");
   printf("\nPlease insert your first name:\t");
   scanf("%s", strFirstName);
   __fpurge(stdin);
   printf("Your first name is:\t\t%s\n",strFirstName);
   printf("\nPlease insert your last name:\t");
   scanf("%s", strLastName);
   __fpurge(stdin);
   printf("Your last name is:\t\t%s\n",strLastName);

   printf("\nDear %s %s,\nPlease choose the amount of devices,"
      " you would like to order in the following.\n",strFirstName,strLastName);

   printf("\nHow many resistors would you like to order:\t");
   scanf("%hi",&*iResistors);
   __fpurge(stdin);

   printf("\nHow many coils would you like to order:\t\t");
   scanf("%hi",&*iCoils);
   __fpurge(stdin);

   printf("\nHow many capacitors would you like to order:\t");
   scanf("%hi",&*iCapacitors);
   __fpurge(stdin);
   return 0
}
