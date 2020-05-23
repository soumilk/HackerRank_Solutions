## Solution Approach of HakerRank Question Equal Stacks

Please Go through the question [Equal Stacks](https://www.hackerrank.com/challenges/equal-stacks/problem) 

<b> Approach: </b>

1. First calculate the sum of all the elements in the stack.
2. Now, we know that the net final sum would be less than or equal to the minimum sum stack.
3. Identify the minimum sum stack.
4. Now pop out the elements from the other stacks which have sum greater than sum of minimum stack.
5. Repeat step-4 untill the the sum of all the stacks becomes equal.
6. Return the sum of any one of the stacks.
