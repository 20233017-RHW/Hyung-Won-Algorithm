#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int a = arr[0];
    answer.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++) {
        if (a != arr[i]) {
            answer.push_back(arr[i]);
        }
        a = arr[i];
    }

    return answer;
}