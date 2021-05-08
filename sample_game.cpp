#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

int getInput(std::string message)
{
    int number;
    std::cout << message;
    std::cin >> number;
    return number;
}

void show_high_score()
{
    std::ifstream file("score.txt");
    std::vector<std::string> scores;

    std::string input;
    while (getline(file, input))
    {
        scores.push_back(input);
    }

    for (size_t i = 1; i < scores.size(); i++)
    {
        std::cout << "Player " << i << ": " << scores[i] << std::endl;
    }
}

void renderMenu()
{
    std::cout << "0. Quit \n1. Play Game \n2. Show Highscore \n";
}

void log_vector(std::vector<int> &arr)
{

    for (size_t i = 0; i < arr.size(); i++)
    {
        std::cout << "------->" << arr[i] << std::endl;
    }
}

void playing()
{
    std::ofstream output;
    output.open("score.txt", std::ios_base::app);
    std::vector<int> guesses;
    int count = guesses.size();
    int random = rand() % 11;
    std::string player;

    std::cin.get();
    std::cout << "Enter your name: ";
    std::getline(std::cin, player);
    std::cout << "Guess the number: ";
    std::cout << random << std::endl;

    while (true)
    {
        int guess = 0;
        std::cin >> guess;
        guesses.push_back(guess);
        if (guess == random)
        {
            std::cout << "Well done " << player << ". You Win!" << std::endl;
            std::string var = std::string() + player + ", " + std::to_string(guesses.size()) + "\n";
            output << var;
            break;
        }
        else if (guess > random)
        {

            std::cout << "Your guess is too high" << std::endl;
        }
        else if (guess < random)
        {

            std::cout << "Your guess is too low" << std::endl;
        }
    };

    log_vector(guesses);
}

int main(void)
{
    srand(time(NULL));
    int choice;
    do
    {
        renderMenu();
        std::cin >> choice;
        switch (choice)
        {
        case 0:
            std::cout << "Stop Game" << std::endl;
            break;
        case 1:
            std::cout << "Playing Game" << std::endl;
            playing();
            break;
        case 2:
            std::cout << "Show Highscore" << std::endl;
            show_high_score();
            break;
        }
    } while (choice != 0);
}