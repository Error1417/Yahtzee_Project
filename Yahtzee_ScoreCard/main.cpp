/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Ismael
 *
 * Created on March 23, 2023, 4:46 PM
 */


#include <iostream>
#include "Score_Card.h"

using namespace std;
int main() {
    ScoreCard scoreCard;

    // Didnt add the dice class to this since its just testing

    // Test recording scores and printing the score card
    scoreCard.recordScore(1, 5);
    scoreCard.recordScore(3, 15);
    scoreCard.recordScore(5, 25);
    scoreCard.recordScore(7, 20);
    scoreCard.recordScore(9, 25);
    scoreCard.recordScore(11, 40);
    scoreCard.recordScore(13, 18);
    scoreCard.printScoreCard();

    return 0;
}
