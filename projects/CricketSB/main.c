#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Making a cricket scoreboard code. 
*/

#include "fns.h"

int main() {
    Inputs();
    int choice, run;
    int totalBalls = (int)oversToPlay * 6;
    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Add runs\n");
        printf("2. Add wicket\n");
        printf("3. Add extras\n");
        printf("4. Display Scorecard\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter runs scored on this ball: ");
                scanf("%d", &run);
                if (run >= 0 && run <= 6) {
                    updateScore(run);
                    ballsBowled++;
                } else {
                    printf("Invalid run! Enter 0-6.\n");
                }
                break;
            case 2:
                updateWickets();
                ballsBowled++;
                break;
            case 3:
                printf("Enter extra runs: ");
                scanf("%d", &run);
                extras += run;
                ballsBowled++;
                break;
            case 4:
                Scorecard();
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
        // Check if overs completed
        if (ballsBowled >= totalBalls) {
            printf("All overs completed! Innings over.\n");
            Scorecard();
            break;
        }
        // Check if all wickets fallen
        if (wickets == 1) {
            Scorecard();
            break;
        }
    }
    return 0;
}