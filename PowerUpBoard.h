#ifndef POWERUPS_H
#define POWERUPS_H
#include <string>
#include "HumanPlayer.h" 
#include "AI.h"
#include <fstream>
#include <limits>
#include <time.h>
#include <iostream>

using namespace std;

    class PowerUpBoard
    {
        private:
            int numPowerUps = 0;
            char pBoard[8][8];

        public:
        
			/** Default constructor
			*@pre none
			*@post  initalize Powerupboard
			*@param None  */
            PowerUpBoard();
            
			/** Default deconstructor
			*@pre none
			*@post Deallocate memory used by Powerupboard
			*@param None  */
            ~PowerUpBoard();

			/** Sets the spaces of the board and then selects a number of them to hold powerups
			*@pre none
			*@post  PowerUpBoard should be populated with the inputted ammount of powerup spaces
			*@param Takes in number of powerups on board  */
            void powerUpSetter(int numPowerUps);
			
			/** Shuffles around various parts of the array 
			*@pre none
			*@post  powerUpPos should have serveral of its entries positions swapped
			*@param takes in an array to shuffle and the size of said array  */
            void shuffleArray(int powerUpPos[], int size);

			/** Display's the board to the console
			*@pre none
			*@post  PowerUpBoard's board written to console
			*@param None  */
            void displayPowerUps();

			/** check to see if space is marked for powerup, if so return true and swap it with a marker for the powerup being hit
			*@pre none
			*@post  returns true if powerup found, false otherwise.
			*@param takes in an x and y cordinate of the board  */
            bool update(int x, int y);
    };
#endif
