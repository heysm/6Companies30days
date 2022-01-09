<p align="center">
<img src="https://about.gitlab.com/images/case_study_logos/GSsignature_Blue.png" >
</p>

<br/>


| Question      | logic       | C |
| -----------   | ----------- | - |
| 1. [Group Anagrams ](https://leetcode.com/problems/group-anagrams/)        | [sort each word + maintain a hashmap of strings](1.GroupAnagram.md)     | M |
| 2. [Subarray Product Less Than K](https://leetcode.com/problems/subarray-product-less-than-k/)    | [Two Pointers](2.SubArrayProductLessthanK.md) + ```count += right - left + 1```        | M |
| 3. [Overlapping Rectangle](https://leetcode.com/problems/rectangle-overlap/) | [two rectangles dont overlap when one side is out of reach of other from left & right](4.OverLappingRectangle.md) | E |
| 4. [UglyNumber 2 ](https://leetcode.com/problems/ugly-number-ii/) | [Use a set or pq to revaluate the min each time, set.pb(currX {2,3,5} ), set.erase(curr) <br/> DP idea - since each number can be generated from former ugly numbers by multiplying 2,3,5 (maintain pointers at 2,3,5) and increment accordingly ](3.UglyNumbers.md) | M |
| 5. [RunLengthEncoding](https://leetcode.com/problems/string-compression/) | tbd  | M |
| 6. [GCD Strings](https://leetcode.com/problems/greatest-common-divisor-of-strings/) | [ str1+str2 == str2+str1 : gcd of strs = gcd of len ](5.gcdStrings.md) | M |
| 7. [MthPosition](https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1/) | ``` int findPosition(int N , int M , int K) {return (K+M-1)%N == 0 ? N : (K+M-1)%N;    } ``` | B |
| 8. [DecodeWays](https://leetcode.com/problems/decode-ways/) || |
| 9. [ID pattern](https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1) || |
| 10. Find max 10 numbers in a list having 10M entries| [StackOverflow](https://stackoverflow.com/questions/32234711/which-sorting-algorithm-works-best-on-very-large-data-set) , [Quora](https://www.quora.com/Which-sorting-algorithm-is-efficient-for-large-data-and-why) | O |
| 11. [Missing Numbers](https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/) | [use indices as a measure (-1* if found ) ](11.MissingNumbers.md) | |
| 12. [TotalSquaresChess](https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1) | ```(n*(n+1)*((2*n)+1))/6``` | B |
| 13. [Decode String](https://practice.geeksforgeeks.org/problems/decode-the-string2444/1) | | |
| 14. [MinSizeSubarray](https://leetcode.com/problems/minimum-size-subarray-sum/) | [Classic 2 pointers](14.MinSizeSubarray.md) | M |
| 15. [ArrayPairs](https://leetcode.com/problems/check-if-array-pairs-are-divisible-by-k/) | [if sum of modulos is div then nums are also div ](14.ArrayPairs.md) | M |

<br>

## References 
> [Arsh Goyal's GS Sheet](https://docs.google.com/document/d/e/2PACX-1vRgrSl5zCl8P92F0qNuJyDF9v8aqfNd1UB9fQWTb-_aohzhPbZ0GOVbXvfnGHgzbWWdkf9gr7ZgM0lj/pub) 
