#include <iostream>
#include <algorithm>
using namespace std;

int k, n;
long long line[10005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> k >> n;
    long long maxLen = 0;
    for (int i = 0; i < k; i++) {
        cin >> line[i];
        maxLen = max(maxLen, line[i]);
    }
    long long start = 1;
    long long end = maxLen;
    long long ans = 0;
    while (start <= end) {
        long long mid = (start + end) / 2;
        long long cnt = 0;
        for (int i = 0; i < k; i++) {
            cnt += line[i] / mid;
        }
        if (cnt >= n) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    cout << ans;
}