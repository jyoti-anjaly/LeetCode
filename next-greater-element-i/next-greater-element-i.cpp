class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> map;
        for(int i=0;i<nums2.size();i++){
            map[nums2[i]]=-1;
        }
        for(int i=0;i<nums2.size();i++){
            while(!st.empty() && nums2[st.top()]<nums2[i]){
                map[nums2[st.top()]]=nums2[i];
                st.pop();
            }
            st.push(i);
        }
        
        for(int i=0;i<nums1.size();i++){
            nums1[i]=map[nums1[i]];
        }
        return nums1;
    }
};