public class Solution {
    public int numTrees(int n) {
        int[] numTrees = new int[n+1];
        numTrees[0] = 1;
        numTrees[1] = 1;
        for(int i=2;i <= n;++i){
            numTrees[i] = 0;
            for(int j = 0;j < i;++j){
                numTrees[i] += numTrees[j] * numTrees[i-1-j];
            }
        }
        return numTrees[n];
    }
}