#include <iostream>
#include <string>
#include "Player.h"
#include "Map.h"
using namespace std;

Player::Player() {
    name = "";
    first = {6, 0, false, false};
    second = {6, 0, false, false};
    third = {6, 0, false, false};
}

Player::Player(string name, int first1, int first2, int second1, int second2, int third1, int third2) {
    this->name = name;
    first = {first1, first2, false, false};
    second = {second1, second2, false, false};
    third = {third1, third2, false, false};
}

string Player::getName() {
    return name;
}

void Player::setName(string name) {
    this->name = name;
}

int Player::getFirstRow() {
    return first.row;
}

int Player::getFirstCol() {
    return first.column;
}

int Player::getSecondRow() {
    return second.row;
}

int Player::getSecondCol() {
    return second.column;
}

int Player::getThirdRow() {
    return third.row;
}

int Player::getThirdCol() {
    return third.column;
}

void Player::moveMal(int malNum, int moveNum, Map &playerMap) {
    if (malNum == 1){
        int previRow = first.row;
        int previCol = first.column;
        int* newRC = newRowCol(first, moveNum);
        playerMap.UpdatePlayerLocation(previRow, previCol, newRC[0], newRC[1]);
    } else if (malNum == 2){
        int previRow = second.row;
        int previCol = second.column;
        int* newRC = newRowCol(second, moveNum);
        playerMap.UpdatePlayerLocation(previRow, previCol, newRC[0], newRC[1]);
    } else if (malNum == 3){
        int previRow = second.row;
        int previCol = second.column;
        int* newRC = newRowCol(second, moveNum);
        playerMap.UpdatePlayerLocation(previRow, previCol, newRC[0], newRC[1]);
    }
}

int* Player::newRowCol (Mal &playerMal, int &moveNum){
    
}