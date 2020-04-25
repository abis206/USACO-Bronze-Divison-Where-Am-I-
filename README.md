# USACO-Bronze-Divison-Where-Am-I-
My solution to the Bronze Division problem: Where Am I?

Problem: 
Farmer John has gone out for a walk down the road and thinks he may now be lost!
Along the road there are N farms (1≤N≤100) in a row. Farms unfortunately do not have house numbers, making it hard for Farmer John to figure out his location along the road. However, each farm does have a colorful mailbox along the side of the road, so Farmer John hopes that if he looks at the colors of the mailboxes nearest to him, he can uniquely determine where he is.

Each mailbox color is specified by a letter in the range A..Z, so the sequence of N mailboxes down the road can be represented by a string of length N containing letters in the range A..Z. Some mailboxes may have the same colors as other mailboxes. Farmer John wants to know what is the smallest value of K such that if he looks at any sequence of K consecutive mailboxes, he can uniquely determine the location of that sequence along the road.

For example, suppose the sequence of mailboxes along the road is 'ABCDABC'. Farmer John cannot set K=3, since if he sees 'ABC', there are two possible locations along the road where this consecutive set of colors might be. The smallest value of K that works is K=4, since if he looks at any consecutive set of 4 mailboxes, this sequence of colors uniquely determines his position along the road.

INPUT FORMAT (file whereami.in):
The first line of input contains N, and the second line contains a string of N characters, each in the range A..Z.
OUTPUT FORMAT (file whereami.out):
Print a line containing a single integer, specifying the smallest value of K that solves Farmer John's problem.
SAMPLE INPUT:
7
ABCDABC
SAMPLE OUTPUT:
4

Score: 1000/3
Bronze Division Score: 1000
