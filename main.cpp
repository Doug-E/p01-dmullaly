#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime> 


using namespace std;

int main()
{

game:

int ranE, ranM, ranH, guess;

char play,diff;

do {

srand(time (NULL) );
ranE = rand() % 2 + 1;
ranM = rand() % 10 + 1;
ranH = rand() % 100 +1;


cout<< "What difficulty would you like to do? Easy(e), Medium(m), or Hard(h)?" <<endl;
cin>> diff;

if (diff == 'e' || diff == 'E') {
cout<< "Guess a number between 1 and 2. You have 1 try!"<<ranE  <<endl;
cin>> guess;
    if (guess == ranE) {
    cout<< "You guessed correctly! You win!" <<endl;
    }
    else {
    cout<< "You were off by " << abs (ranE - guess) << "! Sorry, you lose." <<endl;
    } 

}
    
else if (diff == 'm' || diff == 'M')    {
cout<< "Guess a number between 1 and 10. You have 2 tries!" <<ranM <<endl;
cin>> guess;
    if (guess == ranM)  {
    cout<< "You guessed correctly! You win!" <<endl;
    }
    else {
    cout<< "You were off by " << abs (ranM - guess) << "! One try left!" <<endl;
    cin>> guess;
        if (guess == ranM) {
        cout<< "You got it on your second try! You win!" <<endl;
        }
        else    {
        cout<< "You were off by " << abs (ranM - guess) << "! Sorry, you lose." <<endl;
        }
    }
}

else if (diff == 'h' || diff == 'H') {
cout<< "Guess a number between 1 and 100. You have 3 tries!" <<ranH <<endl;
cin>> guess;
    if (guess == ranH)  {
    cout<< "You guessed correctly! You win!" <<endl;
    }
    else {
    cout<< "You were off by " << abs (ranH - guess) << "! Two tries left!" <<endl;
    cin>> guess;
        if (guess == ranH) {
        cout<< "You got it on your second try! You win!" <<endl;
        }
        else    {
            cout<< "You were off by " << abs (ranH - guess) << "! One try left!" <<endl;
            cin>> guess;
            if (guess == ranH) {
            cout<< "You got it on your last try! You win!" <<endl;
            }
            else    {
            cout<< "You were off by " << abs (ranH - guess) << "! Sorry, you lose." <<endl;
            }
        
        }
    }
}
else {
cout<< "That wasn't and option. ";
}

cout<< "Would you like to play again? (y/n)" <<endl;
cin>> play;
}
while (play == 'y' || play == 'Y');

cout<< "Thanks for playing!" <<endl;

 return 0;

}
