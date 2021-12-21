#include <bits/stdc++.h>
using namespace std;
void printmatrix(int row, vector<vector<int>> matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void solution()
{

    int row;
    cin >> row;
    int col;
    cin>>col;
    vector<int> a(row);
    vector<vector<int>> matrix(col, a);
    int temp;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> matrix[i][j];
        }
    }
    printmatrix(row, matrix);
}
int main()
{
    int t;
    // t = 1;
    cin >> t;
    while (t--)
    {
        solution();
        cout << endl;
    }
}
