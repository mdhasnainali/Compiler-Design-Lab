#include <bits/stdc++.h>

using namespace std;

set <char> letters;
set <char> digits;
set <char> others;

void separator(string line) {
    int n = line.length();
    for (int i = 0;i < n; i++) {
        if (line[i] == ' ') continue;
        else if (line[i] >= 'A' && line[i] <= 'Z') letters.insert(line[i]);
        else if (line[i] >= 'a' && line[i] <= 'z') letters.insert(line[i]);
        else if (line[i] >= '0' && line[i] <= '9') digits.insert(line[i]);
        else others.insert(line[i]);
    }
}

void printResult() {
    cout << "Letters: ";
    for(auto latter: letters) cout << latter << " ";
    cout<<endl;
    cout << "Digits: ";
    for (auto digit : digits) cout << digit << " ";
    cout << endl;
    cout << "Others: ";
    for (auto other : others) cout << other << " ";
    cout << endl;
}

int main() {
    freopen("./input.txt", "r", stdin);

    string line;
    getline(cin, line);
    cout << line << endl;

    separator(line);
    printResult();
}
