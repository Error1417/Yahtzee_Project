/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Score_Card.h
 * Author: error
 *
 * Created on March 23, 2023, 5:47 PM
 */

#ifndef SCORE_CARD_H
#define SCORE_CARD_H

class ScoreCard{
private:
    int scores[13];
public:
    ScoreCard();
    void printScoreCard();
    void recordScore(int category, int score); //category meaning the section
    int getTotalScore();
};

#endif /* SCORE_CARD_H */

