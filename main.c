#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int roll;
    char player, computer, result;

    if (strlen(argv[1]) > 1)
    {
        printf("Your choice can only be r: rock, p: paper or s: scissor\n");
        return EXIT_FAILURE;
    }

    player = argv[1][0];

    // if (player != 'r' || player != 'p' || player != 's')
    // {
    //     printf("Your choice can only be r: rock, p: paper or s: scissor\n");
    //     return EXIT_FAILURE;
    // }
    srand(time(NULL));
    roll = rand() % 100;

    if (roll > 0 && roll <= 33)
    {
        computer = 'r';
    }
    else if (roll > 33 && roll <= 66)
    {
        computer = 'p';
    }
    else if (roll > 66 && computer <= 100)
    {
        computer = 's';
    }

    if (player == 'r')
    {
        if (computer == 'r')
        {
            printf("Draw\n");
            return EXIT_SUCCESS;
        }
        else if (computer == 'p')
        {
            printf("You lose\n");
            return EXIT_SUCCESS;
        }
        else if (computer == 's')
        {
            printf("You win\n");
            return EXIT_SUCCESS;
        }
    }
    else if (player == 'p')
    {
        if (computer == 'r')
        {
            printf("You win\n");
            return EXIT_SUCCESS;
        }
        else if (computer == 'p')
        {
            printf("Draw\n");
            return EXIT_SUCCESS;
        }
        else if (computer == 's')
        {
            printf("You lose\n");
            return EXIT_SUCCESS;
        }
    }
    else if (player == 's')
    {
        if (computer == 'r')
        {
            printf("You lose\n");
            return EXIT_SUCCESS;
        }
        else if (computer == 'p')
        {
            printf("You win\n");
            return EXIT_SUCCESS;
        }
        else if (computer == 's')
        {
            printf("Draw\n");
            return EXIT_SUCCESS;
        }
    }

    return EXIT_SUCCESS;
}
