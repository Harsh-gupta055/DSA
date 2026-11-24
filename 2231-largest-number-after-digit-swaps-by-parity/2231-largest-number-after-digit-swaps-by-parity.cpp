class Solution {
public:
    int largestInteger(int num) {
      vector<int> even;
    vector<int> odd;
    vector<int> arr;
    int ans = 0;

    while(num > 0) {
        int d = num % 10;
        num /= 10;
        arr.push_back(d);
    }

    reverse(arr.begin(), arr.end());

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0)
            even.push_back(arr[i]);
        else
            odd.push_back(arr[i]);
    }

    sort(even.begin(), even.end()) ;
    reverse(even.begin(), even.end()) ;

    sort(odd.begin(), odd.end() ) ;
    reverse(odd.begin(), odd.end() ) ;


    int e = 0, o = 0;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0)
            ans = ans * 10 + even[e++];
        else
            ans = ans * 10 + odd[o++];
    }

    return ans;
    }
};