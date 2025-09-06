#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// Global variables all 
float oversToPlay;
char teamName[50];
int run=0; //indivisul ball score
int runs = 0;
int wickets = 11;
int extras = 0;     
int ballsBowled=0;

// Scorecard function
void Scorecard() {
    int completedOvers = ballsBowled / 6;
    int ballsInCurrentOver = ballsBowled % 6;
    printf("\n=====================================\n");
    printf("|         CRICKET SCOREBOARD        |\n");
    printf("=====================================\n");
    printf("| Team   : %-28s |\n", teamName);
    printf("| Score  : %3d/%d                       \n", runs, (11-wickets));
    printf("| Overs  : %d.%d                        \n", completedOvers, ballsInCurrentOver);
    printf("| Extras : %3d                          \n", extras);
    printf("=====================================\n\n");
}


void updateScore(int run){
    runs+=run;
}
void updateWickets(){
    wickets--;
    
}

void Inputs() {
    printf("Enter the number of overs to be played: ");
    scanf("%f", &oversToPlay);  // no \n needed in scanf
    if (oversToPlay <= 0) {
        printf("Invalid input! Number of overs must be positive.\n");
        Inputs();  // ask again
    } else {
        printf("Match will be played for %f overs.\n", oversToPlay);
    }
    printf("Enter the team batting: ");
    scanf("%s",&teamName);
    
}
