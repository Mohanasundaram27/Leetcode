import java.util.HashSet;
import java.util.Set;

class Solution {
    public int lengthOfLongestSubstring(String s) {
        int start = 0;
        int end = 0;
        int maxlen = 0;
        Set<Character> seen = new HashSet<>();
        while (end < s.length()) {
            char c = s.charAt(end);
            while (seen.contains(c)) {
                seen.remove(s.charAt(start));
                start += 1;
            }
            seen.add(c);
            int windowSize = end - start + 1;
            maxlen = Math.max(maxlen, windowSize);
            end += 1;
        }
        return maxlen;
    }
}
