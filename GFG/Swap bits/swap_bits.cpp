int swapBits(int x, int p1, int p2, int n)
    {
        bitset<20> bset(x);
        int in=p1-n;
        for(int i=p1,j=p2;n>0;i++,j++,n--)
        {
            bset[i]=bset[i]^bset[j];
            bset[j]=bset[i]^bset[j];
            bset[i]=bset[i]^bset[j];
        }
        return bset.to_ulong();
        
    }
