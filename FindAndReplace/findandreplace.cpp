#include <iostream>
using namespace std;
int stringlen(char s[]) {
    int i = 0;
    while (s[i]) {
        i++;
    }
    return i;
}
int main()
{
    char str[500];
    cin >> str;
    char f[100];
    cin >> f;
    char r[100];
    cin >> r;

    int strl = stringlen(str);
    int fl = stringlen(f);
    int rl = stringlen(r);

    int i = 0;
    int j = 0;
    int firstindex = -1;
    
    int shift = rl-fl;

    while (str[i]) {
        j = 0;
        bool found = false;
        while (j < fl && str[i + j] == f[j]) {
            j++;
        }
        if (j == fl) {
            firstindex = i;
            found = true;
        }
        if (found) {
            if (shift>0) {
                for (int k = strl; k >= firstindex+fl; k--) {
                    str[k + shift] = str[k];
                }
            }
            else if (shift<0) {
                for (int k = firstindex + fl; k <= strl; k++) {
                    str[k + shift] = str[k];
                }
            }
            
            for (int k = 0; k < rl; k++) {
                str[firstindex + k] = r[k];
            }
            
            strl += shift;
            str[strl] = '\0';
            i = firstindex  + rl;
            
        }
        if(!found)
            i++;
        
    }

    cout << str;

}