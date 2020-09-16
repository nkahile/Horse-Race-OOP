#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <ctime>
//using namespace std;
const int HORSE_NUM = 5;
// create Horse class
class Horse
{
    private:
        int HorsePosition;
    public:
        // class constructor
        Horse();
        //class methods
        //flip will get the horse to either move one step or not
        void flip();
        //getters for accessing the private property HorsePosition
        int getHorsePosition();
};
// Create race class
class Race {
    private:
        //create an array of 5 horses to be in the race
        Horse arr_horse[HORSE_NUM];
        // length is for the track length
        int length;
    public:
        // class constructor
        Race();
        // race length is constant
        Race (int length);
        // class methods
        void printLine(int horseNum);
        void run_game();
};

int main(){
    int seed;
    std::cout<<"Please enter a random seed: " << std::endl;
    std::cin >> seed;
    srand(seed);
    // create a class object
    Race race;
    //object accessing class method run_game
    race.run_game();
    return 0;
}

Horse::Horse(){
    //initializing the horse position to zero
    HorsePosition = 0;
}

void Horse::flip(){
    // flip uses random to choose from 0 and 1
    int FlipCoin;
        FlipCoin = rand()%2;
        // if it's 1 the horse moves one step forward
       if (FlipCoin==1)
        {
            HorsePosition++;
        }
}

int Horse::getHorsePosition()
{
    // this returns the horse position every time through out the game
    return HorsePosition;
}

Race::Race()
{
    // setting the track length to 15
    length = 15;
}

Race::Race( int RaceLength )
{
    //setting RaceLength to equal to the length so its printed every time
    length = RaceLength;
    std::cout<< length <<std::endl;
}

void Race::printLine(int horseNum)
{
    //we sit each horse to a position in this case all horses start at the same position zero
    int horse_Position = arr_horse[horseNum].getHorsePosition();
    // for is here to loop the horses over the track race
    for (int i=0;i<length; i++)
        {

            std::cout << ".";
            if(horse_Position==i)
            {
                std::cout<<horseNum;
            }

        }
    std::cout<<std::endl;
}

void Race::run_game()
{
    bool keepGoing = true;
    int  winner;
    while (keepGoing)
    {
	   std::cout << "\n\n" << std::endl;
        for (int i = 0; i < HORSE_NUM; i++)
        {
        if(keepGoing)
        {   // each horse in the array gets to move depending on the output of flip()
            arr_horse[i].flip();
        }
            //this to print the line with the 5 horses
            Race::printLine(i);
            // this if statement is to check if any of the horses position reaches the end of length
            if (arr_horse[i].getHorsePosition()==Race::length-1)
            {
                // if it's true we have a winner
                winner = i;
                // and we exit the while loop
                keepGoing = false;
            }
        }
    }
            std::cout << "\n" << std::endl;

    std::cout << "Horse " << winner << " wins!" << std::endl;
}
