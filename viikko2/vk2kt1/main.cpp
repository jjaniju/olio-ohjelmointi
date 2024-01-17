#include "game.h"
using namespace std;






class game
{
public:
    ~game();
    int Game;
    void play();


private:

    int maxNumber;
    int playersGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();



    int main()
    {
        game gameObject (10);
        gameObject.play();
        return 0;

    };




