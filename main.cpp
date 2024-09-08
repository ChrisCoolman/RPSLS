#include <iostream>

char getUserChoise();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
    char player;
    char computer;

    player = getUserChoise();
    std::cout << "You choose ";
    showChoice(player);
    computer = getComputerChoice();
    std::cout << "Computer chooses ";
    showChoice(computer);
    chooseWinner(player, computer);
    return 0;
}
char getUserChoise() {
    char player;
    std::cout << "Rock-Paper-Scissors Game\n";
    do{
        std::cout << "Choose one of the following\n";
        std::cout << "+------------------------+\n";
        std::cout << "'r' for Rock\n";
        std::cout << "'p' for Paper\n";
        std::cout << "'c' for Scissors\n";
        std::cout << "'l' for Lizard\n";
        std::cout << "'s' for Spock\n";
        std::cin >> player;
    } while(player != 'r' && player != 'p' && player != 'c' && player != 'l' && player != 's');
    return player;
}
char getComputerChoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 'c';
        case 4: return 'l';
        case 5: return 's';
    }
}
void showChoice(char choice)
{
    switch(choice)
    {
        case 'r':
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 'c':
            std::cout << "Scissors\n";
            break;
        case 'l':
            std::cout << "Lizard\n";
            break;
        case 's':
            std::cout << "Spock\n";
            break;
    }
}
void chooseWinner(char player, char computer)
{
    switch (player) {
        case 'r':
            if(computer == 'r')
            {
                std::cout << "It's a tie!\n";
            }
            else if(computer == 'p' || computer == 's')
            {
                std::cout << "Computer wins!\n";
            }
            else
            {
                std::cout << "You win!\n";
            }
            break;
        case 'p':
            if(computer == 'p')
            {
                std::cout << "It's a tie!\n";
            }
            else if(computer == 'c' || computer == 'l')
            {
                std::cout << "Computer wins!\n";
            }
            else
            {
                std::cout << "You win!\n";
            }
        case 'c':
            if(computer == 'c')
            {
                std::cout << "It's a tie!\n";
            }
            else if(computer == 'r' || computer == 's')
            {
                std::cout << "Computer wins!\n";
            }
            else
            {
                std::cout << "You win!\n";
            }
        case 'l':
            if(computer == 'l') {
                std::cout << "It's a tie!\n";
            }
            else if(computer == 'r' || computer == 'c')
            {
                std::cout << "Computer wins!\n";
            }
            else
            {
                std::cout << "You win!\n";
            }
        case 's':
            if(computer == 's')
            {
                std::cout << "It's a tie!\n";
            }
            else if(computer == 'p' || computer == 'l')
            {
                std::cout << "Computer wins!\n";
            }
            else {
                std::cout << "You win!\n";
            }

    }
}