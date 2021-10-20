import java.math.*;

class SudokuSolver {
    int[][] board = { 
        { 7, 8, 0, 4, 0, 0, 1, 2, 0 }, 
        { 6, 0, 0, 0, 7, 5, 0, 0, 9 }, 
        { 0, 0, 0, 6, 0, 1, 0, 7, 8 },
        { 0, 0, 7, 0, 4, 0, 2, 6, 0 }, 
        { 0, 0, 1, 0, 5, 0, 9, 3, 0 }, 
        { 9, 0, 4, 0, 6, 0, 0, 0, 5 },
        { 0, 7, 0, 3, 0, 0, 0, 1, 2 }, 
        { 1, 2, 0, 0, 0, 7, 4, 0, 0 }, 
        { 0, 4, 9, 2, 0, 6, 0, 0, 7 } 
    };

    int NO_VALUE = 0;
    int[] arrOfValidNumbers = {1, 2, 3, 4, 5, 6,7,8, 9};

    // Solves a pre-made sudoku using backtracking and recursion
    public boolean solve() {
        int[] emptyCell = findEmptyCell();

        // if the value isn't 1 or bigger (to 9), then the value is empty
        if (!(emptyCell[0] >= 1)) {
            return true;
        }

        int row = emptyCell[0];
        int col = emptyCell[1];

        for (int number : arrOfValidNumbers) {
            if (validNumberInBoard(emptyCell, number)) {
                board[row][col] = number;

                if (solve()) {
                    return true;
                }
                board[row][col] = NO_VALUE;
            }
        }

        return false;
    }

    public int[] findEmptyCell() {
        int[] emptyCell = new int[2];

        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                if (board[row][col] == NO_VALUE) {
                    emptyCell[0] = row;
                    emptyCell[1] = col;

                    return invalidCell;
                }
            }
        }

        return invalidCell;
    }

    public boolean validNumberInBoard(int[] emptyCell, int number){
        //Check row
        for(int i = 0; i < 9; i++){
            if(board[emptyCell[0]][i] == number && emptyCell[1] != number){
                return false;
            }
        }


        //Check column
        for(int i = 0; i < 9; i++){
            if(board[i][emptyCell[1]] == number && emptyCell[0] != number){
                return false;
            }
        }

        //check 3x3 square
        int boxX = Math.floor(emptyCell[1] / 3);
        int boxY = Math.floor(emptyCell[0] / 3);

        for(int i = boxY*3; i < boxY*3 + 3; i++){
            for(int j = boxX*3; boxY*3 + 3; j++){
                if(board[i][j] == number){
                    if(i != emptyCell[0] && j != emptyCell[1]){
                        return false;
                    }
                }
            }
        }

        return true;
    }

    /**
     * Parses a 9 x 9 array of integrs into a Sudoku game. Note that the first
     * indented array is the first row.
     */
    protected void parseBoard() {
        for (int i = 0; i < board.length; i++) {
            if (i % 3 == 0 && i != 0) {
                System.out.println("- - - - - - - - - - - - - ");
            }

            for (int j = 0; j < board[0].length; j++) {
                if (j % 3 == 0 && j != 0) {
                    System.out.print(" | ");
                }

                if (j == 8) {
                    System.out.println(board[i][j]);
                } else {
                    System.out.print(board[i][j] + " ");
                }
            }
        }
        System.out.println("________________________");
    }

}
