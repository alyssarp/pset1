#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change_needed;
    do {
    printf("How much change is owed?\n");
    change_needed = GetFloat();
    } while (change_needed < 0);
    
    int change = (int) roundf(change_needed*100);
    
    int coins = 0;
    
    if (change > 0){
        if (change >= 25){
            coins = change / 25;
            change = change % 25;
        }
        if (change >= 10){
            coins = coins + change / 10;
            change = change % 10;
        }
        if (change >=5){
            coins = coins + change / 5;
            change = change % 5;
        }
        if (change >= 1) {
            coins = coins + change;
        }
    }
    printf("%d\n", coins);

}
