#include <bits/stdc++.h>
using namespace std;
vector<string> answer;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string start = "";
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        int size = start.size();
        if (size == 8) {
            answer.push_back(start);
            start = "";
        }
        if (v[i] == "BOOL") {
            if (start.empty()) {
                start += "#";
            }
            else {
                start += "#";
            }
        }
        else if (v[i] == "SHORT") {
            if (start.empty()) {
                start += "##";
            }
            else {
                int temp = 2 - (size % 2);
                if (temp % 2 == 0) {
                    start += "##";
                    continue;
                }
                for (int i = 0; i < temp; i++) {
                    start += ".";
                }
                if (start.size() == 8) {
                    answer.push_back(start);
                    start = "";
                    start += "##";
                }
                else
                    start += "##";
            }
        }
        else if (v[i] == "FLOAT") {
            if (start.empty()) {
                start += "####";
            }
            else {
                int temp = 4 - (size % 4);
                if (temp % 4 == 0) {
                    start += "####";
                    continue;
                }
                for (int i = 0; i < temp; i++) {
                    start += ".";
                }
                if (start.size() == 8) {
                    answer.push_back(start);
                    start = "";
                    start += "####";
                }
                else start += "####";
            }
        }
        else if (v[i] == "INT") {
            if (start.empty()) {
                answer.push_back("########");
            }
            else {
                int temp = 8 - (size % 8);
                for (int i = 0; i < temp; i++) {
                    start += ".";
                }
                answer.push_back(start);
                start = "";
                start += "########";
            }
        }
        else if (v[i] == "LONG") {
            if (start.empty()) {
                answer.push_back("########");
                answer.push_back("########");
            }
            else {
                int temp = 8 - size;
                for (int i = 0; i < temp; i++) {
                    start += ".";
                }
                answer.push_back(start);
                start = "";
                answer.push_back("########");
                start += "########";
            }
        }
        if (i == n - 1) {
            answer.push_back(start);
        }
    }
    if (answer.size() > 16) {
        cout << "HALT";
        return -1;
    }
    if (answer[answer.size() - 1].size() != 8) {
        int s = 8 - answer[answer.size() - 1].size();
        string t = "";
        for (int i = 0; i < s; i++) {
            t += ".";
        }
        answer[answer.size() - 1].append(t);
    }
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << "\n";
    }
}