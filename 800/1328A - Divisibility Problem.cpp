/*
By FirozMahmud, contest: Codeforces Round #629 (Div. 3), problem: (A) Divisibility Problem, Accepted, #, Copy
A. Divisibility Problem
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given two positive integers a and b. In one move you can increase a by 1 (replace a with a+1). Your task is to find the minimum number of moves you need to do in order to make a divisible by b. It is possible, that you have to make 0 moves, as a is already divisible by b. You have to answer t independent test cases.

Input
The first line of the input contains one integer t (1≤t≤104) — the number of test cases. Then t test cases follow.

The only line of the test case contains two integers a and b (1≤a,b≤109).

Output
For each test case print the answer — the minimum number of moves you need to do in order to make a divisible by b.

Example
inputCopy
5
10 4
13 9
100 13
123 456
92 46
outputCopy
2
5
4
333
0

*/
#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int x, y;
        cin >> x >> y;

        if (x % y == 0)
        {
            cout << 0 << endl;
        }
        else
        {

            int w = x % y;

            cout << y - w << endl;
        }
    }

    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
5
10 4
13 9
100 13
123 456
92 46
Output
2
5
4
333
0
Answer
2
5
4
333
0
Checker Log
ok 5 number(s): "2 5 4 333 0"
Test: #2, time: 46 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10000
1 1
1 2
1 3
1 4
1 5
1 6
1 7
1 8
1 9
1 10
1 11
1 12
1 13
1 14
1 15
1 16
1 17
1 18
1 19
1 20
1 21
1 22
1 23
1 24
1 25
1 26
1 27
1 28
1 29
1 30
1 31
1 32
1 33
1 34
1 35
1 36
1 37
1 38
1 39
1 40
1 41
1 42
1 43
1 44
1 45
1 46
1 47
1 48
1 49
1 50
1 51
1 52
1 53
1 54
1 55
1 56
1 57
1 58
1 59
1 60
1 61
1 62
1 63
1 64
1 65
1 66
1 67
1 68
1 69
1 70
1 71
1 72
1 73
1 74
1 75
1 76
1 77
1 78
1 79
1 80
1 81
1 82
1 83
1 84
1 85
1 8...
Output
0
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
0
0
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
...
Answer
0
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
74
75
76
77
78
79
80
81
82
83
84
85
86
87
88
89
90
91
92
93
94
95
96
97
98
99
0
0
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
...
Checker Log
ok 10000 numbers
Test: #3, time: 61 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10000
877914575 158260522
24979445 602436426
623690081 861648772
476190629 433933447
211047202 262703497
628894325 971407775
822804784 731963982
430302156 450968417
161735902 982631932
923078537 880895728
189330739 707723857
802329211 910286918
303238506 404539679
492686568 317063340
125660016 773361868
839296263 650287940
492601449 462224593
191890310 384836991
782177068 576823355
818008580 404011431
160449218 954291757
840594328 155374934
797829355 164163676
501899080 138996221
5...
Output
71648557
577456981
237958691
391676265
51656295
342513450
641123180
20666261
820896030
838712919
518393118
107957707
101301173
141440112
647701852
461279617
431847737
192946681
371469642
394025713
793842539
91655276
22989025
54085804
160860299
560714444
443236793
291078187
149737801
13764845
73622652
69116850
467560594
76981149
261190874
240589090
1104141
416542930
646425635
59953683
732813158
712952366
153582642
461860338
87974522
713028459
228085063
13181650...
Answer
71648557
577456981
237958691
391676265
51656295
342513450
641123180
20666261
820896030
838712919
518393118
107957707
101301173
141440112
647701852
461279617
431847737
192946681
371469642
394025713
793842539
91655276
22989025
54085804
160860299
560714444
443236793
291078187
149737801
13764845
73622652
69116850
467560594
76981149
261190874
240589090
1104141
416542930
646425635
59953683
732813158
712952366
153582642
461860338
87974522
713028459
228085063
13181650...
Checker Log
ok 10000 numbers
Test: #4, time: 61 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10000
1 1
1 1000000000
1 2
1 999999999
1 3
1 999999998
1 4
1 999999997
1 5
1 999999996
1 6
1 999999995
1 7
1 999999994
1 8
1 999999993
1 9
1 999999992
1 10
1 999999991
1000000000 1
1000000000 1000000000
1000000000 2
1000000000 999999999
1000000000 3
1000000000 999999998
1000000000 4
1000000000 999999997
1000000000 5
1000000000 999999996
1000000000 6
1000000000 999999995
1000000000 7
1000000000 999999994
1000000000 8
1000000000 999999993
1000000000 9
1000000000 99999999...
Output
0
999999999
1
999999998
2
999999997
3
999999996
4
999999995
5
999999994
6
999999993
7
999999992
8
999999991
9
999999990
0
0
0
999999998
2
999999996
0
999999994
0
999999992
2
999999990
1
999999988
0
999999986
8
999999984
0
999999982
0
999999998
0
999999997
1
999999996
2
999999995
3
999999994
4
999999993
5
999999992
6
999999991
7
999999990
8
999999989
0
1
1
0
0
999999997
1
999999995
1
999999993
3
999999991
2
999999989
1
999999987
0
...
Answer
0
999999999
1
999999998
2
999999997
3
999999996
4
999999995
5
999999994
6
999999993
7
999999992
8
999999991
9
999999990
0
0
0
999999998
2
999999996
0
999999994
0
999999992
2
999999990
1
999999988
0
999999986
8
999999984
0
999999982
0
999999998
0
999999997
1
999999996
2
999999995
3
999999994
4
999999993
5
999999992
6
999999991
7
999999990
8
999999989
0
1
1
0
0
999999997
1
999999995
1
999999993
3
999999991
2
999999989
1
999999987
0
...
Checker Log
ok 10000 numbers
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
914 78
Output
22
Answer
22
Checker Log
ok 1 number(s): "22"
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
2232 7
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #7, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
100 9090
Output
8990
Answer
8990
Checker Log
ok 1 number(s): "8990"
Test: #8, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
515151 2
Output
1
Answer
1
Checker Log
ok 1 number(s): "1"
Test: #9, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
9987 1
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #10, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
9986 1
Output
0
Answer
0
Checker Log
ok 1 number(s): "0"
Test: #11, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
21
1 3218
28 10924
908802 141084
82149 9274
893257 10248
2750048 802705
2857 142
980 209385
1 3218
28 10924
908802 141084
82149 9274
893257 10248
2750048 802705
2857 142
980 209385
1 3218
28 10924
908802 141084
82149 9274
893257 10248
Output
3217
10896
78786
1317
8567
460772
125
208405
3217
10896
78786
1317
8567
460772
125
208405
3217
10896
78786
1317
8567
Answer
3217
10896
78786
1317
8567
460772
125
208405
3217
10896
78786
1317
8567
460772
125
208405
3217
10896
78786
1317
8567
Checker Log
ok 21 numbers
*/