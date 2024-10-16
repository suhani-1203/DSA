class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        vector<int> ans;
        int fl=INT_MIN,cl=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=x){
                if(arr[i]>fl)
                    fl=arr[i];
            }
            if(arr[i]>=x){
                if(arr[i]<cl)
                    cl=arr[i];
            }
        }
        if(cl==INT_MAX)
           cl=-1;
        if(fl==INT_MIN)
           fl=-1;
        ans.push_back(fl);
        ans.push_back(cl);
        
        return ans;
    }
};
