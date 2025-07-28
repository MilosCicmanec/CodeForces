#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int bin_search(int target, vector<int> array) {
    int l = 0, r = array.size() - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (array[mid] == target) return mid;
        else if (array[mid] > target) r = mid - 1;
        else l = mid + 1;
    }
    return -1;
}
bool teleporting(vector<int> arr,int starting_pos){
    int cur = arr[starting_pos];
    int time = 1;
    for (int i = starting_pos+1; i < arr.size(); i++) {
        //cout << cur << time << time + arr[i] - cur<< endl;
        if (time + arr[i] - cur -1<= cur) {
            time = time + arr[i] - cur;
            cur = arr[i];
        } else {
            return false;
        }
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    for (int x = 0; x< t; x++) {
        int n,k;
        cin >> n >> k;
        k--; // convert it to index of a list
        vector<int> nums(n);
        for (int i= 0; i < n; i++) {
            cin >> nums[i];
        }
        // now we have the input handled
        // now we sort and binsearch
        k = nums[k];
        sort(nums.begin(),nums.end());
        int start = bin_search(k,nums);
        if (teleporting(nums, start) == true) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
