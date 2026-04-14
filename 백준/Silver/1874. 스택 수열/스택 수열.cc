#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int num;
    int cnt = 1;
    int arr[100001];
    stack<int> st;
    cin >> num;

    for (int i = 0; i < num; i++) cin >> arr[i];

    string result;

    for (int i = 0; i < num; i++) {
        int a = arr[i];

        while (cnt <= a) {
            st.push(cnt);
            result += "+\n";
            cnt++;
        }

        if (st.empty() || st.top() != a) {
            cout << "NO\n";
            return 0;
        }

        st.pop();
        result += "-\n";
    }

    cout << result;
    return 0;
}
