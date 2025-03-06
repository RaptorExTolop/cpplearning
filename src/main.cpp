#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

void testVector2(vector<vector<char>> vec);
void runTurn(vector<vector<char>> vec);

int main() {
    vector<vector<char>> game;
    for (int i = 0; i < 3; i++) { 
        // Vector to store column elements 
        vector<char> v1; 
  
        for (int j = 0; j < 3; j++) { 
            v1.push_back('X'); 
        }
  
        // Pushing back above 1D vector 
        // to create the 2D vector 
        game.push_back(v1); 
    }

    testVector2(game);
    
    string playeroneName, playerTwoName;
    cout << "Player One Name: ";
    cin >> playeroneName;
    cout << "PLayer Two Name: ";
    cin >> playerTwoName;

    cout << "Hello " + playeroneName + " and " + playerTwoName + ".";
    cout << " Welcome to a game of tick-tack-toe!" << endl;
    cout << "The game is simple, enter two values, one for the X and one for the Y, which will then get marked as your square" << endl;
    cout <<  "First to get three in a row wins! now GO GO GO" << endl;
    while (true) {
        
        break;
    }

    return 0;
}

void testVector2(vector<vector<char>> vec) {
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j];
        }
        cout << endl;
    }
    return;
}

void runTurn(vector<vector<char>>* vec) {
    
}