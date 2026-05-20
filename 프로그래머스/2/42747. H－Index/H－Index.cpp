#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
   int answer = 0;
sort(citations.begin(), citations.end());
answer = citations.back();
for (int i = 0; i < 1000; i++) {
    int maxsize = 0;
    int minsize = 0;
    for (int j = 0; j < citations.size(); j++) {
        if (citations[j] >= i) {
            maxsize++;
        }
    }
    if (maxsize >= i) {
        answer = i;
    }
}
return answer;
return answer;
}