#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int levels;
    do {
    printf("Enter an integer between 0 and 23\n");
    levels = GetInt();
    } while (levels < 0 || levels > 23);
    
    int space = levels-1;
    int hash = 2;
    
    for(int j = 0; j < levels; j++){
        for(int i = 0; i < space; i++){
            printf(" ");    
        }
        for(int i = 0; i < hash; i++){
            printf("#");    
        }
        printf("\n");
        space = space - 1;
        hash = hash + 1;
    }
    
}
