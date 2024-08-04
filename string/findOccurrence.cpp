class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans=0;int j = 0,k;
        for(int i = 0; i < haystack.length(); i++){
            if(haystack[i] == needle[j]){
                ans = i;
                k = i;
                while(haystack[k] == needle[j] && j < needle.length() && k < haystack.length()){
                    k++;j++;
                }
            }
            if(j == needle.length()){
                return ans;
            }
            else{
                j = 0;
            }
        }
        return -1;
    }
};
