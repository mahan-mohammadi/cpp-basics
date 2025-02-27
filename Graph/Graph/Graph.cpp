

#include <iostream>
#define SIZE 10
using namespace std;
int main(){
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    int arr[SIZE][SIZE] = { 0 };
    cout << endl;
    if(rows<1)
		cout << "invalid" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if (i == j) {
                continue;
            }
            int state=0;
            cout << "Is there a path between two vertices (" << i << "," << j << ") If there is, enter the number 1, otherwise, enter the number 0: ";
			do
            {
                cin >> state;
            } while (state != 1 && state != 0);
            arr[i][j] = state;
        }
    }
    cout << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if (arr[i][j] == 1) {
                cout << "There is a path between (" << i << "," << j << ")";
            }
        }
        cout << endl;
    }
}
