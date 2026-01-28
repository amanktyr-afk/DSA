
class Solution {
public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {

        vector<bool> v(leaves + 1, 0);

        for (int i = 0; i < N; i++) {
            
            if (frogs[i] <= leaves && v[frogs[i]])
                continue;

            for (int j = frogs[i]; j <= leaves; j += frogs[i]) {
                v[j] = 1;
            }
        }

        int count = 0;
        for (int i = 1; i <= leaves; i++) {
            if (v[i]==0) count++;
        }

        return count;
    }
};