#include <cs50.h>
#include <stdio.h>
int calculate_quarters(int cents);
int calculate_dime(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);
int main(void)

{
    int cents;
    do
    {
        cents = get_int("change owed: ");
    }
    while (cents < 0);
     int quarters = calculate_quarters(cents);
     cents = cents- (quarters * 25);

      int dime = calculate_dime(cents);
      cents = cents - (dime * 10);

       int nickels = calculate_nickels(cents);
       cents = cents - (nickels * 5);

        int pennies = calculate_pennies(cents);
        cents = cents - (pennies * 1);

   int total = quarters + dime + nickels + pennies;
   printf("%i\n", total);

}



int calculate_quarters(int cents)
{ int quarters;
    for(quarters=0; cents>=25; quarters++)
{ cents = cents-25;
}
  return quarters;
}


int calculate_dime(int cents)
{ int dime;
    for(dime=0; cents>=10; dime++)
{ cents = cents-10;
}
  return dime;
}

int calculate_nickels(int cents)
{ int nickels;
    for(nickels=0; cents>=5; nickels++)
{ cents = cents-5;
}
  return nickels;
}


int calculate_pennies(int cents)
{ int pennies;
    for(pennies=0; cents>=1; pennies++)
{ cents = cents-1;
}
  return pennies;
}

