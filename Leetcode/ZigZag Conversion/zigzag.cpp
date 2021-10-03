 string convert(string s, int numRows) {
        #define n numRows
        vector<vector<char>>v(n);
        int ct=0,r=0;
        if(n>1){
        while(ct<s.size())
        {
            if(r==0)
            {
                for(r=0; r<n&&ct<s.size(); r++)
                    v[r].push_back(s[ct++]);
                
            }
            if(r==n)
            {
                for(r=n-2;r>0&&ct<s.size(); r--)
                    v[r].push_back(s[ct++]);
            }
        }
          ct=0;
         for(int i=0;i<n;i++)
           for(auto t1:v[i])
             s[ct++]=t1;
        }
        return s;
    }
