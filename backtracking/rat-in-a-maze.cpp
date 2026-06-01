#include <iostream>
#include <vector>

using namespace std;

void getAns(vector<vector<int>> &board, int row, int col, vector<string> &ans, string path, vector<vector<bool>> &visited)
{
    if (row >= board.size() || col >= board.size() || row < 0 || col < 0 || board[row][col] == 0 || visited[row][col] == true)
        return;

    if (row == board.size() - 1 && col == board.size() - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[row][col] = true;

    getAns(board, row + 1, col, ans, path + "D", visited);
    getAns(board, row, col + 1, ans, path + "R", visited);
    getAns(board, row - 1, col, ans, path + "U", visited);
    getAns(board, row, col - 1, ans, path + "L", visited);

    visited[row][col] = false;
}

int main()
{
    int row = 0, col = 0;
    vector<vector<int>> board = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 0}};

    vector<string> ans;
    string path = "";

    vector<vector<bool>> visited(board.size(), vector<bool>(board.size(), false));

    getAns(board, row, col, ans, path, visited);

    for (auto p : ans)
    {
        cout << p << endl;
    }

    return 0;
}