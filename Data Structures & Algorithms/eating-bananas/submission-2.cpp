class Solution {
public:

 bool isFeasible(vector<int>& piles, int k, int h) {
        long long hours = 0;
        for (int pile : piles) {
            hours += ceil((double)pile / k);
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
          int lo = 1;
        int hi = *max_element(piles.begin(), piles.end());
        int result = hi;

        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;

            if (isFeasible(piles, mid, h)) {
                result = mid;   // mid works, try smaller
                hi = mid - 1;
            } else {
                lo = mid + 1;   // mid too slow, try faster
            }
        }

        return result;
    }
};
