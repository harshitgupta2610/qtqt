#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand()%100 + 1;
    do{
    
        printf("guess the number between 1 to 100 \n");
        scanf("%d", &guess);
        if (guess > number)
        {
        
            printf("Lower the number please\n");
        }
        else if (guess < number) {printf("HIgher the number please\n ");
        }
        else {
       
           printf("you guessed it right in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number);

    return 0;
   
}
