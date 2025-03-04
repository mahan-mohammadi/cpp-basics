#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cin >> str;
    int i = 0;
    int sum = 0;
    int num = 0;
    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9') {
            num = 0;
            while(str[i] && str[i] >= '0' && str[i] <= '9') {
                num = num * 10 + (str[i] - '0');
                i++;
            }
            i--;
            sum += num;
        }
        
        i++;
    }
    cout << sum;
}
