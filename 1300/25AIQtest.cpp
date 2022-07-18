/*
A. IQ test
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Bob is preparing to pass IQ test. The most frequent task in this test is to find out
which one of the given n numbers differs from the others. Bob observed that one number
usually differs from the others in evenness. Help Bob — to check his answers, he needs a
program that among the given n numbers finds one that is different in evenness.

Input
The first line contains integer n (3 ≤ n ≤ 100) — amount of numbers in the task. The second
line contains n space-separated natural numbers, not exceeding 100. It is guaranteed, that
exactly one of these numbers differs from the others in evenness.

Output
Output index of number that differs from the others in evenness. Numbers are numbered from
1 in the input order.

Examples
inputCopy
5
2 4 7 8 10
outputCopy
3
inputCopy
4
1 2 1 1
outputCopy
2


*/
#include <iostream>
using namespace std;
int main()
{
    int n, arr[1000], index = 0, even = 0, odd = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    if (even > odd)
    {
        for (int i = 0; i < n; i++)
        {
            if (((arr[i] + 1) % 2) == 0)
            {
                cout << i + 1;
                return 0;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                cout << i + 1;
                return 0;
            }
        }
    }
    return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
    int n, arr[1000], index = 0, even = 0, odd = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
 
    if (even > odd)
    {
        for (int i = 0; i < n; i++)
        {
            if (((arr[i] + 1) % 2) == 0)
            {
                cout << i + 1;
                return 0;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                cout << i + 1;
                return 0;
            }
        }
    }
    return 0;
}
→Judgement Protocol
Test: #1, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
2 4 7 8 10
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
1 2 1 1
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
1 2 2
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #4, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
100 99 100
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
5 3 2
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #6, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
43 28 1 91
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
75 13 94 77
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #8, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
97 8 27 3
Output
2
Answer
2
Checker Log
ok 1 number(s): "2"
Test: #9, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
95 51 12 91 85 3 1 31 25 7
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #10, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
20
88 96 66 51 14 88 2 92 18 72 18 88 20 30 4 82 90 100 24 46
Output
4
Answer
4
Checker Log
ok 1 number(s): "4"
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
30
20 94 56 50 10 98 52 32 14 22 24 60 4 8 98 46 34 68 82 82 98 90 50 20 78 49 52 94 64 36
Output
26
Answer
26
Checker Log
ok 1 number(s): "26"
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
50
79 27 77 57 37 45 27 49 65 33 57 21 71 19 75 85 65 61 23 97 85 9 23 1 9 3 99 77 77 21 79 69 15 37 15 7 93 81 13 89 91 31 45 93 15 97 55 80 85 83
Output
48
Answer
48
Checker Log
ok 1 number(s): "48"
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
60
46 11 73 65 3 69 3 53 43 53 97 47 55 93 31 75 35 3 9 73 23 31 3 81 91 79 61 21 15 11 11 11 81 7 83 75 39 87 83 59 89 55 93 27 49 67 67 29 1 93 11 17 9 19 35 21 63 31 31 25
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #14, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
70
28 42 42 92 64 54 22 38 38 78 62 38 4 38 14 66 4 92 66 58 94 26 4 44 41 88 48 82 44 26 74 44 48 4 16 92 34 38 26 64 94 4 30 78 50 54 12 90 8 16 80 98 28 100 74 50 36 42 92 18 76 98 8 22 2 50 58 50 64 46
Output
25
Answer
25
Checker Log
ok 1 number(s): "25"
Test: #15, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
43 35 79 53 13 91 91 45 65 83 57 9 42 39 85 45 71 51 61 59 31 13 63 39 25 21 79 39 91 67 21 61 97 75 93 83 29 79 59 97 11 37 63 51 39 55 91 23 21 17 47 23 35 75 49 5 69 99 5 7 41 17 25 89 15 79 21 63 53 81 43 91 59 91 69 99 85 15 91 51 49 37 65 7 89 81 21 93 61 63 97 93 45 17 13 69 57 25 75 73
Output
13
Answer
13
Checker Log
ok 1 number(s): "13"
Test: #16, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
50 24 68 60 70 30 52 22 18 74 68 98 20 82 4 46 26 68 100 78 84 58 74 98 38 88 68 86 64 80 82 100 20 22 98 98 52 6 94 10 48 68 2 18 38 22 22 82 44 20 66 72 36 58 64 6 36 60 4 96 76 64 12 90 10 58 64 60 74 28 90 26 24 60 40 58 2 16 76 48 58 36 82 60 24 44 4 78 28 38 8 12 40 16 38 6 66 24 31 76
Output
99
Answer
99
Checker Log
ok 1 number(s): "99"
Test: #17, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
47 48 94 48 14 18 94 36 96 22 12 30 94 20 48 98 40 58 2 94 8 36 98 18 98 68 2 60 76 38 18 100 8 72 100 68 2 86 92 72 58 16 48 14 6 58 72 76 6 88 80 66 20 28 74 62 86 68 90 86 2 56 34 38 56 90 4 8 76 44 32 86 12 98 38 34 54 92 70 94 10 24 82 66 90 58 62 2 32 58 100 22 58 72 2 22 68 72 42 14
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #18, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
99
38 20 68 60 84 16 28 88 60 48 80 28 4 92 70 60 46 46 20 34 12 100 76 2 40 10 8 86 6 80 50 66 12 34 14 28 26 70 46 64 34 96 10 90 98 96 56 88 50 74 70 94 2 94 24 66 68 46 22 30 6 10 64 32 88 14 98 100 64 58 50 18 50 50 8 38 8 16 54 2 60 54 62 84 92 98 4 72 66 26 14 88 99 16 10 6 88 56 22
Output
93
Answer
93
Checker Log
ok 1 number(s): "93"
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
99
50 83 43 89 53 47 69 1 5 37 63 87 95 15 55 95 75 89 33 53 89 75 93 75 11 85 49 29 11 97 49 67 87 11 25 37 97 73 67 49 87 43 53 97 43 29 53 33 45 91 37 73 39 49 59 5 21 43 87 35 5 63 89 57 63 47 29 99 19 85 13 13 3 13 43 19 5 9 61 51 51 57 15 89 13 97 41 13 99 79 13 27 97 95 73 33 99 27 23
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
98
61 56 44 30 58 14 20 24 88 28 46 56 96 52 58 42 94 50 46 30 46 80 72 88 68 16 6 60 26 90 10 98 76 20 56 40 30 16 96 20 88 32 62 30 74 58 36 76 60 4 24 36 42 54 24 92 28 14 2 74 86 90 14 52 34 82 40 76 8 64 2 56 10 8 78 16 70 86 70 42 70 74 22 18 76 98 88 28 62 70 36 72 20 68 34 48 80 98
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
98
66 26 46 42 78 32 76 42 26 82 8 12 4 10 24 26 64 44 100 46 94 64 30 18 88 28 8 66 30 82 82 28 74 52 62 80 80 60 94 86 64 32 44 88 92 20 12 74 94 28 34 58 4 22 16 10 94 76 82 58 40 66 22 6 30 32 92 54 16 76 74 98 18 48 48 30 92 2 16 42 84 74 30 60 64 52 50 26 16 86 58 96 79 60 20 62 82 94
Output
93
Answer
93
Checker Log
ok 1 number(s): "93"
Test: #22, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
95
9 31 27 93 17 77 75 9 9 53 89 39 51 99 5 1 11 39 27 49 91 17 27 79 81 71 37 75 35 13 93 4 99 55 85 11 23 57 5 43 5 61 15 35 23 91 3 81 99 85 43 37 39 27 5 67 7 33 75 59 13 71 51 27 15 93 51 63 91 53 43 99 25 47 17 71 81 15 53 31 59 83 41 23 73 25 91 91 13 17 25 13 55 57 29
Output
32
Answer
32
Checker Log
ok 1 number(s): "32"
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
91 89 81 45 53 1 41 3 77 93 55 97 55 97 87 27 69 95 73 41 93 21 75 35 53 56 5 51 87 59 91 67 33 3 99 45 83 17 97 47 75 97 7 89 17 99 23 23 81 25 55 97 27 35 69 5 77 35 93 19 55 59 37 21 31 37 49 41 91 53 73 69 7 37 37 39 17 71 7 97 55 17 47 23 15 73 31 39 57 37 9 5 61 41 65 57 77 79 35 47
Output
26
Answer
26
Checker Log
ok 1 number(s): "26"
Test: #24, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
99
38 56 58 98 80 54 26 90 14 16 78 92 52 74 40 30 84 14 44 80 16 90 98 68 26 24 78 72 42 16 84 40 14 44 2 52 50 2 12 96 58 66 8 80 44 52 34 34 72 98 74 4 66 74 56 21 8 38 76 40 10 22 48 32 98 34 12 62 80 68 64 82 22 78 58 74 20 22 48 56 12 38 32 72 6 16 74 24 94 84 26 38 18 24 76 78 98 94 72
Output
56
Answer
56
Checker Log
ok 1 number(s): "56"
Test: #25, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
44 40 6 40 56 90 98 8 36 64 76 86 98 76 36 92 6 30 98 70 24 98 96 60 24 82 88 68 86 96 34 42 58 10 40 26 56 10 88 58 70 32 24 28 14 82 52 12 62 36 70 60 52 34 74 30 78 76 10 16 42 94 66 90 70 38 52 12 58 22 98 96 14 68 24 70 4 30 84 98 8 50 14 52 66 34 100 10 28 100 56 48 38 12 38 14 91 80 70 86
Output
97
Answer
97
Checker Log
ok 1 number(s): "97"
Test: #26, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
96 62 64 20 90 46 56 90 68 36 30 56 70 28 16 64 94 34 6 32 34 50 94 22 90 32 40 2 72 10 88 38 28 92 20 26 56 80 4 100 100 90 16 74 74 84 8 2 30 20 80 32 16 46 92 56 42 12 96 64 64 42 64 58 50 42 74 28 2 4 36 32 70 50 54 92 70 16 45 76 28 16 18 50 48 2 62 94 4 12 52 52 4 100 70 60 82 62 98 42
Output
79
Answer
79
Checker Log
ok 1 number(s): "79"
Test: #27, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
99
14 26 34 68 90 58 50 36 8 16 18 6 2 74 54 20 36 84 32 50 52 2 26 24 3 64 20 10 54 26 66 44 28 72 4 96 78 90 96 86 68 28 94 4 12 46 100 32 22 36 84 32 44 94 76 94 4 52 12 30 74 4 34 64 58 72 44 16 70 56 54 8 14 74 8 6 58 62 98 54 14 40 80 20 36 72 28 98 20 58 40 52 90 64 22 48 54 70 52
Output
25
Answer
25
Checker Log
ok 1 number(s): "25"
Test: #28, time: 30 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
95
82 86 30 78 6 46 80 66 74 72 16 24 18 52 52 38 60 36 86 26 62 28 22 46 96 26 94 84 20 46 66 88 76 32 12 86 74 18 34 88 4 48 94 6 58 6 100 82 4 24 88 32 54 98 34 48 6 76 42 88 42 28 100 4 22 2 10 66 82 54 98 20 60 66 38 98 32 47 86 58 6 100 12 46 2 42 8 84 78 28 24 70 34 28 86
Output
78
Answer
78
Checker Log
ok 1 number(s): "78"
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
90
40 50 8 42 76 24 58 42 26 68 20 48 54 12 34 84 14 36 32 88 6 50 96 56 20 92 48 16 40 34 96 46 20 84 30 50 20 98 8 44 96 42 8 76 70 38 84 30 40 88 84 72 2 22 52 58 16 62 100 66 80 40 50 32 14 62 88 72 22 99 76 50 84 82 8 82 98 46 26 40 2 98 18 78 30 72 70 18 34 68
Output
70
Answer
70
Checker Log
ok 1 number(s): "70"
Test: #30, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
80
81 43 87 1 55 43 53 61 27 19 43 13 89 9 33 83 75 55 97 71 91 37 95 5 21 69 81 93 95 69 31 83 55 7 97 7 79 57 8 61 27 85 49 1 15 97 63 79 29 73 41 85 5 41 31 93 67 11 63 59 15 99 91 77 43 69 23 23 81 73 19 1 67 51 1 75 99 67 3 81
Output
39
Answer
39
Checker Log
ok 1 number(s): "39"
Test: #31, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
98
13 83 61 27 35 1 85 95 97 73 95 65 73 45 5 43 27 83 91 19 11 3 85 59 9 39 69 23 45 7 51 85 5 71 5 95 1 51 75 3 43 57 3 11 33 71 21 99 47 41 87 39 71 87 31 85 91 49 83 5 49 85 47 91 55 99 33 23 31 23 23 73 29 77 55 31 25 5 81 49 91 15 15 39 87 5 9 40 69 47 29 33 11 21 49 79 51 83
Output
88
Answer
88
Checker Log
ok 1 number(s): "88"
Test: #32, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
100 100 1
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
*/