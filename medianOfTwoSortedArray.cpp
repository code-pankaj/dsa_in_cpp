class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double m = nums1.size();
        double n = nums2.size();
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        double totalSize = m+n;
        double remainder = fmod(totalSize, 2);
        if(remainder!=0){
            m = nums1.size();
            return nums1[((m+1)/2)-1] ;
        }
        else{
            m = nums1.size();
            double element1 = nums1[(m-2)/2];
            double element2 = nums1[m/2];
            double median = ( element1 + element2 ) / 2 ;
            return median;
        }
    }
};