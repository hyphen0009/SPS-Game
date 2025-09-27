#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int player, computer;
    char *choices[] = {"Stone", "Paper", "Scissors"};
    char playAgain;

    srand(time(0));

    do
    {
        printf("\nStone Paper Scissors Game\n");
        printf("1. Stone\n 2. Paper\n 3. Scissors\n");
        printf("Enter your choice (1-3): ");
        if (scanf("%d", &player) != 1)
        {

            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n')
                ;
            continue;
        }

        if (player < 1 || player > 3)
        {
            printf("Invalid choice! Please choose between 1 and 3.\n");
            continue;
        }

        computer = (rand() % 3) + 1;

        printf("You chose: %s\n", choices[player - 1]);
        printf("Computer chose: %s\n", choices[computer - 1]);

        if (player == computer)
        {
            printf("It's a draw!\n");
        }
        else if ((player == 1 && computer == 3) ||
                 (player == 2 && computer == 1) ||
                 (player == 3 && computer == 2))
        {
            printf("You win!\n");
        }
        else
        {
            printf("Computer wins!\n");
        }

        while (getchar() != '\n')
            ;

        printf("\nDo you want to play again? (Y/N): ");
        scanf("%c", &playAgain);

    } while (playAgain == 'y' || playAgain == 'y');

    printf("\nThanks for playing\n");

    return 0;
}
