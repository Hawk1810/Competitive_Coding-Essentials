string longestCommonPrefix (vector < string > &strs)
{
  int n = 1000,ct=0;
  bool flag = 0;
for (auto t:strs)
    {
      if (t.size () < n)
	n = t.size ();
    }
  for (int i = 0; i < n; i++)
    {
      char prev = strs[0][i];
    for (auto t:strs)
	{
	  if (t[i] != prev)
	    {
	      flag = 1;
	      break;
	    }
	  cout << prev;
	  prev = t[i];
	}
      if (flag == 1)
	break;
      strs[0][ct++] = prev;
    }
  strs[0].resize (ct);

  return strs[0];
}

