#include <bits/stdc++.h>
using namespace std;

string convertToLower(string str) {

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }

    return str;
}

int main() {

    string str;

    priority_queue<string> pq;

    set<string> st;
    set<string>::iterator it;

    while (cin >> str) {

        regex e ("[a-zA-Z]+");
        smatch sm;

        regex_search(str, sm, e);

        for (int i = 0; i < sm.size(); i++) {
            pq.push(convertToLower(sm[i]));
        }
    }

    while(!pq.empty()){
        string str = pq.top();
        st.insert(str);
        pq.pop();
    }

    for(it = st.begin(); it != st.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
