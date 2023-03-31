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
    scoreCard.fillScoreCard();
    scoreCard.printScoreCard();

    return 0;
}
