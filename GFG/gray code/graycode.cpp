   vector<string> graycode(int n)
    {
        vector<string> ans;
        bitset<32>a;
        for(int i=0;i<(1<<n);i++)
        {
        a=i^(i>>1);
        string s=a.to_string();
        s.erase(s.begin(),s.begin()+32-n);
        ans.push_back(s);
        }
        return ans;
    }
