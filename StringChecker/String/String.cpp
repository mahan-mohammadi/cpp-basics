
#include <iostream>
#include <string>
using namespace std;
#define SIZE 10
int main()
{
    string str;
    cin >> str;
    int level=0;
    int levels[SIZE] = { 0 };
    int max = 0;
    int sum = 0;
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] == '[') {
            level++;
            if (level > max) {
                max = level;
            }
        }
        else if (str[i] == ']') {
            level--;
        }
        else if (str[i] == ',') {
            continue;
        }
        else{
            int num = 0;
            while (str[i] != 0 && str[i] >= '0' && str[i] <= '9') {
                num = num * 10 + (str[i] - '0');
                i++;
            }
            i--;
            levels[level] += num;
        }
        
       
    }
    for (int i = max; i >= 1; i--) {

        sum += levels[i];
        cout << sum << endl;
    }
    
    
}