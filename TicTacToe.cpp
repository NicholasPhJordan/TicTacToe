#include <iostream>

void main()
{
    bool gameOver = false;
    char player1[20] = " ";
    char player2[20] = " ";
    char grd[3][3] = { {48, 48, 48}, {48, 48, 48}, {48, 48, 48} };
    int turn = 0;
    int input = 0;

    while (gameOver != true && turn < 10)
    {
        //introduction and player naming
        std::cout << "Tic Tac Toe" << std::endl;
        std::cout << "What is your name?" << std::endl;
        std::cout << "Player1: ";
        std::cin >> player1; //gets players input and changes player1 to that value
        std::cout << "Player2: ";
        std::cin >> player2; //gets player input to change player2 to that value
        //waits for player input then clears screen
        system("pause");
        system("cls");

        //player1's turn
        //tells whos turn it is and adds 1 to turn
        std::cout << player1 << "'s turn" << std::endl;
        turn++;
        //draws grid with space below
        std::cout << " " << grd[0][0] << "  " << grd[0][1] << "  " << grd[0][2] << std::endl;
        std::cout << " " << grd[1][0] << "  " << grd[1][1] << "  " << grd[1][2] << std::endl;
        std::cout << " " << grd[2][0] << "  " << grd[2][1] << "  " << grd[2][2] << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Where will you play?" << std::endl;
        std::cout << "7 8 9" << std::endl;
        std::cout << "4 5 6" << std::endl;
        std::cout << "1 2 3" << std::endl;
        //gets player1 input
        std::cin >> input;
        if (input == 1)
        {
            if (grd[2][0] == 48)
                grd[2][0] = 88;
        }
        else if (input == 2)
        {
            if (grd[2][1] == 48)
                grd[2][1] = 88;
        }
        else if (input == 3)
        {
            if (grd[2][2] == 48)
                grd[2][2] = 88;
        }
        else if (input == 4)
        {
            if (grd[1][0] == 48)
                grd[1][0] = 88;
        }
        else if (input == 5)
        {
            if (grd[1][1] == 48)
                grd[1][1] = 88;
        }
        else if (input == 6)
        {
            if (grd[1][2] == 48)
                grd[1][2] = 88;
        }
        else if (input == 7)
        {
            if (grd[0][0] == 48)
                grd[0][0] = 88;
        }
        else if (input == 8)
        {
            if (grd[0][1] == 48)
                grd[0][1] = 88;
        }
        else if (input == 9)
        {
            if (grd[0][2] == 48)
                grd[0][2] = 88;
        }
        //checks if tic, tac, or toe for player1
        if (grd[0][0] == 88 && grd[0][1] == 88 && grd[0][2] == 88) //789
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
            
        }
        else if (grd[1][0] == 88 && grd[1][1] == 88 && grd[1][2] == 88) //456
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[2][0] == 88 && grd[2][1] == 88 && grd[2][2] == 88) //123
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][0] == 88 && grd[1][0] == 88 && grd[2][0] == 88) //741
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][1] == 88 && grd[1][1] == 88 && grd[2][1] == 88) //852
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][2] == 88 && grd[1][2] == 88 && grd[2][2] == 88) //963
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][0] == 88 && grd[1][1] == 88 && grd[2][2] == 88) //753
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[2][0] == 88 && grd[1][1] == 88 && grd[0][2] == 88) //159
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else
        {
            gameOver = false;
        }
        system("cls");

        //player2's turn
        //tells whos turn it is and adds 1 to turn
        std::cout << player2 << "'s turn" << std::endl;
        turn++;
        //draws grid with space below
        std::cout << " " << grd[0][0] << "  " << grd[0][1] << "  " << grd[0][2] << std::endl;
        std::cout << " " << grd[1][0] << "  " << grd[1][1] << "  " << grd[1][2] << std::endl;
        std::cout << " " << grd[2][0] << "  " << grd[2][1] << "  " << grd[2][2] << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Where will you play?" << std::endl;
        std::cout << "7 8 9" << std::endl;
        std::cout << "4 5 6" << std::endl;
        std::cout << "1 2 3" << std::endl;
        //gets player input
        std::cin >> input;
        if (input == 1)
        {
            if (grd[2][0] == 48)
                grd[2][0] = 79;
        }
        else if (input == 2)
        {
            if (grd[2][1] == 48)
                grd[2][1] = 79;
        }
        else if (input == 3)
        {
            if (grd[2][2] == 48)
                grd[2][2] = 79;
        }
        else if (input == 4)
        {
            if (grd[1][0] == 48)
                grd[1][0] = 79;
        }
        else if (input == 5)
        {
            if (grd[1][1] == 48)
                grd[1][1] = 79;
        }
        else if (input == 6)
        {
            if (grd[1][2] == 48)
                grd[1][2] = 79;
        }
        else if (input == 7)
        {
            if (grd[0][0] == 48)
                grd[0][0] = 79;
        }
        else if (input == 8)
        {
            if (grd[0][1] == 48)
                grd[0][1] = 79;
        }
        else if (input == 9)
        {
            if (grd[0][2] == 48)
                grd[0][2] = 79;
        }
        //checks if tic, tac, or toe for player2
        if (grd[0][0] == 79 && grd[0][1] == 79 && grd[0][2] == 79) //789
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[1][0] == 79 && grd[1][1] == 79 && grd[1][2] == 79) //456
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[2][0] == 79 && grd[2][1] == 79 && grd[2][2] == 79) //123
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][0] == 79 && grd[1][0] == 79 && grd[2][0] == 79) //741
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][1] == 79 && grd[1][1] == 79 && grd[2][1] == 79) //852
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][2] == 79 && grd[1][2] == 79 && grd[2][2] == 79) //963
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][0] == 79 && grd[1][1] == 79 && grd[2][2] == 79) //753
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[2][0] == 79 && grd[1][1] == 79 && grd[0][2] == 79) //159
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else
        {
            gameOver = false;
        }
        system("cls");

        //player1's turn
        //tells whos turn it is and adds 1 to turn
        std::cout << player1 << "'s turn" << std::endl;
        turn++;
        //draws grid with space below
        std::cout << " " << grd[0][0] << "  " << grd[0][1] << "  " << grd[0][2] << std::endl;
        std::cout << " " << grd[1][0] << "  " << grd[1][1] << "  " << grd[1][2] << std::endl;
        std::cout << " " << grd[2][0] << "  " << grd[2][1] << "  " << grd[2][2] << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Where will you play?" << std::endl;
        std::cout << "7 8 9" << std::endl;
        std::cout << "4 5 6" << std::endl;
        std::cout << "1 2 3" << std::endl;
        //gets player1 input
        std::cin >> input;
        if (input == 1)
        {
            if (grd[2][0] == 48)
                grd[2][0] = 88;
        }
        else if (input == 2)
        {
            if (grd[2][1] == 48)
                grd[2][1] = 88;
        }
        else if (input == 3)
        {
            if (grd[2][2] == 48)
                grd[2][2] = 88;
        }
        else if (input == 4)
        {
            if (grd[1][0] == 48)
                grd[1][0] = 88;
        }
        else if (input == 5)
        {
            if (grd[1][1] == 48)
                grd[1][1] = 88;
        }
        else if (input == 6)
        {
            if (grd[1][2] == 48)
                grd[1][2] = 88;
        }
        else if (input == 7)
        {
            if (grd[0][0] == 48)
                grd[0][0] = 88;
        }
        else if (input == 8)
        {
            if (grd[0][1] == 48)
                grd[0][1] = 88;
        }
        else if (input == 9)
        {
            if (grd[0][2] == 48)
                grd[0][2] = 88;
        }
        //checks if tic, tac, or toe for player1
        if (grd[0][0] == 88 && grd[0][1] == 88 && grd[0][2] == 88) //789
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[1][0] == 88 && grd[1][1] == 88 && grd[1][2] == 88) //456
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[2][0] == 88 && grd[2][1] == 88 && grd[2][2] == 88) //123
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][0] == 88 && grd[1][0] == 88 && grd[2][0] == 88) //741
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][1] == 88 && grd[1][1] == 88 && grd[2][1] == 88) //852
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][2] == 88 && grd[1][2] == 88 && grd[2][2] == 88) //963
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][0] == 88 && grd[1][1] == 88 && grd[2][2] == 88) //753
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[2][0] == 88 && grd[1][1] == 88 && grd[0][2] == 88) //159
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else
        {
            gameOver = false;
        }
        system("cls");

        //player2's turn
        //tells whos turn it is and adds 1 to turn
        std::cout << player2 << "'s turn" << std::endl;
        turn++;
        //draws grid with space below
        std::cout << " " << grd[0][0] << "  " << grd[0][1] << "  " << grd[0][2] << std::endl;
        std::cout << " " << grd[1][0] << "  " << grd[1][1] << "  " << grd[1][2] << std::endl;
        std::cout << " " << grd[2][0] << "  " << grd[2][1] << "  " << grd[2][2] << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Where will you play?" << std::endl;
        std::cout << "7 8 9" << std::endl;
        std::cout << "4 5 6" << std::endl;
        std::cout << "1 2 3" << std::endl;
        //gets player input
        std::cin >> input;
        if (input == 1)
        {
            if (grd[2][0] == 48)
                grd[2][0] = 79;
        }
        else if (input == 2)
        {
            if (grd[2][1] == 48)
                grd[2][1] = 79;
        }
        else if (input == 3)
        {
            if (grd[2][2] == 48)
                grd[2][2] = 79;
        }
        else if (input == 4)
        {
            if (grd[1][0] == 48)
                grd[1][0] = 79;
        }
        else if (input == 5)
        {
            if (grd[1][1] == 48)
                grd[1][1] = 79;
        }
        else if (input == 6)
        {
            if (grd[1][2] == 48)
                grd[1][2] = 79;
        }
        else if (input == 7)
        {
            if (grd[0][0] == 48)
                grd[0][0] = 79;
        }
        else if (input == 8)
        {
            if (grd[0][1] == 48)
                grd[0][1] = 79;
        }
        else if (input == 9)
        {
            if (grd[0][2] == 48)
                grd[0][2] = 79;
        }
        //checks if tic, tac, or toe for player2
        if (grd[0][0] == 79 && grd[0][1] == 79 && grd[0][2] == 79) //789
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[1][0] == 79 && grd[1][1] == 79 && grd[1][2] == 79) //456
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[2][0] == 79 && grd[2][1] == 79 && grd[2][2] == 79) //123
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][0] == 79 && grd[1][0] == 79 && grd[2][0] == 79) //741
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][1] == 79 && grd[1][1] == 79 && grd[2][1] == 79) //852
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][2] == 79 && grd[1][2] == 79 && grd[2][2] == 79) //963
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][0] == 79 && grd[1][1] == 79 && grd[2][2] == 79) //753
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[2][0] == 79 && grd[1][1] == 79 && grd[0][2] == 79) //159
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else
        {
            gameOver = false;
        }
        system("cls");

        //player1's turn
        //tells whos turn it is and adds 1 to turn
        std::cout << player1 << "'s turn" << std::endl;
        turn++;
        //draws grid with space below
        std::cout << " " << grd[0][0] << "  " << grd[0][1] << "  " << grd[0][2] << std::endl;
        std::cout << " " << grd[1][0] << "  " << grd[1][1] << "  " << grd[1][2] << std::endl;
        std::cout << " " << grd[2][0] << "  " << grd[2][1] << "  " << grd[2][2] << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Where will you play?" << std::endl;
        std::cout << "7 8 9" << std::endl;
        std::cout << "4 5 6" << std::endl;
        std::cout << "1 2 3" << std::endl;
        //gets player1 input
        std::cin >> input;
        if (input == 1)
        {
            if (grd[2][0] == 48)
                grd[2][0] = 88;
        }
        else if (input == 2)
        {
            if (grd[2][1] == 48)
                grd[2][1] = 88;
        }
        else if (input == 3)
        {
            if (grd[2][2] == 48)
                grd[2][2] = 88;
        }
        else if (input == 4)
        {
            if (grd[1][0] == 48)
                grd[1][0] = 88;
        }
        else if (input == 5)
        {
            if (grd[1][1] == 48)
                grd[1][1] = 88;
        }
        else if (input == 6)
        {
            if (grd[1][2] == 48)
                grd[1][2] = 88;
        }
        else if (input == 7)
        {
            if (grd[0][0] == 48)
                grd[0][0] = 88;
        }
        else if (input == 8)
        {
            if (grd[0][1] == 48)
                grd[0][1] = 88;
        }
        else if (input == 9)
        {
            if (grd[0][2] == 48)
                grd[0][2] = 88;
        }
        //checks if tic, tac, or toe for player1
        if (grd[0][0] == 88 && grd[0][1] == 88 && grd[0][2] == 88) //789
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[1][0] == 88 && grd[1][1] == 88 && grd[1][2] == 88) //456
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[2][0] == 88 && grd[2][1] == 88 && grd[2][2] == 88) //123
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][0] == 88 && grd[1][0] == 88 && grd[2][0] == 88) //741
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][1] == 88 && grd[1][1] == 88 && grd[2][1] == 88) //852
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][2] == 88 && grd[1][2] == 88 && grd[2][2] == 88) //963
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][0] == 88 && grd[1][1] == 88 && grd[2][2] == 88) //753
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[2][0] == 88 && grd[1][1] == 88 && grd[0][2] == 88) //159
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else
        {
            gameOver = false;
        }
        system("cls");

        //player2's turn
        //tells whos turn it is and adds 1 to turn
        std::cout << player2 << "'s turn" << std::endl;
        turn++;
        //draws grid with space below
        std::cout << " " << grd[0][0] << "  " << grd[0][1] << "  " << grd[0][2] << std::endl;
        std::cout << " " << grd[1][0] << "  " << grd[1][1] << "  " << grd[1][2] << std::endl;
        std::cout << " " << grd[2][0] << "  " << grd[2][1] << "  " << grd[2][2] << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Where will you play?" << std::endl;
        std::cout << "7 8 9" << std::endl;
        std::cout << "4 5 6" << std::endl;
        std::cout << "1 2 3" << std::endl;
        //gets player input
        std::cin >> input;
        if (input == 1)
        {
            if (grd[2][0] == 48)
                grd[2][0] = 79;
        }
        else if (input == 2)
        {
            if (grd[2][1] == 48)
                grd[2][1] = 79;
        }
        else if (input == 3)
        {
            if (grd[2][2] == 48)
                grd[2][2] = 79;
        }
        else if (input == 4)
        {
            if (grd[1][0] == 48)
                grd[1][0] = 79;
        }
        else if (input == 5)
        {
            if (grd[1][1] == 48)
                grd[1][1] = 79;
        }
        else if (input == 6)
        {
            if (grd[1][2] == 48)
                grd[1][2] = 79;
        }
        else if (input == 7)
        {
            if (grd[0][0] == 48)
                grd[0][0] = 79;
        }
        else if (input == 8)
        {
            if (grd[0][1] == 48)
                grd[0][1] = 79;
        }
        else if (input == 9)
        {
            if (grd[0][2] == 48)
                grd[0][2] = 79;
        }
        //checks if tic, tac, or toe for player2
        if (grd[0][0] == 79 && grd[0][1] == 79 && grd[0][2] == 79) //789
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
        }
        else if (grd[1][0] == 79 && grd[1][1] == 79 && grd[1][2] == 79) //456
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
        }
        else if (grd[2][0] == 79 && grd[2][1] == 79 && grd[2][2] == 79) //123
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
        }
        else if (grd[0][0] == 79 && grd[1][0] == 79 && grd[2][0] == 79) //741
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
        }
        else if (grd[0][1] == 79 && grd[1][1] == 79 && grd[2][1] == 79) //852
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
        }
        else if (grd[0][2] == 79 && grd[1][2] == 79 && grd[2][2] == 79) //963
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
        }
        else if (grd[0][0] == 79 && grd[1][1] == 79 && grd[2][2] == 79) //753
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
        }
        else if (grd[2][0] == 79 && grd[1][1] == 79 && grd[0][2] == 79) //159
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
        }
        else
        {
            gameOver = false;
        }
        system("cls");

        //player1's turn
        //tells whos turn it is and adds 1 to turn
        std::cout << player1 << "'s turn" << std::endl;
        turn++;
        //draws grid with space below
        std::cout << " " << grd[0][0] << "  " << grd[0][1] << "  " << grd[0][2] << std::endl;
        std::cout << " " << grd[1][0] << "  " << grd[1][1] << "  " << grd[1][2] << std::endl;
        std::cout << " " << grd[2][0] << "  " << grd[2][1] << "  " << grd[2][2] << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Where will you play?" << std::endl;
        std::cout << "7 8 9" << std::endl;
        std::cout << "4 5 6" << std::endl;
        std::cout << "1 2 3" << std::endl;
        //gets player1 input
        std::cin >> input;
        if (input == 1)
        {
            if (grd[2][0] == 48)
                grd[2][0] = 88;
        }
        else if (input == 2)
        {
            if (grd[2][1] == 48)
                grd[2][1] = 88;
        }
        else if (input == 3)
        {
            if (grd[2][2] == 48)
                grd[2][2] = 88;
        }
        else if (input == 4)
        {
            if (grd[1][0] == 48)
                grd[1][0] = 88;
        }
        else if (input == 5)
        {
            if (grd[1][1] == 48)
                grd[1][1] = 88;
        }
        else if (input == 6)
        {
            if (grd[1][2] == 48)
                grd[1][2] = 88;
        }
        else if (input == 7)
        {
            if (grd[0][0] == 48)
                grd[0][0] = 88;
        }
        else if (input == 8)
        {
            if (grd[0][1] == 48)
                grd[0][1] = 88;
        }
        else if (input == 9)
        {
            if (grd[0][2] == 48)
                grd[0][2] = 88;
        }
        //checks if tic, tac, or toe for player1
        if (grd[0][0] == 88 && grd[0][1] == 88 && grd[0][2] == 88) //789
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[1][0] == 88 && grd[1][1] == 88 && grd[1][2] == 88) //456
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[2][0] == 88 && grd[2][1] == 88 && grd[2][2] == 88) //123
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][0] == 88 && grd[1][0] == 88 && grd[2][0] == 88) //741
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][1] == 88 && grd[1][1] == 88 && grd[2][1] == 88) //852
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][2] == 88 && grd[1][2] == 88 && grd[2][2] == 88) //963
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][0] == 88 && grd[1][1] == 88 && grd[2][2] == 88) //753
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[2][0] == 88 && grd[1][1] == 88 && grd[0][2] == 88) //159
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else
        {
            gameOver = false;
        }
        system("cls");

        //player2's turn
        //tells whos turn it is and adds 1 to turn
        std::cout << player2 << "'s turn" << std::endl;
        turn++;
        //draws grid with space below
        std::cout << " " << grd[0][0] << "  " << grd[0][1] << "  " << grd[0][2] << std::endl;
        std::cout << " " << grd[1][0] << "  " << grd[1][1] << "  " << grd[1][2] << std::endl;
        std::cout << " " << grd[2][0] << "  " << grd[2][1] << "  " << grd[2][2] << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Where will you play?" << std::endl;
        std::cout << "7 8 9" << std::endl;
        std::cout << "4 5 6" << std::endl;
        std::cout << "1 2 3" << std::endl;
        //gets player input
        std::cin >> input;
        if (input == 1)
        {
            if (grd[2][0] == 48)
                grd[2][0] = 79;
        }
        else if (input == 2)
        {
            if (grd[2][1] == 48)
                grd[2][1] = 79;
        }
        else if (input == 3)
        {
            if (grd[2][2] == 48)
                grd[2][2] = 79;
        }
        else if (input == 4)
        {
            if (grd[1][0] == 48)
                grd[1][0] = 79;
        }
        else if (input == 5)
        {
            if (grd[1][1] == 48)
                grd[1][1] = 79;
        }
        else if (input == 6)
        {
            if (grd[1][2] == 48)
                grd[1][2] = 79;
        }
        else if (input == 7)
        {
            if (grd[0][0] == 48)
                grd[0][0] = 79;
        }
        else if (input == 8)
        {
            if (grd[0][1] == 48)
                grd[0][1] = 79;
        }
        else if (input == 9)
        {
            if (grd[0][2] == 48)
                grd[0][2] = 79;
        }
        //checks if tic, tac, or toe for player2
        if (grd[0][0] == 79 && grd[0][1] == 79 && grd[0][2] == 79) //789
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[1][0] == 79 && grd[1][1] == 79 && grd[1][2] == 79) //456
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[2][0] == 79 && grd[2][1] == 79 && grd[2][2] == 79) //123
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][0] == 79 && grd[1][0] == 79 && grd[2][0] == 79) //741
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][1] == 79 && grd[1][1] == 79 && grd[2][1] == 79) //852
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][2] == 79 && grd[1][2] == 79 && grd[2][2] == 79) //963
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][0] == 79 && grd[1][1] == 79 && grd[2][2] == 79) //753
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[2][0] == 79 && grd[1][1] == 79 && grd[0][2] == 79) //159
        {
            std::cout << player2 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else
        {
            gameOver = false;
        }
        system("cls");

        //player1's turn
        //tells whos turn it is and adds 1 to turn
        std::cout << player1 << "'s turn" << std::endl;
        turn++;
        //draws grid with space below
        std::cout << " " << grd[0][0] << "  " << grd[0][1] << "  " << grd[0][2] << std::endl;
        std::cout << " " << grd[1][0] << "  " << grd[1][1] << "  " << grd[1][2] << std::endl;
        std::cout << " " << grd[2][0] << "  " << grd[2][1] << "  " << grd[2][2] << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Where will you play?" << std::endl;
        std::cout << "7 8 9" << std::endl;
        std::cout << "4 5 6" << std::endl;
        std::cout << "1 2 3" << std::endl;
        //gets player1 input
        std::cin >> input;
        if (input == 1)
        {
            if (grd[2][0] == 48)
                grd[2][0] = 88;
        }
        else if (input == 2)
        {
            if (grd[2][1] == 48)
                grd[2][1] = 88;
        }
        else if (input == 3)
        {
            if (grd[2][2] == 48)
                grd[2][2] = 88;
        }
        else if (input == 4)
        {
            if (grd[1][0] == 48)
                grd[1][0] = 88;
        }
        else if (input == 5)
        {
            if (grd[1][1] == 48)
                grd[1][1] = 88;
        }
        else if (input == 6)
        {
            if (grd[1][2] == 48)
                grd[1][2] = 88;
        }
        else if (input == 7)
        {
            if (grd[0][0] == 48)
                grd[0][0] = 88;
        }
        else if (input == 8)
        {
            if (grd[0][1] == 48)
                grd[0][1] = 88;
        }
        else if (input == 9)
        {
            if (grd[0][2] == 48)
                grd[0][2] = 88;
        }
        //checks if tic, tac, or toe for player1
        if (grd[0][0] == 88 && grd[0][1] == 88 && grd[0][2] == 88) //789
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[1][0] == 88 && grd[1][1] == 88 && grd[1][2] == 88) //456
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[2][0] == 88 && grd[2][1] == 88 && grd[2][2] == 88) //123
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][0] == 88 && grd[1][0] == 88 && grd[2][0] == 88) //741
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][1] == 88 && grd[1][1] == 88 && grd[2][1] == 88) //852
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][2] == 88 && grd[1][2] == 88 && grd[2][2] == 88) //963
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[0][0] == 88 && grd[1][1] == 88 && grd[2][2] == 88) //753
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else if (grd[2][0] == 88 && grd[1][1] == 88 && grd[0][2] == 88) //159
        {
            std::cout << player1 << " Wins!!" << std::endl;
            system("pause");
            gameOver = true;
            break;
        }
        else
        {
            gameOver = false;
        }
        system("cls");
        
        std::cout << "TIE" << std::endl;
        turn++;
    }
    system("pause");
}
