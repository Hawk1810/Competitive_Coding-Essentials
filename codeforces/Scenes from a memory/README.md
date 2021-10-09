<h2>1562 B Scenes from a memory</h2><hr><div><p>During the hypnosis session, Nicholas suddenly remembered a positive integer n, which doesn't contain zeros in decimal notation.

Soon, when he returned home, he got curious: what is the maximum number of digits that can be removed from the number so that the number becomes not prime, that is, either composite or equal to one?

For some numbers doing so is impossible: for example, for number 53 it's impossible to delete some of its digits to obtain a not prime integer. However, for all n in the test cases of this problem, it's guaranteed that it's possible to delete some of their digits to obtain a not prime number.

Note that you cannot remove all the digits from the number.

A prime number is a number that has no divisors except one and itself. A composite is a number that has more than two divisors. 1 is neither a prime nor a composite number.</p>



<p>&nbsp;</p>

<pre><strong>Input:</strong> Each test contains multiple test cases.

The first line contains one positive integer t (1≤t≤103), denoting the number of test cases. Description of the test cases follows.

The first line of each test case contains one positive integer k (1≤k≤50) — the number of digits in the number.

The second line of each test case contains a positive integer n, which doesn't contain zeros in decimal notation (10k−1≤n<10k). It is guaranteed that it is always possible to remove less than k digits to make the number not prime.

It is guaranteed that the sum of k over all test cases does not exceed 104.

<strong>Output:</strong> For every test case, print two numbers in two lines. In the first line print the number of digits, that you have left in the number. In the second line print the digits left after all delitions.

If there are multiple solutions, print any.
<p>&nbsp;</p>
</pre><p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> 
7
3
237
5
44444
3
221
2
35
3
773
1
4
30
626221626221626221626221626221

<strong>Output:</strong>
2
27
1
4
1
1
2
35
2
77
1
4
1
6

</pre>


<p>&nbsp;</p>

</div>
