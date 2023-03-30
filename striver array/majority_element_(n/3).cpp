class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      
    int num1 = -1 , num2 = -1 , c1 = 0 , c2 =0 ;
        for(auto &element : nums)
        {
            if(element == num1)
                c1++;
            else if(element ==num2)
                c2++;
            else if (c1 == 0)
            { num1 = element ;
              c1 = 1 ;
            }
            else if(c2==0)
            {
              num2 =element ;
              c2 = 1;
            }
            else
            {  c1--;
               c2-- ;
            }   
    }
        int count1 =0;
        int count2 =0;
        for(auto &it : nums)
        {
            if(it == num1 )
            count1++;
            
           else if(it==num2)
            count2++;
        }
        vector<int>v;
        if(count1 > (nums.size())/3)
            v.push_back(num1);
        if(count2 > (nums.size())/3)
            v.push_back(num2);
        return v ;
}
};