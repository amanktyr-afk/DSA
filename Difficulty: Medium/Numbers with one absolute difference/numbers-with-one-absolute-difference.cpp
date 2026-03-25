class Solution {
public:
//by using vector not queue
    vector<long long> absDifOne(long long N) {
        vector<long long> ans;
        
        if(N <= 9) return {-1};

        vector<long long> v;

        // start from 1 to 9
        for(int i = 1; i <= 9; i++) {
            v.push_back(i);
        }

        int idx = 0;

        while(idx < v.size()) {
            long long num = v[idx++];   // like pop from queue

            if(num > N) continue;

            if(num >= 10) ans.push_back(num);

            int last = num % 10;

            // generate next numbers
            if(last > 0)
                v.push_back(num * 10 + (last - 1));

            if(last < 9)
                v.push_back(num * 10 + (last + 1));
        }

        sort(ans.begin(), ans.end());

        return ans.empty() ? vector<long long>{-1} : ans;
    }
};