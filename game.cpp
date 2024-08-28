#include <iostream>
#include <ctime>
int main(){
    srand(time(NULL));
    int userGuess;
    int randomNum = (rand() % 100) + 1;
    std::cout<<"****************************** \n";
    std::cout<<"Welcome to Ishak guessing game \n";
    std::cout<<"****************************** \n";
    do{
        std::cout<<"Enter a number between 1-100 \n";
        std::cin>>userGuess;
        if(userGuess > randomNum){
            std::cout<<"Too high! \n";
        }
        else if(userGuess < randomNum){
            std::cout<<"Too low! \n";
        }
    }while(randomNum != userGuess);
    std::cout<<"Congratulations you won! \n";
    std::cout<<"Thank you fo playing Ishak guessing game, hope to see you soon";
    return 0;
}