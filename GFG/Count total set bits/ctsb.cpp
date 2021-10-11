Count total set bits int countSetBits(int n)
    {
      n++;
      int cnt=n/2,Po2=2;
      while(Po2<=n)
      {
          cnt+=((n/Po2)/2)*Po2;
          cnt+=(n/Po2)&1? n%Po2 : 0;
          Po2<<=1;
      }
      return cnt;
    }
