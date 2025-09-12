#include <stdio.h>

char board[3][3]; // grid

//initialize the board
void InitBoard() {
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            board[i][j] = ' ';
}

// display the board
void DisplayBoard() {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}


int CheckWin() {
    int i;
    // Rows and Columns
    for (i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] &&
            board[i][1] == board[i][2] &&
            board[i][0] != ' ')
            return 1;
        if (board[0][i] == board[1][i] &&
            board[1][i] == board[2][i] &&
            board[0][i] != ' ')
            return 1;
    }
    // Diagonals
    if (board[0][0] == board[1][1] &&
        board[1][1] == board[2][2] &&
        board[0][0] != ' ')
        return 1;
    if (board[0][2] == board[1][1] &&
        board[1][1] == board[2][0] &&
        board[0][2] != ' ')
        return 1;

    return 0;
}


int CheckDraw() {
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return 0;
    return 1;
}

// Function to make a move
void MakeMove(char symbol) {
    int row, col;
    while (1) {
        printf("Enter row and column (0-2) for %c: ", symbol);
        scanf("%d %d", &row, &col);
        if (row >= 0 && row < 3 && col >= 0 && col < 3) {
            if (board[row][col] == ' ') {
                board[row][col] = symbol;
                break;
            } else {
                printf("Cell already taken. Try again.\n");
            }
        } else {
            printf("Invalid input. Try again.\n");
        }
    }
}

int main() {
    int turn = 0;
    char player;

    InitBoard();

    printf("\n====== X-O Game ======\n");
    DisplayBoard();

    while (1) {
        player = (turn % 2 == 0) ? 'X' : 'O';
        MakeMove(player);
        DisplayBoard();

        if (CheckWin()) {
            printf("Player %c wins!\n", player);
            break;
        }

        if (CheckDraw()) {
            printf("Game is a draw!\n");
            break;
        }

        turn++;
    }

    return 0;
}