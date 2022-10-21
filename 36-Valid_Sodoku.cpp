# include "universal_headers.hpp"

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // the main idea is to use a map to track 
        //  the number of values of each row  each column and
        // each sub-group


        int total_size=(int)board.size();        
        int sub_num = total_size/3;

        // define the map for each row and each column
        std::vector<std::unordered_map<char, int>> row_check(total_size), column_check(total_size);
        // a two dimensional vector for group check
        std::vector<std::vector<std::unordered_map<char, int>>> group_check(sub_num, std::vector<std::unordered_map<char, int>>(sub_num));

        for(int row_ind=0; row_ind<total_size; row_ind++)
        {
            for(int col_ind=0; col_ind<total_size; col_ind++)
            {
                if(board[row_ind][col_ind]!='.')
                {
                    row_check[row_ind][board[row_ind][col_ind]]++;
                    if(row_check[row_ind][board[row_ind][col_ind]]>1)
                        return false;
                    column_check[col_ind][board[row_ind][col_ind]]++;
                    if(column_check[col_ind][board[row_ind][col_ind]]>1)
                        return false;
                    group_check[row_ind/3][col_ind/3][board[row_ind][col_ind]]++;
                    if(group_check[row_ind/3][col_ind/3][board[row_ind][col_ind]]>1)
                        return false;
                }

            }
        }

        return true;
    }
};