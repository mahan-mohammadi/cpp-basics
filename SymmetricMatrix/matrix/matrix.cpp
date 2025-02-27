
#include <iostream>
#define MAX 10
using namespace std;
int main()
{
    int size;
    bool isSymemetric = true;
    int matrix[MAX][MAX];

    cout << "Enter the size of the matrix: ";
    cin >> size;
    
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 1; i <= size; i++)
        for (int j = 1; j <= size; j++)
            if (i != j)
                if (matrix[i][j] != matrix[j][i]) 
                    isSymemetric = false;
                

    if (isSymemetric)
        cout << "\nThe matrix is symmetric";
    else
        cout << "\nThe matrix is not symmetric";
}
