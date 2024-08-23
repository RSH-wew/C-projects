#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//factorial using for loop 
int main() {

    srand(time(0));
    int guessed;
    int no_of_guesses = 0;
    int n;
    int randnum;
    printf("LETS START!!!\n");
    printf("enter the higher value -> ");
    scanf("%d", &n);
    randnum = rand() % n;

    
    while(guessed!=randnum){
        printf("enter your guess -> ");
        scanf("%d", &guessed);
        no_of_guesses++;
        if (guessed == randnum){
            printf("your guess is right..>\n");
            break;
        } else if(guessed > randnum){
            printf("your guess is higher...\n");
            continue;
        } else {
            printf("your guess is lower...\n");
            continue;
        }
        
    }
    printf("u guessed the number in %d guesses\n", no_of_guesses);
    

    

    return 0;
}
    

