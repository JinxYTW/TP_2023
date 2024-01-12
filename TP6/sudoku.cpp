#include "sudoku.h"
namespace sudoku{

Sudoku::Sudoku(){
    initBoard();

}


void Sudoku::initBoard()
{
     std::vector<int> row(9, 0); // Create a row of four cells, all initialized to zero

    for (int i = 0; i < 9; i++)
    {
        board.push_back(row); // A revoir
    } 
}


void Sudoku::printBoard()
{
    for (int i = 0; i < 9; i++)
    {
        std::cout << "*----+----+----*----+----+----*----+----+----*" << std::endl;
        for (int j = 0; j < 9; j++)
        {
            std::cout << "|";
            if (board[i][j] == 0)
            {
                std::cout << "    ";
            }
            else
            {
                std::cout << board[i][j] << "   ";
            }
        }
        std::cout << "|" << std::endl;
    }
    std::cout << "*----+----+----*----+----+----*----+----+----*" << std::endl;
}


void Sudoku::play(){

    printBoard();


}

}