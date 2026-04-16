class Solution {
    public boolean isAnagram(String s, String t) {
        int sLen = s.length();
        int tLen = t.length();

        if(sLen != tLen)
            return false;
        
        int[] sArray = new int[26];
        int[] tArray = new int[26];

        for(int i=0; i<sLen; i++){
            sArray[s.charAt(i)-'a']++;
            tArray[t.charAt(i)-'a']++;
        }

        for(int i=0; i<26; i++){
            if(sArray[i] != tArray[i])
                return false;
        }

        return true;
    }
}
