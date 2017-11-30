class Solution:
    def lengthOfLongestSubstring(self, s):
        flag=True
        l_string=""
        l_len=0
        temp_str=""
        for i in range(len(s)):
            for j in range(i,len(s)):
                if s[j] not in temp_str:
                    temp_str=temp_str+s[j]
                else:
                    break
            if(len(temp_str)>l_len):
                l_len=len(temp_str)
                l_string=temp_str
            flag=True
            temp_str=""
        print(temp_str)
        return l_len