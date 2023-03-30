sliding window

int totalToys(vector<int>& toys) {
        int i=0,j=0;
        int maxi=1;
        unordered_map<int,int> mp;
        while (j<toys.size())
        {
            mp[toys[j]]++;
            while (mp.size()>2)
            {
                mp[toys[i]]--;
                if (mp[toys[i]]==0)
                    mp.erase(toys[i]);
                i++;
            }
            if (mp.size()<=2)
                maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi;
    }