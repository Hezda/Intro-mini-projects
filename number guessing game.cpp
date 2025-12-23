// Number Guessing Game
// Description: User guesses a random number until correct
// Skills: loops, conditionals, random numbers

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    srand(time(0)); // this ensures the number is different each run
    int secretNumber= rand() % 100 +1;
    int guess;
    int attempts = 0;
    
    cout << "guess a number between 1 and 100:  " << endl;
    cin >> guess;
    
    while (guess != secretNumber){
        attempts++;
        if (guess < secretNumber){
            cout << "Too low, try again: " ;
        } else { cout << "Too high, try again: ";
        
    }cin >> guess;
}
    attempts++;
    cout << "Correct; you guessed  in "<< attempts << "attempts. " << endl;
    
    return 0;
