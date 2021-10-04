<h2> 4Sum</h2><h3>Medium</h3><hr><div><p>A bracket is considered to be any one of the following characters: (, ), {, }, [, or ].

Two brackets are considered to be a matched pair if the an opening bracket (i.e., (, [, or {) occurs to the left of a closing bracket (i.e., ), ], or }) of the exact same type. There are three types of matched pairs of brackets: [], {}, and ().

A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. For example, {[(])} is not balanced because the contents in between { and } are not balanced. The pair of square brackets encloses a single, unbalanced opening bracket, (, and the pair of parentheses encloses a single, unbalanced closing square bracket, ].

By this logic, we say a sequence of brackets is balanced if the following conditions are met:

It contains no unmatched brackets.
The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.
Given  strings of brackets, determine whether each sequence of brackets is balanced. If a string is balanced, return YES. Otherwise, return NO.

</p>
<p><strong>Function Description</strong></p>

<p>Complete the function isBalanced in the editor below.

isBalanced has the following parameter(s):

string s: a string of brackets</p>
<p><strong>Returns</strong></p>
<p>string: either YES or NO</p>

<p><strong>Input Format</strong></p>
<p>The first line contains a single integer , the number of strings.
Each of the next n  lines contains a single string , a sequence of brackets.</p>
<p><strong>Output Format</strong></p>
<p>For each string, return YES or NO.</p>
<br>
<p><strong>Sample Input</strong></p>
<p><code>STDIN           Function
-----           --------
3               n = 3
{[()]}          first s = '{[()]}'
{[(])}          second s = '{[(])}'
{{[[(())]]}}    third s ='{{[[(())]]}}'
</code></p>
<p><strong>Sample Output</strong></p>
<p><code>
YES
NO
YES
</code></p>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>
<br>
<ul>
	<li><code>0 &lt;= n &lt;= 10<sup>3</sup></code></li>
	<li><code>0 &lt;= |s| &lt;= 10<sup>3</sup></code></li>
</ul>
</div>
