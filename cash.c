#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    //Project Guidlelines
    // 1. Ask user how much change is owned
    // 2. Print the minimum number of coins that can be used.
    float value;
  
    do {
   value = get_float("Enter amount of change owed");
    } while(value <= 0);
    
    
    int change = change %25 ;
    //Set integer value for coins
    int coins, count;
  
    
    //Confirm amount of change owed and represent with 2 decimal places
    printf("Change owed %.2f", value);
    
    coins = (change/25);
    change = (change - (coins * 25));
    count = coins;
    coins = 0;
    
    coins = (change/10);
    change = (change - (coins * 10));
    count += coins;
    coins = 0;
    
    coins = (change/05);
    change = (change - (coins * 05));
    count += coins;
    coins = 0;
    
    coins = (change/01);
    change = (change - (coins * 01));
    count += coins;
    coins = 0;
    
    printf("%i\n", count);
    printf("\n");
