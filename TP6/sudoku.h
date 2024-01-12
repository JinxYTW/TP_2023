#ifndef SUDOKU_H
#define SUDOKU_H
#include <iostream>
#include <vector>
#include "Windows.h"
#include <cstdlib>


namespace sudoku{

    class Sudoku {
        public:


        std::vector<std::vector<int>> board;
        Sudoku();
        void initBoard();
        void printBoard();
        void setDifficulty();
        void isLineValide();
        void isColumnValide();
        void isSquareValide();
        void play();
        



        private:
        void addNumber();












    };




}




















#endif SUDOKU_H