<h2><a href="https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/">1404. Number of Steps to Reduce a Number in Binary Representation to One</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given the binary representation of an integer as a string <code style="user-select: auto;">s</code>, return <em style="user-select: auto;">the number of steps to reduce it to </em><code style="user-select: auto;">1</code><em style="user-select: auto;"> under the following rules</em>:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">
	<p style="user-select: auto;">If the current number is even, you have to divide it by <code style="user-select: auto;">2</code>.</p>
	</li>
	<li style="user-select: auto;">
	<p style="user-select: auto;">If the current number is odd, you have to add <code style="user-select: auto;">1</code> to it.</p>
	</li>
</ul>

<p style="user-select: auto;">It is guaranteed that you can always reach one for all test cases.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "1101"
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation:</strong> "1101" corressponds to number 13 in their decimal representation.
Step 1) 13 is odd, add 1 and obtain 14.&nbsp;
Step 2) 14 is even, divide by 2 and obtain 7.
Step 3) 7 is odd, add 1 and obtain 8.
Step 4) 8 is even, divide by 2 and obtain 4.&nbsp; 
Step 5) 4 is even, divide by 2 and obtain 2.&nbsp;
Step 6) 2 is even, divide by 2 and obtain 1.&nbsp; 
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "10"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> "10" corressponds to number 2 in their decimal representation.
Step 1) 2 is even, divide by 2 and obtain 1.&nbsp; 
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "1"
<strong style="user-select: auto;">Output:</strong> 0
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length&nbsp;&lt;= 500</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists of characters '0' or '1'</li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[0] == '1'</code></li>
</ul>
</div>