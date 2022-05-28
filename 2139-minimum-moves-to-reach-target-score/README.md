<h2><a href="https://leetcode.com/problems/minimum-moves-to-reach-target-score/">2139. Minimum Moves to Reach Target Score</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are playing a game with integers. You start with the integer <code style="user-select: auto;">1</code> and you want to reach the integer <code style="user-select: auto;">target</code>.</p>

<p style="user-select: auto;">In one move, you can either:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><strong style="user-select: auto;">Increment</strong> the current integer by one (i.e., <code style="user-select: auto;">x = x + 1</code>).</li>
	<li style="user-select: auto;"><strong style="user-select: auto;">Double</strong> the current integer (i.e., <code style="user-select: auto;">x = 2 * x</code>).</li>
</ul>

<p style="user-select: auto;">You can use the <strong style="user-select: auto;">increment</strong> operation <strong style="user-select: auto;">any</strong> number of times, however, you can only use the <strong style="user-select: auto;">double</strong> operation <strong style="user-select: auto;">at most</strong> <code style="user-select: auto;">maxDoubles</code> times.</p>

<p style="user-select: auto;">Given the two integers <code style="user-select: auto;">target</code> and <code style="user-select: auto;">maxDoubles</code>, return <em style="user-select: auto;">the minimum number of moves needed to reach </em><code style="user-select: auto;">target</code><em style="user-select: auto;"> starting with </em><code style="user-select: auto;">1</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = 5, maxDoubles = 0
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong> Keep incrementing by 1 until you reach target.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = 19, maxDoubles = 2
<strong style="user-select: auto;">Output:</strong> 7
<strong style="user-select: auto;">Explanation:</strong> Initially, x = 1
Increment 3 times so x = 4
Double once so x = 8
Increment once so x = 9
Double again so x = 18
Increment once so x = 19
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> target = 10, maxDoubles = 4
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong><b style="user-select: auto;"> </b>Initially, x = 1
Increment once so x = 2
Double once so x = 4
Increment once so x = 5
Double again so x = 10
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= target &lt;= 10<sup style="user-select: auto;">9</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= maxDoubles &lt;= 100</code></li>
</ul>
</div>