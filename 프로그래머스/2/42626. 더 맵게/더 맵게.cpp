#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < scoville.size(); i++) {
        pq.push(scoville[i]);
    }
    while (!pq.empty()) {
    if(pq.top() >= K) {
        break;
    }
    if(pq.size() < 2) {
        return -1;
    }
	int sm1 = pq.top();
	pq.pop();
	int sm2 = pq.top();
	pq.pop();
	int sum = sm1 + sm2 * 2;
	pq.push(sum);
	answer++;
}
    return answer;
}