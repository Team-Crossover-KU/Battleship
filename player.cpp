#include "player.h"
player::player()
{
  marks="abcde";

   marked=0;
}
void player::setnum(int x)
{
    unmark=x;
    numofship=x;
}

void player::placement(int x,int y,int z)
{
    string direct;
    if(z==1)
    {
        direct="up";
    }
    else if (z==2)
    {
        direct="down";
    }
    else if(z==3)
    {
        direct="left";
    }
    else if(z==4)
    {
        direct="right";
    }
    else
    {
        throw(std::runtime_error(" "));
    }

    if(marked<numofship)
    {
        try
        {
            char label=marks.at(marked);
            //cout<<label<<endl;
            access.PlaceShip(x,y,direct,marked+1,label);
            marked=marked+1;
            unmark=unmark-1;
        }
        catch(const std::runtime_error& e)
        {
            cout<<"fail,try again"<<endl;
        }

    }

}
bool player::IsAllMarked()
{
    if(numofship>marked)
    {
        return false;
    }
    else
    {
        return true;
    }

}

void player::attack(int x, int y)
{
//  access.Attack(x,y);

  access.update(x,y);
  access.PrintMap();
  access.PrintGrid();
}

void player::printHidden()
{
  access.PrintGrid();
}

void player::print()
{
    access.PrintMap();
}

int player::GetHits()
{
  return num_hits;
}
void player::Play()
{
  int x,y;

  cout <<"Enter the coordinates for your attack: ";
  
  cin >>x;
  cin>> y;
  attack(x,y);


}