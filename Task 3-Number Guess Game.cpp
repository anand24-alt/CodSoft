//Anand Tagde
//Number Guessing Game using srand function
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator with the current time
    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    
    cout << "I'm thinking of a number between 1 and 100. Can you guess what it is?" << endl;
    
    int guess;
    int numGuesses = 0;
    
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        numGuesses++;
        
        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number " << secretNumber << " correctly in " << numGuesses << " guesses." << endl;
            break;
        }
    }
    
    return 0;
}

