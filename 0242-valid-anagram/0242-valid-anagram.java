class Solution {
    public boolean isAnagram(String s, String t) {
        char ts[]=s.toCharArray();
        char tt[]=t.toCharArray();
        Arrays.sort(ts);
        Arrays.sort(tt);
        return Arrays.equals(ts,tt);
    }
}