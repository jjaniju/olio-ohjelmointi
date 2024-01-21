#include "Game.h"
using namespace std;



int leikki(int maxluku);
Game::Game(int i) {

}

    void Game::play() {

        int maxluku;
        cout<<"maxluku";
        cin>>maxluku;
        srand(time(0)); // käytetään kelloa siemenlukuna.
        int arvaukset = leikki(maxluku);
        cout<<"arvauksia oli "<<arvaukset<<endl;
    }


    int leikki(int maxluku) {
        int luku = rand() % maxluku ;
        int arvaus;
        int quesses = 1;


        do {
            cout << "Arvaa luku 1-"<<maxluku<<endl;
            cin >> arvaus;

            if (arvaus < luku) {
                cout << "isompi" << endl;
                quesses++;
            } else if (arvaus > luku) {
                cout << "pienempi" << endl;
                quesses++;
            } else {
                cout << "oikein!" << endl;
            }
        } while (arvaus != luku);
        return quesses;
    }




