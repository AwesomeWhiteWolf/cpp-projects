#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    char character = '1';
    int indexOfResult;
    vector <char> alphabet = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    vector <char> result;
    while (character != '0') {
        cin >> character;
        for (int i = 0; i < alphabet.size(); i++) {
            if (alphabet[i] == character) {
                switch (i) {
                case 23:
                    result.push_back(alphabet[0]);
                    break;
                case 24:
                    result.push_back(alphabet[1]);
                    break;
                case 25:
                    result.push_back(alphabet[2]);
                    break;
                default:
                    indexOfResult = i + 1;
                    result.push_back(alphabet[indexOfResult]);
                    break;
                }
            }
        }
    }
    for (char c : result) {
        cout << c << " ";
    }
    cout << endl;
    for (char c : result) {
        cout << c;
    }
    cout << endl;
}
