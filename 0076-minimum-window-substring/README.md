<h2><a href="https://leetcode.com/problems/minimum-window-substring/">76. Minimum Window Substring</a></h2><h3>Hard</h3><hr><div><p>Given two strings <code style="font-family: monospace, Bangla270, sans-serif;">s</code> and <code style="font-family: monospace, Bangla270, sans-serif;">t</code> of lengths <code style="font-family: monospace, Bangla270, sans-serif;">m</code> and <code style="font-family: monospace, Bangla270, sans-serif;">n</code> respectively, return <em>the <strong>minimum window substring</strong> of </em><code style="font-family: monospace, Bangla270, sans-serif;">s</code><em> such that every character in </em><code style="font-family: monospace, Bangla270, sans-serif;">t</code><em> (<strong>including duplicates</strong>) is included in the window. If there is no such substring</em><em>, return the empty string </em><code style="font-family: monospace, Bangla270, sans-serif;">""</code><em>.</em></p>

<p>The testcases will be generated such that the answer is <strong>unique</strong>.</p>

<p>A <strong>substring</strong> is a contiguous sequence of characters within the string.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla270, sans-serif;"><strong>Input:</strong> s = "ADOBECODEBANC", t = "ABC"
<strong>Output:</strong> "BANC"
<strong>Explanation:</strong> The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla270, sans-serif;"><strong>Input:</strong> s = "a", t = "a"
<strong>Output:</strong> "a"
<strong>Explanation:</strong> The entire string s is the minimum window.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla270, sans-serif;"><strong>Input:</strong> s = "a", t = "aa"
<strong>Output:</strong> ""
<strong>Explanation:</strong> Both 'a's from t must be included in the window.
Since the largest window of s only has one 'a', return empty string.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla270, sans-serif;">m == s.length</code></li>
	<li><code style="font-family: monospace, Bangla270, sans-serif;">n == t.length</code></li>
	<li><code style="font-family: monospace, Bangla270, sans-serif;">1 &lt;= m, n&nbsp;&lt;= 10<sup>5</sup></code></li>
	<li><code style="font-family: monospace, Bangla270, sans-serif;">s</code> and <code style="font-family: monospace, Bangla270, sans-serif;">t</code> consist of uppercase and lowercase English letters.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong> Could you find an algorithm that runs in <code style="font-family: monospace, Bangla270, sans-serif;">O(m + n)</code> time?</p>
</div>