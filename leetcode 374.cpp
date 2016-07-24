int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n;
        while(low < high){
            int mid = low + ( high - low ) / 2;
            switch(guess(mid)){
                case 1 : low = mid + 1;break;
                case 0: return mid;
                case -1 : high = mid;break;
            }
        }
        return low;
    }
};