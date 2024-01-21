#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <time.h>




using namespace std;

class Game
{
public:
    Game(int i);
    ~Game()
    {
     cout << "vetoja" << endl;
    }
    void play();


private:

    int maxNumber;
    int playersGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();
};

#endif // GAME_H
