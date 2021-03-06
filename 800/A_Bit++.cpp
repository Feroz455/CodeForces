/*
A. Bit++
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
The classic programming language of Bitland is Bit++. This language is so peculiar and complicated.

The language is that peculiar as it has exactly one variable, called x. Also, there are two operations:

Operation ++ increases the value of variable x by 1.
Operation -- decreases the value of variable x by 1.
A statement in language Bit++ is a sequence, consisting of exactly one operation and one variable x. The statement is written without spaces, that is, it can only contain characters "+", "-", "X". Executing a statement means applying the operation it contains.

A programme in Bit++ is a sequence of statements, each of them needs to be executed. Executing a programme means executing all the statements it contains.

You're given a programme in language Bit++. The initial value of x is 0. Execute the programme and find its final value (the value of the variable when this programme is executed).

Input
The first line contains a single integer n (1 ≤ n ≤ 150) — the number of statements in the programme.

Next n lines contain a statement each. Each statement contains exactly one operation (++ or --) and exactly one variable x (denoted as letter «X»). Thus, there are no empty statements. The operation and the variable can be written in any order.

Output
Print a single integer — the final value of x.

Examples
inputCopy
1
++X
outputCopy
1
inputCopy
2
X++
--X
outputCopy
0
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, x = 0;
    string str;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if ("++X" == str || "X++" == str)
        {
            x += 1;
        }
        else
            x -= 1;
    }
    cout << x;
    return 0;
}
/*
Test: #1, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
++X
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #2, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
X++
--X
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
++X
++X
++X
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #4, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
--X
--X
Output
-2
Answer
-2
Checker Log
ok 1 number(s): "-2"
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
++X
--X
++X
--X
--X
Output
-1
Answer
-1
Checker Log
ok 1 number(s): "-1"
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
112
++X
--X
X--
X--
X++
--X
X++
--X
X--
++X
X--
X--
X++
++X
--X
--X
++X
++X
X++
--X
++X
++X
++X
--X
--X
X++
X++
X++
X++
X++
++X
X++
X--
X--
X++
++X
X--
--X
--X
++X
--X
X++
++X
--X
X--
X--
X--
--X
X--
X++
++X
--X
X--
--X
X++
++X
--X
--X
--X
++X
--X
--X
++X
X++
--X
++X
X++
++X
X++
X--
X++
--X
X--
++X
X--
++X
X++
++X
++X
++X
X++
++X
--X
X++
--X
X--
X++
--X
X++
++X
X++
++X
--X
++X
X++
--X
X++
X++
++X
++X
--X
-...
Output
6
Answer
6
Checker Log
ok 1 number(s): "6"
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
28
X--
++X
X++
X++
X++
--X
--X
X++
X--
++X
X++
--X
X--
X++
X--
++X
++X
X++
X++
X++
X++
--X
++X
--X
--X
--X
--X
X++
Output
4
Answer
4
Checker Log
ok 1 number(s): "4"
Test: #8, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
94
X++
X++
++X
++X
X--
--X
X++
--X
X++
++X
X++
++X
--X
--X
++X
X++
--X
X--
X--
--X
X--
X--
--X
++X
--X
X--
X--
X++
++X
--X
X--
++X
--X
--X
X--
X--
X++
X++
X--
X++
X--
X--
X--
--X
X--
X--
X--
X++
++X
X--
++X
X++
--X
--X
--X
--X
++X
X--
--X
--X
++X
X--
X--
X++
++X
X++
++X
--X
--X
X--
++X
X--
X--
++X
++X
++X
++X
X++
++X
--X
X++
--X
--X
++X
--X
X++
++X
X++
--X
X--
X--
--X
++X
X++
Output
-10
Answer
-10
Checker Log
ok 1 number(s): "-10"
Test: #9, time: 15 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
56
--X
X--
--X
--X
X--
X--
--X
X++
++X
--X
X++
X--
--X
++X
--X
X--
X--
++X
X--
X--
--X
++X
--X
++X
--X
X++
++X
X++
--X
++X
X++
X++
--X
X++
X--
--X
X--
--X
X++
++X
--X
++X
X++
X--
--X
--X
++X
X--
X--
--X
X--
--X
X++
--X
++X
--X
Output
-14
Answer
-14
Checker Log
ok 1 number(s): "-14"
Test: #10, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
59
X--
--X
X++
++X
X--
--X
--X
++X
++X
++X
++X
X++
++X
++X
X++
--X
X--
X++
++X
--X
X++
--X
++X
X++
--X
--X
X++
X++
--X
X++
X++
X++
X--
X--
--X
X++
X--
X--
++X
X--
X++
--X
X++
X--
X--
X--
X--
++X
--X
X++
X++
X--
X++
++X
X--
X++
X--
X--
++X
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #11, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
125
X++
--X
++X
--X
X--
X--
X++
X--
--X
++X
++X
X--
++X
X++
--X
++X
X++
X--
++X
X--
X--
X++
++X
X--
--X
X--
--X
X++
X--
X--
++X
X--
X--
X++
++X
X--
--X
++X
--X
++X
X--
X++
++X
++X
++X
++X
++X
X++
++X
X--
--X
X++
--X
++X
--X
X++
++X
X++
X--
--X
X--
X++
X++
X++
--X
X--
X++
X++
++X
--X
++X
++X
X++
--X
X--
X++
++X
++X
X++
X++
--X
X--
--X
X--
--X
--X
X++
--X
X++
X--
--X
--X
X++
X++
++X
X--
--X
X++
++X
X--
++X
X...
Output
7
Answer
7
Checker Log
ok 1 number(s): "7"
Test: #12, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
87
--X
++X
--X
X++
--X
X--
--X
++X
X--
++X
--X
--X
X++
--X
X--
X++
++X
--X
++X
++X
--X
++X
--X
X--
++X
++X
X--
X++
X++
--X
--X
++X
X--
--X
++X
--X
X++
--X
--X
X--
++X
++X
--X
X--
X--
X--
X--
X--
X++
--X
++X
--X
X++
++X
X++
++X
--X
X++
++X
X--
--X
X++
++X
X++
X++
--X
--X
++X
--X
X++
X++
++X
X++
X++
X++
X++
--X
--X
--X
--X
--X
--X
--X
X--
--X
++X
++X
Output
-5
Answer
-5
Checker Log
ok 1 number(s): "-5"
Test: #13, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
101
X++
X++
X++
++X
--X
X--
X++
X--
X--
--X
--X
++X
X++
++X
++X
X--
--X
++X
X++
X--
++X
--X
--X
--X
++X
--X
++X
X++
X++
++X
--X
X++
X--
X++
++X
++X
X--
X--
X--
X++
X++
X--
X--
X++
++X
++X
++X
--X
--X
++X
X--
X--
--X
++X
X--
++X
X++
++X
X--
X--
--X
++X
--X
++X
++X
--X
X++
++X
X--
++X
X--
++X
X++
X--
++X
X++
--X
X++
X++
++X
--X
++X
--X
X++
--X
X--
--X
++X
++X
++X
--X
X--
X--
X--
X--
--X
--X
--X
++X
--X
--X
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #14, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
63
--X
X--
++X
--X
++X
X++
--X
--X
X++
--X
--X
X++
X--
X--
--X
++X
X--
X--
X++
++X
X++
X++
--X
--X
++X
X--
X--
X--
++X
X++
X--
--X
X--
++X
++X
X++
++X
X++
X++
--X
X--
++X
X--
--X
X--
X--
X--
++X
++X
++X
++X
X++
X++
++X
--X
--X
++X
++X
++X
X--
++X
++X
X--
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #15, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
129
X++
--X
--X
X--
++X
X++
X++
X++
++X
--X
--X
X--
--X
--X
X++
X++
X++
--X
X++
--X
X++
++X
X--
++X
++X
++X
X++
X--
--X
X--
X++
X++
--X
X--
++X
X--
X++
++X
X++
X--
--X
--X
X++
X++
--X
--X
++X
X++
X++
X++
X--
--X
++X
++X
++X
--X
X--
--X
--X
X++
++X
--X
X++
--X
X++
++X
++X
--X
++X
X++
++X
--X
X++
X--
X--
X++
X--
X--
X++
--X
--X
--X
--X
++X
--X
X--
X--
X--
--X
X++
++X
X--
--X
--X
++X
--X
X--
X++
X++
++X
X++
+...
Output
-5
Answer
-5
Checker Log
ok 1 number(s): "-5"
Test: #16, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
45
--X
++X
X--
++X
++X
X++
--X
--X
--X
--X
--X
--X
--X
X++
++X
X--
++X
++X
X--
X++
X--
--X
X--
++X
++X
--X
--X
X--
X--
--X
++X
X--
--X
++X
++X
--X
--X
X--
++X
++X
X++
X++
++X
++X
X++
Output
-3
Answer
-3
Checker Log
ok 1 number(s): "-3"
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
105
X--
++X
X++
--X
X++
++X
X++
X++
X--
--X
--X
++X
++X
X--
--X
--X
--X
X++
X--
--X
--X
X++
X++
X++
++X
X++
X--
X--
X++
++X
--X
++X
--X
--X
++X
++X
++X
X++
--X
X--
X--
++X
--X
X--
--X
--X
++X
--X
++X
--X
X--
++X
++X
++X
X--
X++
--X
--X
--X
X++
X++
--X
--X
--X
--X
X++
++X
X--
X--
X++
--X
X--
++X
X++
++X
X--
X++
--X
X++
X++
--X
X++
X--
--X
--X
X--
++X
++X
X++
--X
++X
X++
++X
X++
--X
--X
X++
--X
X++
X++
--X
X...
Output
-3
Answer
-3
Checker Log
ok 1 number(s): "-3"
Test: #18, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
21
++X
X++
--X
X--
X++
++X
--X
X--
X++
X--
X--
X--
X++
++X
X++
++X
--X
X--
--X
X++
++X
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #19, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
133
X--
X--
X--
X++
X--
++X
X++
++X
++X
X--
X--
--X
X++
X++
++X
X--
X--
--X
--X
++X
X++
--X
X++
X--
++X
X--
--X
X--
--X
X--
X--
--X
--X
++X
++X
X++
--X
--X
X--
--X
++X
X++
X--
--X
--X
X--
++X
X++
--X
X++
X--
X--
++X
++X
X++
++X
++X
X--
--X
++X
--X
X--
X++
X--
++X
X--
++X
++X
++X
X--
X++
X++
++X
++X
--X
X--
--X
++X
X++
++X
--X
--X
X--
X--
--X
X--
--X
X++
++X
X++
X++
++X
X++
X--
X++
--X
X++
X++
X++
X--
X++
X...
Output
3
Answer
3
Checker Log
ok 1 number(s): "3"
Test: #20, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100
--X
++X
X++
++X
X--
++X
X--
X++
--X
X++
X--
X--
X--
++X
X--
X++
X++
++X
X++
X++
X++
X++
++X
X++
++X
X--
--X
++X
X--
--X
++X
++X
X--
X++
X++
X++
++X
--X
++X
X++
X--
++X
++X
--X
++X
X--
X--
X--
X++
X--
X--
X++
X++
--X
X++
X++
--X
X--
--X
++X
--X
++X
++X
X--
--X
++X
++X
--X
--X
++X
X++
X--
X++
X--
X++
X++
--X
X--
X--
++X
X--
--X
--X
X++
--X
--X
X--
X--
++X
++X
X--
++X
X++
--X
++X
++X
X++
--X
--X
X++
Output
8
Answer
8
Checker Log
ok 1 number(s): "8"
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
17
X++
X++
++X
--X
--X
++X
++X
--X
X--
X++
X--
--X
--X
X--
++X
X--
X++
Output
-1
Answer
-1
Checker Log
ok 1 number(s): "-1"
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
77
++X
X++
--X
X--
--X
--X
X--
X++
X--
X++
X--
++X
--X
--X
--X
--X
++X
X--
X++
X--
--X
X--
--X
X--
++X
--X
++X
++X
X++
X++
X--
--X
X--
X--
X++
--X
--X
++X
X--
X--
++X
X++
X--
++X
--X
X++
X--
++X
++X
++X
X--
X--
X--
--X
++X
++X
++X
X++
--X
--X
++X
--X
X--
X++
++X
X++
++X
X--
X++
X++
--X
X++
X++
X++
--X
X++
X--
Output
-5
Answer
-5
Checker Log
ok 1 number(s): "-5"
Test: #23, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
143
X--
X--
X--
X++
++X
--X
++X
X--
X++
X++
X++
X++
++X
X++
X++
++X
--X
--X
X--
++X
++X
X++
--X
X--
X++
X++
--X
X++
++X
--X
X++
X++
--X
++X
X++
++X
++X
--X
X--
++X
X++
++X
X++
X--
X++
--X
++X
X++
X++
X++
++X
++X
++X
--X
X++
--X
--X
++X
X++
--X
X++
--X
X++
++X
--X
X--
X--
X++
++X
--X
++X
++X
X++
--X
X--
X++
X--
X++
++X
--X
--X
--X
--X
--X
--X
X++
++X
X--
++X
--X
X++
--X
++X
--X
X++
X--
X--
++X
++X
X++
X--
+...
Output
23
Answer
23
Checker Log
ok 1 number(s): "23"
Test: #24, time: 15 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
105
++X
--X
++X
--X
++X
--X
X--
++X
++X
X++
X++
--X
X++
X--
++X
X--
X--
++X
X--
X--
X++
--X
X--
--X
X++
++X
X++
X++
--X
++X
X++
X--
--X
X--
X++
X++
X--
X--
X++
--X
--X
X--
++X
X++
--X
X++
X--
X--
--X
X--
X--
--X
X--
--X
X--
--X
X++
++X
--X
X--
X++
X--
++X
++X
X++
X--
++X
X++
--X
X--
X++
++X
X++
++X
X++
X++
X++
++X
X--
X++
--X
++X
--X
X--
--X
--X
--X
X++
X++
++X
--X
X--
--X
X--
++X
++X
--X
--X
++X
++X
--X
X...
Output
-7
Answer
-7
Checker Log
ok 1 number(s): "-7"
Test: #25, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
21
X--
++X
--X
X--
++X
X--
++X
X--
--X
++X
X++
++X
X++
++X
X--
--X
X++
X++
X--
++X
X--
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #26, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
150
X--
X--
--X
X--
--X
--X
X--
X--
X--
X--
X--
--X
--X
X--
X--
--X
X--
X--
X--
--X
--X
--X
--X
X--
X--
--X
--X
X--
--X
--X
X--
--X
X--
--X
--X
--X
--X
X--
--X
X--
--X
--X
--X
--X
--X
--X
X--
X--
X--
--X
--X
--X
X--
X--
--X
X--
X--
X--
--X
--X
X--
X--
--X
--X
--X
X--
--X
--X
X--
--X
--X
X--
--X
--X
X--
X--
X--
X--
--X
X--
--X
--X
X--
--X
--X
--X
--X
X--
--X
X--
X--
--X
X--
X--
--X
--X
X--
X--
--X
X--
--X
-...
Output
-150
Answer
-150
Checker Log
ok 1 number(s): "-150"
Test: #27, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
150
X--
--X
--X
--X
X--
--X
X--
X--
--X
--X
X--
--X
X--
--X
--X
--X
--X
--X
--X
--X
--X
--X
--X
--X
X--
--X
X--
--X
--X
X--
--X
X--
--X
--X
X--
--X
--X
X--
X--
--X
X--
X--
X--
X--
X--
X--
X--
X--
--X
--X
X--
--X
--X
--X
--X
X--
--X
--X
X--
X--
--X
--X
--X
X--
--X
--X
X--
--X
--X
X--
--X
--X
X--
X--
--X
--X
X--
X--
--X
X--
--X
--X
X--
--X
--X
--X
--X
--X
X--
--X
--X
X--
--X
X--
--X
X--
X--
X--
X--
X--
--X
-...
Output
-150
Answer
-150
Checker Log
ok 1 number(s): "-150"
Test: #28, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
150
X--
--X
X--
X--
X--
X--
--X
X--
--X
X--
X--
--X
--X
--X
--X
X--
--X
X--
X--
X--
--X
X--
X--
--X
--X
--X
X--
--X
X--
X--
X--
--X
--X
--X
X--
--X
X--
--X
--X
X--
X--
--X
X--
--X
X--
X--
X--
X--
X--
X--
--X
--X
--X
--X
--X
--X
X--
--X
X--
X--
--X
--X
--X
--X
X--
X--
X--
--X
--X
--X
--X
X--
X--
X--
--X
X--
X--
--X
X--
X--
X--
--X
--X
--X
X--
--X
--X
X--
--X
--X
X--
X--
--X
--X
X--
--X
--X
X--
--X
X--
X--
X...
Output
-150
Answer
-150
Checker Log
ok 1 number(s): "-150"
Test: #29, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
150
X--
--X
--X
X--
--X
X--
--X
X--
--X
--X
X--
X--
X--
X--
X--
X--
X--
--X
--X
X--
X--
--X
--X
X--
--X
--X
--X
--X
X--
--X
--X
--X
X--
X--
X--
X--
--X
--X
X--
X--
--X
--X
--X
--X
X--
X--
X--
X--
--X
--X
X--
--X
X--
--X
--X
X--
X--
X--
--X
X--
X--
X--
X--
X--
X--
X--
--X
--X
X--
X--
X--
--X
--X
X--
--X
--X
X--
X--
X--
X--
--X
--X
X--
--X
X--
--X
X--
X--
--X
X--
--X
X--
X--
--X
X--
X--
--X
--X
X--
X--
X--
-...
Output
-150
Answer
-150
Checker Log
ok 1 number(s): "-150"
Test: #30, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
150
--X
X--
--X
--X
--X
--X
--X
X--
X--
X--
--X
X--
X--
--X
--X
X--
--X
--X
X--
--X
--X
X--
--X
X--
--X
--X
X--
X--
--X
X--
X--
--X
X--
X--
--X
X--
--X
--X
X--
--X
X--
X--
X--
--X
--X
--X
--X
X--
--X
X--
X--
--X
--X
X--
X--
X--
--X
--X
--X
X--
X--
X--
X--
X--
X--
--X
--X
--X
--X
X--
X--
--X
X--
--X
X--
--X
--X
X--
X--
X--
--X
X--
X--
X--
X--
--X
X--
--X
X--
X--
X--
--X
X--
--X
X--
--X
--X
X--
X--
X--
--X
-...
Output
-150
Answer
-150
Checker Log
ok 1 number(s): "-150"
Test: #31, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
150
X++
++X
++X
++X
X++
X++
X++
++X
++X
++X
X++
++X
X++
X++
X++
X++
++X
++X
++X
++X
X++
++X
X++
X++
X++
X++
++X
++X
X++
X++
X++
++X
X++
X++
++X
++X
++X
X++
X++
X++
X++
X++
++X
++X
X++
X++
X++
++X
++X
X++
X++
X++
++X
++X
++X
++X
++X
X++
X++
++X
++X
X++
++X
X++
X++
++X
++X
X++
++X
X++
++X
++X
++X
X++
++X
++X
X++
++X
X++
++X
++X
++X
X++
++X
++X
X++
++X
++X
X++
X++
X++
X++
++X
++X
++X
++X
X++
X++
X++
X++
++X
+...
Output
150
Answer
150
Checker Log
ok 1 number(s): "150"
Test: #32, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
150
X++
++X
++X
X++
++X
++X
X++
++X
X++
X++
X++
++X
++X
++X
++X
X++
X++
X++
X++
++X
X++
X++
++X
X++
++X
X++
X++
X++
++X
++X
++X
X++
X++
X++
++X
++X
X++
++X
++X
++X
X++
++X
X++
X++
++X
X++
X++
++X
X++
++X
X++
X++
++X
X++
++X
X++
++X
++X
++X
++X
X++
X++
++X
X++
X++
++X
++X
X++
++X
++X
++X
X++
X++
X++
X++
X++
X++
X++
X++
++X
X++
++X
++X
X++
X++
X++
++X
++X
++X
X++
++X
++X
X++
++X
X++
X++
X++
X++
++X
X++
X++
X...
Output
150
Answer
150
Checker Log
ok 1 number(s): "150"
Test: #33, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
150
X++
X++
X++
++X
X++
++X
++X
++X
X++
++X
++X
++X
X++
X++
++X
++X
X++
X++
++X
X++
++X
++X
X++
X++
++X
X++
++X
X++
++X
X++
X++
++X
++X
X++
X++
++X
++X
++X
++X
X++
++X
++X
X++
++X
++X
X++
++X
++X
++X
++X
++X
X++
X++
X++
++X
++X
X++
++X
++X
++X
X++
++X
X++
++X
++X
X++
X++
X++
X++
X++
X++
++X
X++
X++
X++
++X
X++
X++
++X
++X
X++
++X
X++
X++
X++
X++
++X
X++
X++
++X
X++
++X
X++
X++
++X
++X
X++
++X
X++
X++
X++
+...
Output
150
Answer
150
Checker Log
ok 1 number(s): "150"
Test: #34, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
150
X++
X++
++X
X++
++X
++X
++X
++X
X++
X++
++X
X++
++X
X++
X++
X++
++X
++X
X++
X++
++X
X++
X++
++X
X++
++X
++X
++X
++X
++X
++X
X++
++X
X++
X++
X++
X++
X++
X++
X++
++X
X++
++X
X++
++X
X++
++X
++X
X++
X++
X++
X++
X++
X++
++X
X++
X++
X++
X++
++X
X++
X++
X++
X++
++X
++X
X++
X++
X++
++X
X++
++X
++X
X++
X++
++X
++X
++X
++X
++X
++X
X++
X++
X++
++X
X++
++X
++X
++X
++X
++X
++X
X++
X++
++X
X++
X++
++X
++X
X++
++X
X...
Output
150
Answer
150
Checker Log
ok 1 number(s): "150"
Test: #35, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
150
X++
X++
X++
X++
++X
X++
++X
++X
++X
++X
++X
X++
X++
++X
X++
X++
X++
X++
++X
X++
++X
++X
++X
++X
X++
++X
X++
++X
++X
X++
X++
X++
++X
X++
X++
X++
X++
X++
++X
++X
++X
++X
++X
X++
X++
++X
++X
++X
++X
++X
++X
X++
++X
X++
++X
++X
++X
X++
X++
++X
++X
X++
++X
++X
++X
++X
X++
++X
++X
X++
++X
X++
++X
X++
++X
X++
++X
++X
X++
++X
X++
X++
++X
X++
++X
X++
X++
X++
++X
X++
X++
++X
++X
++X
X++
++X
X++
++X
X++
X++
++X
+...
Output
150
Answer
150
Checker Log
ok 1 number(s): "150"
Test: #36, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
X--
Output
-1
Answer
-1
Checker Log
ok 1 number(s): "-1"
*/