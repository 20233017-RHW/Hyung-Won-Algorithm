#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> v;
    for (int i = 0; i < numbers.size(); i++) {
       string a = to_string(numbers[i]);
        v.push_back(a);
    }
    sort(v.begin(), v.end(), [](string a, string b) {
        return a + b > b + a;
    });
    if (v[0] == "0") return "0";
    for (int i = 0; i < v.size(); i++) {
     answer += v[i];
    }
    return answer;
}