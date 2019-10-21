#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include <iostream>
#include "board.h"
#include "PlayerInterface.h"
#include <time.h>
#include "Inventory.h"

using namespace std;

class HumanPlayer : public PlayerInterface
{
    private:
    Board playerBoard;//access the board object
    string marks;
    int marked;//ships that are marked
    int unmark;//ships that are unmarked
    int num_hits;
    int numOfShip;
    Inventory WeaponInventory;

    public:
    /** Default constructor
 *@pre none
 *@post  initalize marks which is use to mark different ships
 *@param None  */
    HumanPlayer();

    /** Sets number of ships
 *@pre takes in a integer x
 *@post set up # of ships and set those ships are unmark
 *@param None  */
    void setNum(int x);
    /**Places ships according to a 2D location and then a direction
 *@pre take in three integers x is row, y is col, z is the direction(1~4)
 *@post throw a error when the direction worrg and catch a error when placment fails
 *@param None  */
    void placement(int x, int y, int z);
    /** Prints the map found in the board
 *@pre none
 *@post print the map in board object
 *@param None  */
    void print();

/** Checks if all ships are marked
 *@pre none
 *@post return true if all ships are marked, false otherwise
 *@param None  */
    bool isAllMarked();

    /** Gets the number of times a player has hit the enemies's ships
 *@pre none
 *@post return num_hits
 *@param None  */
    int getHits();

    /** Prints the hidden map for the player who called it
 *@pre none
 *@post print the "grid" in board object
 *@param None  */
 void printHidden();

 /** calls the board class to compare char and attck if match is found
*@pre none
*@post handles the attack/comparison
*@param  takes in the x and y coordiinate of where the player would like to attack*/
 bool attack(int x, int y);

 /** calls the board class to compare char and update the board
*@pre none
*@post handles the attack/comparison
*@param  takes in the x and y coordiinate of where the player would like to attack
 the bool is for determining if it was a success or not -- "x" or "o"  */
 void update(int,int, bool);

/** calls the board class to see if the attacking player has already shot at this position
*@pre none
*@post none
*@param  none */
 int getMarks();

/** retry if you've already shot at the same location twice
*@pre none
*@post checks to see if a space has already been hit or not.
*@param  takes in the x and y coordiinate of where the player would like to attack */
 bool hitRetry(int x, int y);

/** gets playerBoard
 *@pre none
 *@post Returns playerBoard
 *@param None  */
 Board getBoard();

/** sets the WeaponInventory's inventoryFile variable
 *@pre none
 *@post WeaponInventory's inventoryFile variable should now hold the new value
 *@param takes in new value for WeaponInventory's inventoryFile  */
 void setInventoryFile(string fileName);
 
/** Reads in inventory from the file described by WeaponInventory's inventoryFile variable
 *@pre setInventoryFile should be ran before this to set intended file to read
 *@post shotArray and cheatermode should be initalized to variables from file
 *@param none  */
 void loadInventory();
 
 /** Prints out whole of WeaponInventory's shotArray and numCheat to cout
 *@pre none
 *@post inventory should be printed
 *@param none  */
 void printInventory();
 
 /** Prints out each shot in WeaponInventory's shotArray as long as it has at least one in amount as well as numCheat
 *@pre none
 *@post inventory should be printed
 *@param none  */
 void printInventory2();
 
 /** Shuffles WeaponInventory's shotArray
 *@pre none
 *@post WeaponInventory's ShotArray should be shuffled
 *@param none  */
 void inventoryRoll();
 
 /** Prompts user to choose a shot from WeaponInventory's shotArray then returns bool for if selection was valid
 *@pre none
 *@post menu should be printed
 *@param String to store selected type  */
 bool inventorySelect(string& shotType);

};
#endif
