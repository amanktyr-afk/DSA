class Solution {
public:
    vector<long long> absDifOne(long long N) {
        vector<long long> ans;

        if(N <= 9) return {-1};

        queue<long long> q;

        // start from 1 to 9
        for(int i = 1; i <= 9; i++) {
            q.push(i);
        }

        while(!q.empty()) {
            long long num = q.front();
            q.pop();

            if(num > N) continue;

            if(num >= 10) ans.push_back(num);

            int last = num % 10;

            if(last > 0)
                q.push(num * 10 + (last - 1));

            if(last < 9)
                q.push(num * 10 + (last + 1));
        }

        sort(ans.begin(), ans.end());

        if(ans.empty()) return {-1};
        return ans;
    }
};