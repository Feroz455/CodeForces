/*
A. Creep
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Define the score of some binary string T as the absolute difference between the number of zeroes and ones in it. (for example, T= 010001 contains 4 zeroes and 2 ones, so the score of T is |4−2|=2).

Define the creepiness of some binary string S as the maximum score among all of its prefixes (for example, the creepiness of S= 01001 is equal to 2 because the score of the prefix S[1…4] is 2 and the rest of the prefixes have a score of 2 or less).

Given two integers a and b, construct a binary string consisting of a zeroes and b ones with the minimum possible creepiness.

Input
The first line contains a single integer t (1≤t≤1000)  — the number of test cases. The description of the test cases follows.

The only line of each test case contains two integers a and b (1≤a,b≤100)  — the numbers of zeroes and ones correspondingly.

Output
For each test case, print a binary string consisting of a zeroes and b ones with the minimum possible creepiness. If there are multiple answers, print any of them.

Example
inputCopy
5
1 1
1 2
5 2
4 5
3 7
outputCopy
10
011
0011000
101010101
0001111111
Note
In the first test case, the score of S[1…1] is 1, and the score of S[1…2] is 0.

In the second test case, the minimum possible creepiness is 1 and one of the other answers is 101.

In the third test case, the minimum possible creepiness is 3 and one of the other answers is 0001100.


 */
#include <bits/stdc++.h>

using namespace std;

int t, A, B;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> A >> B;
        for (int i = 0; i < min(A, B); ++i)
            cout << "01";
        for (int i = 0; i < abs(A - B); ++i)
            cout << (A < B ? 1 : 0);
        cout << '\n';
    }

    return 0;
}