class Solution {
public:
    int getKthElement(const vector<int>nums1,const vector<int>nums2,int k){
        int m = nums1.size();
        int n = nums2.size();
        int index1=0,index2=0;
        while(true){
            if(index1 == m)
            return nums2[index2+k-1];
            if(index2 == n)
            return nums1[index1+k-1];
            if(k == 1)
            return min(nums1[index1],nums2[index2]);


            int newindex1 = min(index1+k/2-1,m-1);
            int newindex2 = min(index2+k/2-1,n-1);
            int prvot1 = nums1[newindex1];
            int prvot2 = nums2[newindex2];
            if(prvot1<=prvot2)
            {
                k-=newindex1-index1+1;
                index1 = newindex1+1;
            }
            else
            {
                k-=newindex2-index2+1;
                index2 =newindex2+1;
            }
        }
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int total = nums1.size()+nums2.size();
       if(total%2==1)
       return getKthElement(nums1,nums2,total/2+1);
       else
       return (getKthElement(nums1,nums2,total/2)+getKthElement(nums1,nums2,total/2+1))/2.0;
    }
};
