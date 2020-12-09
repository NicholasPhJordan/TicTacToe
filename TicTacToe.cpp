#include <iostream>

void main()
{
    bool gameOver = false;
    char player1[20] = " ";
    char player2[20] = " ";
    char grd[3][3] = { {48, 48, 48}, {48, 48, 48}, {48, 48, 48} };
    int turn = 0;

    while (gameOver != true && turn < 10)
    {
        //introduction and player naming
        std::cout << "Tic Tac Toe" << std::endl;
        std::cout << "What is your name?" << std::endl;
        std::cout << "Player1: ";
        std::cin >> player1; //gets players input and changes player1 to that value
        std::cout << "Player2: ";
        std::cin >> player2; //gets player input to change player2 to that value
        system("pause");
        system("cls");

        //tells whos turn it is and adds 1 to turn
        std::cout << player1 << "'s turn" << std::endl;
        turn++;
        //draws grid
        std::cout << " " << grd[0][0] << "  " << grd[0][1] << "  " << grd[0][2] << std::endl;
        std::cout << " " << grd[1][0] << "  " << grd[1][1] << "  " << grd[1][2] << std::endl;
        std::cout << " " << grd[2][0] << "  " << grd[2][1] << "  " << grd[2][2] << std::endl;

        std::cout << "Where will you play?" << std::endl;
        std::cout << "7 8 9" << std::endl;
        std::cout << "4 5 6" << std::endl;
        std::cout << "1 2 3" << std::endl;
    }
}
