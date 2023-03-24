/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "Score_Card.h"

using namespace std;
ScoreCard::ScoreCard() {
    for (int i = 0; i < 13; i++) {
        scores[i] = -1;
    }
}

void ScoreCard::printScoreCard() {
    cout << "Yahtzee Score Card:\n";
    cout << "-------------------\n";
    cout << "1.  Ones: " << (scores[0] >= 0 ? to_string(scores[0]) : "-") << "\n";
    cout << "2.  Twos: " << (scores[1] >= 0 ? to_string(scores[1]) : "-") << "\n";
    cout << "3.  Threes: " << (scores[2] >= 0 ? to_string(scores[2]) : "-") << "\n";
    cout << "4.  Fours: " << (scores[3] >= 0 ? to_string(scores[3]) : "-") << "\n";
    cout << "5.  Fives: " << (scores[4] >= 0 ? to_string(scores[4]) : "-") << "\n";
    cout << "6.  Sixes: " << (scores[5] >= 0 ? to_string(scores[5]) : "-") << "\n";
    cout << "7.  3 of a Kind: " << (scores[6] >= 0 ? to_string(scores[6]) : "-") << "\n";
    cout << "8.  4 of a Kind: " << (scores[7] >= 0 ? to_string(scores[7]) : "-") << "\n";
    cout << "9.  Full House: " << (scores[8] >= 0 ? to_string(scores[8]) : "-") << "\n";
    cout << "10. Small Straight: " << (scores[9] >= 0 ? to_string(scores[9]) : "-") << "\n";
    cout << "11. Large Straight: " << (scores[10] >= 0 ? to_string(scores[10]) : "-") <<"\n";
    cout << "12. Yahtzee: " << (scores[11] >= 0 ? to_string(scores[11]) : "-") << "\n";
    cout << "13. Chance: " << (scores[12] >= 0 ? to_string(scores[12]) : "-") << "\n";
    cout << "-------------------\n";
    cout << "Total Score: " << getTotalScore() << "\n";
}

void ScoreCard::recordScore(int category, int score) {
    scores[category-1] = score;
}

int ScoreCard::getTotalScore() {
    int total = 0;
    for (int i = 0; i < 13; i++) {
        if (scores[i] >= 0) {
            total += scores[i];
        }
    }
    return total;
}

