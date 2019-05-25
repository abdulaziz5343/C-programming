#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    char again;
    int wins, losses;
    wins = losses = 0;

    srand((unsigned) time(NULL));

    do
    {
        again = 0;

        if (play_game() == true)
        {
            printf("\nYou win!\n");
            wins++;
        }
        else
        {
            printf("\nYou lose!\n");
            losses++;
        }

        for (;;)
        {
            if (again != '\n')
            {
                printf("\nPlay again? ");
                if (again != 0) printf("(y/n) ");
            }
            again = toupper(getchar());

            if (again == 'Y' || again == 'N')
                break;
        }
    } while (toupper(again) == 'Y');

    printf("Wins: %d  Losses: %d\n\n", wins, losses);

    return 0;
}

int roll_dice(void)
{
    int roll1, roll2;

    roll1 = rand() % 6 + 1;
    roll2 = rand() % 6 + 1;

    return roll1 + roll2;
}

bool play_game(void)
{
    int roll, point;
    point = 0;

    for (;;)
    {
        /* while (getchar() != '\n'); */
        roll = roll_dice();

        printf("\nYou rolled: %d", roll);

        if (point == 0)
        {
            if (roll == 7 || roll == 11)
                return true;
            else if (roll == 2 || roll == 3 || roll == 12)
                return false;
            else
            {
                point = roll;
                printf("\nYour point is %d", point);
                continue;
            }
        }
        else if (roll == point)
            return true;
        else if (roll == 7)
            return false;
        else continue;
    }
}
