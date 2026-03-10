#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    set<string> unheard;        // 듣도 못한 사람
    vector<string> result;       // 듣보잡 저장

    // 듣도 못한 사람 입력
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        unheard.insert(name);    // 중복 자동 제거
    }

    // 보도 못한 사람 입력
    for (int i = 0; i < m; i++) {
        string name;
        cin >> name;
        if (unheard.count(name)) { // set에 있으면
            result.push_back(name);
        }
    }

    sort(result.begin(), result.end()); // 사전 순 정렬

    cout << result.size() << "\n";
    for (auto& name : result)
        cout << name << "\n";
}