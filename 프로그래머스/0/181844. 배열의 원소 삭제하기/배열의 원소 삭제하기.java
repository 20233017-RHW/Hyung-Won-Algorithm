import java.util.*;
class Solution {
    public int[] solution(int[] arr, int[] delete_list) {
        HashSet<Integer> deleteSet = new HashSet<>();
        for(int i = 0; i < delete_list.length; i++) {
            deleteSet.add(delete_list[i]);
        }
        ArrayList<Integer> result = new ArrayList<>();
        for(int i = 0; i < arr.length; i++) {
            if(!deleteSet.contains(arr[i])) {
                result.add(arr[i]);
            }
        }
        int[] answer = new int[result.size()];
        for(int i = 0; i < result.size(); i++) {
            answer[i] = result.get(i);
        }
        return answer;
    }
}