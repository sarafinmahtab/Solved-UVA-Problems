#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2;

    while (getline(cin, s1), getline(cin, s2)) {

        int count1[128], count2[128];

        for (int ch = 'a'; ch <= 'z'; ch++) {
            count1[ch] = count2[ch] = 0;
        }

        for (int i = 0; i < s1.size(); i++) {
            ++count1[s1[i]];
        }

        for (int i = 0; i < s2.size(); i++) {
            ++count2[s2[i]];
        }

        string matched = "";

        for (int ch = 'a'; ch <= 'z'; ch++) {

            while (count1[ch] > 0 && count2[ch] > 0) {
                matched += (char) ch;
                --count1[ch];
                --count2[ch];
            }
        }

        cout << matched << '\n';
    }
}

/*
bool contains(string& str, char ch) {

    if (ch >= 65 && ch <= 90) {
        return false;
    }

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ch) {
            return true;
        }
    }

    return false;
}

int main() {

    string str1;
    string str2;

    while(getline(cin, str1), getline(cin, str2)){

        string matchedString = "";

        if (str1.size() < str2.size()) {
            for (int i = 0; i < str1.size(); i++) {

                if (contains(str2, str1[i])) {
                    matchedString += str1[i];
                }
            }
        } else {
            for (int i = 0; i < str2.size(); i++) {

                if (contains(str1, str2[i])) {
                    matchedString += str2[i];
                }
            }
        }

        sort(matchedString.begin(), matchedString.end());

        cout << matchedString << '\n';
    }

    return 0;
}
*/
