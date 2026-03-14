/**
    Exercise 657: Robot Return to Origin
    Submission Date: Mar 10, 2026 13:58
*/

#include <iostream>
#include <string>

using namespace std;

bool judgeCircle(string moves) {
    int pos[2] = {0,0};

    for (char c : moves) {
        switch (c) {
            case 'R':
                pos[0]++;
                break;
            case 'L':
                pos[0]--;
                break;
            case 'U':
                pos[1]++;
                break;
            case 'D':
                pos[1]--;
                break;
        }
    }

    return pos[0] == 0 && pos[1] == 0;
}

int main() {
    cout << judgeCircle("UD");
}