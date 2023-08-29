#include <bits/stdc++.h>

using namespace std;

int wordsCount;
set <char> letters;
set <char> digits;
set <char> others;

void counter(string line) {
    wordsCount = 1;

    int n = line.length();
    for (int i = 0;i < n; i++) {
        if (line[i] == ' ') wordsCount++;
        else if (line[i] >= 'A' && line[i] <= 'Z') letters.insert(line[i]);
        else if (line[i] >= 'a' && line[i] <= 'z') letters.insert(line[i]);
        else if (line[i] >= '0' && line[i] <= '9') digits.insert(line[i]);
        else others.insert(line[i]);
    }
}

void printResult() {
    cout << "Words: " << wordsCount << endl;
    cout << "Letters: " << letters.size() << endl;
    cout << "Digits: " << digits.size() << endl;
    cout << "Others: " << others.size() << endl;
}

int main() {
    freopen("./input.txt", "r", stdin);

    string line;
    getline(cin, line);
    cout << line << endl;

    counter(line);
    printResult();
}
