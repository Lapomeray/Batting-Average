/* Created by: Brandon Lapomeray */

#include <stdio.h>

/*
 * This program reads in the number of times at bat,
 * and the number of hits for nine(9) players.
 * Then it calculates the batting average for each player
 *
 * Input  - Number of times at bat for nine(9) players, Number of hits for nine(9) players.
 * Output -
 */


int main() {


    float playerAtBats;
    float playerHits;
    float playerBattingAverage;
    int playerNumber = 1;

    /* While loop that asks for the player's at bat count and hits. Then calculates their batting average  */
    while (playerNumber < 10) {

        /*Asks the user for the player's at bat count  */
        printf("What is Player %d's at bat count? ", playerNumber);
        scanf("%f", &playerAtBats);

        /*Asks the user for the player's hit count  */
        printf("What is player %d's Hit count? ", playerNumber);
        scanf("%f", &playerHits);


        /* Output the player's at bat count and hit count */
        printf("Player %d's at bat count is %f \n", playerNumber, playerAtBats);
        printf("Player %d's hit count is %f \n", playerNumber, playerHits);

        /* Calculates and outputs the players batting average */
        playerBattingAverage = playerHits/playerAtBats;
        printf("Player %d's batting average is %f \n \n", playerNumber, playerBattingAverage);


        /*Changes the player's number*/
        playerNumber++;

    }


    return 0;
}