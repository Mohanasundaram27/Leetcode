public class Solution {
    public boolean isPalindrome(String s) {
        return s.replaceAll("[^A-Za-z0-9]", "").toLowerCase().equals(new StringBuilder(s.replaceAll("[^A-Za-z0-9]", "").toLowerCase()).reverse().toString());
    }
}