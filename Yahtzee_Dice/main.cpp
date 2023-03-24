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
#include "Dice.h"

using namespace std;

const int NUM_ROLLS = 3;
const int NUM_DICE = 5;

//main
int main() {
    Dice dice[NUM_DICE];// dice object

    
    //Individual dice roll
    dice[0].roll(); // rolls the dice
    cout << dice[0].getValue() << " "; // gets the value
    cout << endl;
    
    //loop for all five dice
    for (int i = 0; i < NUM_ROLLS; i++) {
        for (int j = 0; j < NUM_DICE; j++) {
            dice[j].roll();
            cout << dice[j].getValue() << " ";
        }
        cout << endl;
    }
    return 0;
}
