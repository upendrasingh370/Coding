class Solution:
    def findMedianSortedArrays(self, nums1, nums2):
        lst=[]
        lgt=0
        i=0
        j=0
        lst=nums1+nums2
        lst.sort()
        lgt=len(lst)
        print(lgt)
        print(lst)
        if(lgt%2==0):
            print ("even")
            return float((lst[int(lgt/2)]+lst[int((lgt/2)-1)])/2)
        else:
            if(lgt==1):
                return float(lst[0])
            else:
                return float(lst[int((lgt-1)/2)])
                
            
        
        
                
            
        