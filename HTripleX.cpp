#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    system("CLS");//Clear terminal for windows, mac and linux uses clear instead of cls
    std::cout << "\nYou have trust issues & your bf/gf is in the shower, you Quickly Grab their phone\n";
    std::cout << "Enter the pin on your bf/gf device and gain access sadly they have many pins and you are currently in\n\n";
    std::cout << "Level " << Difficulty;
    if(Difficulty < 2){
        std::cout << "                                                         |\n"    ;
        std::cout << "                                            __________   |\n"    ;
        std::cout << "                           _    __    _    |          |  |\n"    ;
        std::cout << "                          /_\\  /  \\  /_\\   |          |  |\n" ;
        std::cout << "                          =|= | // | =|=   |          |  |\n"    ;
        std::cout << "                           !   \\__/   !    |          |  |\n"   ;
        std::cout << "                                 _         |          |  |\n"    ;
        std::cout << " ___               ___          //'        |          |  |\n"    ;
        std::cout << "[___]       _   :=|   |=:   __T_||_T__     |p=        |  |\n"    ;
        std::cout << "|  ~|     =)_)=   |   |    [__________]    |          |  |\n"    ;
        std::cout << "|   |      (_(    |xXx|     \\_      _/     |          |  |\n"   ;
        std::cout << "|   |      )_)    =====       \\    /       |          |  |\n"   ;
        std::cout << "\\___|                          |  |        |          |  |\n"   ;
        std::cout << " |  `========,                 |  |        |          |  |\n"    ;
        std::cout << "__`.        .'_________________|  |________|__________|__|\n"    ;
        std::cout << "    `.    .'                  (____)                      \\ \n" ;
        std::cout << "    _|    |_...             .;;;;;;;;.                     \\ \n";
        std::cout << "   (________);;;;          :;;;;;;;;;;:\n"                       ;
        std::cout << "        :::::::'            '::::::::'\n"                        ;
    }
}


bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    

    const int 
    PinA = rand() % Difficulty + Difficulty,
    PinB = rand() % Difficulty + Difficulty,  
    PinC = rand() % Difficulty + Difficulty;

    const int
    PinSum = PinA + PinB + PinC,
    PinProduct = PinA * PinB * PinC;

    std::cout << "\n+ You know it's a 3 digit pin\n";
    std::cout << "+ The pin adds up to: " << PinSum << std::endl;
    std::cout << "+ When Multiplied the value is: " << PinProduct << std::endl;

    int
    PlayerGuessA, PlayerGuessB, PlayerGuessC;

    std::cout << "\nInput Pin Numbers individually or followed by Spaces e.g " << rand() % Difficulty + Difficulty << " " << rand() % Difficulty + Difficulty << " " << rand() % Difficulty + Difficulty << std::endl;
    std::cin >> PlayerGuessA >> PlayerGuessB >> PlayerGuessC;

    system("CLS");//Clear terminal for windows, mac and linux uses clear instead of cls

    int
    PlayerGuessSum = PlayerGuessA + PlayerGuessB + PlayerGuessC,
    PlayerGuessProduct = PlayerGuessA * PlayerGuessB * PlayerGuessC;

    std::cout << "Your Guess for the pin Added Together: " << PlayerGuessSum << std::endl;
    std::cout << "Your Guess for pin Multiplied Together: " << PlayerGuessProduct << std::endl;


    if(PlayerGuessProduct == PinProduct && PlayerGuessSum == PinSum)
    {
        if(Difficulty == 1)
        {
            std::cout << "\n\nYou Got in and find that he/she has been msging someone... Time to check what it is says\n";
            std::cout << "Just when you're about to check another Pin Appears";
        }

        if(Difficulty == 2)
        {
            std::cout << "\n\nYour in the messages they are having a great conversation and you see love messages around... you feel like you've been betrayed\n";
            std::cout << "When your about to check who the messages are being sent to you are blocked by another Pin\n";
            std::cout << "Why does they have so much pins and locks is their trying to keep something from me!";
        }

        if(Difficulty == 3)
        {
            std::cout << "\n\nyou look to see who it is find out all the msges are to you";
            std::cout << "you feel a sense of relief";
            std::cout << "They've finished Showering and they give you a hug <3";
        }

        std::cout << "\n\nPress Enter To Continue";
        std::cin.get();
        return true;
    }
    else
    {
        std::cout << "\nTo no success you failed to get into their phone \nThey've finished taking a shower and see you so they give you a hug... but you still have trust issues.\n";
        std::cout << "\n\nPress Enter To Try Again";
        std::cin.get();
        return false;
    }

    

}


int main()
{
    srand(time(NULL));

    int LevelDifficulty = 1;
    const int MaxDifficulty = 3;
    while(LevelDifficulty <= MaxDifficulty) //Loop Game until MaxDifficulty is reached.
    {
        bool bLevelComplete = PlayGame(LevelDifficulty); //just returns true or false
        std::cin.clear(); //Clears error flag 
        std::cin.ignore(); //Clears Internal State
        
        if(bLevelComplete)
        {
            ++LevelDifficulty; //pre increment only if they complete level.
        }  
    }

    std::cout << "They've always Loved you have now you have no doubt in your heart <3";
    std::cout << "Thanks for playing";
    return 0;
}