#include <iostream>
using namespace std;

int main()
{
    int matrix[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int row = 0;
    int col = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            if (matrix[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    int cnt = 0;
    if (row > 2)
    {
        while (row > 2)
        {
            row--;
            cnt++;
        }
    }
    else
    {

        while (row < 2)
        {
            row++;
            cnt++;
        }
    }

    if (col > 2)
    {
        while (col > 2)
        {
            col--;
            cnt++;
        }
    }
    else
    {

        while (col < 2)
        {
            col++;
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
