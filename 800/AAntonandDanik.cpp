/*
A. Anton and Danik
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Anton likes to play chess, and so does his friend Danik.

Once they have played n games in a row. For each game it's known who was the winner — Anton or Danik. None of the games ended with a tie.

Now Anton wonders, who won more games, he or Danik? Help him determine this.

Input
The first line of the input contains a single integer n (1 ≤ n ≤ 100 000) — the number of games played.

The second line contains a string s, consisting of n uppercase English letters 'A' and 'D' — the outcome of each of the games. The i-th character of the string is equal to 'A' if the Anton won the i-th game and 'D' if Danik won the i-th game.

Output
If Anton won more games than Danik, print "Anton" (without quotes) in the only line of the output.

If Danik won more games than Anton, print "Danik" (without quotes) in the only line of the output.

If Anton and Danik won the same number of games, print "Friendship" (without quotes).

Examples
inputCopy
6
ADAAAA
outputCopy
Anton
inputCopy
7
DDDAADA
outputCopy
Danik
inputCopy
6
DADADA
outputCopy
Friendship
Note
In the first sample, Anton won 6 games, while Danik — only 1. Hence, the answer is "Anton".

In the second sample, Anton won 3 games and Danik won 4 games, so the answer is "Danik".

In the third sample, both Anton and Danik won 3 games and the answer is "Friendship".


*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int Anton = 0, Danik = 0, xxx;
    string str;
    char c;
    cin >> xxx >> str;
    for (int i = 0; i < str.size(); i++)
    {
        c = str[i];
        if (c == 'A')
        {
            Anton++;
        }
        else
            Danik++;
    }
    if (Anton > Danik)
    {
        cout << "Anton";
    }
    else if (Anton < Danik)
    {
        cout << "Danik";
    }
    else
        cout << "Friendship";
    return 0;
}
/*
→Judgement Protocol
Test: #1, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6
ADAAAA
Output
Anton
Answer
Anton
Checker Log
ok "Anton"
Test: #2, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
7
DDDAADA
Output
Danik
Answer
Danik
Checker Log
ok "Danik"
Test: #3, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
6
DADADA
Output
Friendship
Answer
Friendship
Checker Log
ok "Friendship"
Test: #4, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10
DDDDADDADD
Output
Danik
Answer
Danik
Checker Log
ok "Danik"
Test: #5, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
40
AAAAAAAAADDAAAAAAAAAAADADDAAAAAAAAAAADAA
Output
Anton
Answer
Anton
Checker Log
ok "Anton"
Test: #6, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
200
DDDDDDDADDDDDDAADADAADAAADAADADAAADDDADDDDDDADDDAADDDAADADDDDDADDDAAAADAAADDDDDAAADAADDDAAAADDADADDDAADDAADAAADAADAAAADDAADDADAAAADADDDAAAAAADDAADAADAADADDDAAADAAAADADDADAAAAAADADADDDADDDAADDADDDAAAAD
Output
Friendship
Answer
Friendship
Checker Log
ok "Friendship"
Test: #7, time: 15 ms., memory: 248 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100000
DADAAAAADDDAAAADADDADDDDDDADADADADDADDADAADDDDDADAAADDDADDAADADADDADAADDAAADADADDAADDADDAAAAADDDDDDDAADDAADADADDADDAAADADAAAADAAADDADAADDADADDDDAADADDAADDDADDDDDDDAADDDADDDDADAADAADDDDADDDDAADDDAADDAAAAAADADDAADDAAADAAAADADDDDAAAAAAADAAAAADADADADDADDAADDDADAADDADADADADAADDADDAADADDDDDAADDDAADDADDAAADAAADDADAADADDDDDDAADDDDADDAAAADADAADDAAAADDAADDDADADDAADADDDAAADDDADDADDADDAADDDDADDADDDDDDDDDDAAADAADAAADAAADAADDADADDDDAADAADADADADDADAADDDADAAADADDDDAADDDDADDADDADAADADDDADADADADAAAADDADDADDDDDDDAADD...
Output
Anton
Answer
Anton
Checker Log
ok "Anton"
Test: #8, time: 15 ms., memory: 252 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100000
DDDAADAADDDAAAADADDADDDDDDADDDDDDDDADDADAADDDDDDDAADDDDADDAADADDDDADDADDAADDADDDDAADDDDDDAAAADDDDDDDDADDAADADADDADDADADADDAAADDAADDDDDDDDADADDDDADDDDDDADDDADDDDDDDAADDDADDDDADAADAADDDDADDDDADDDDADDDADAAAADDDDADDDDAADDAAADDDDDDAADAAAADADAAADADDDADDADDDADDDADAADDADADADADDADDADDADDADDDDDAADDDDADDADDAADDDDADDADAADADDDDDDDADDDDADDAAADDADADDDAAAADDADDDDADADDAADADDDAAADDDADDADDDDDADDDDDADDDDDDDDDDDDDAAADADDAAADDAADADDDADDDDDDADDADDADDDADDADAADDDADDDADDDDDDAADDDDADDADDADDADDDDDDDADADDDAAAADDADDADDDDDDDADDD...
Output
Danik
Answer
Danik
Checker Log
ok "Danik"
Test: #9, time: 0 ms., memory: 256 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100000
AAAAAAAAAADAAAAAAAAAAAAAAAAAAAAAAAAAADAAAAAAAAAAAAAAAADAADAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAAAAAAAAAAAAAAAAAAAAAADAAAADADAAAAAAAAAADAAADAAAAAADAAAADAAAAAAAAAADAAAADAAAAAAAAAAAAAAAAAAAAAAADAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAAAAAAAAAAAAAAAAADAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAAAAAAAAAADAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA...
Output
Anton
Answer
Anton
Checker Log
ok "Anton"
Test: #10, time: 15 ms., memory: 252 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100000
DDAADDADDADADDDAAADDDDADAAAAADDADDDADADDADAADDDDAADDDDDDDDDADADADDAAAADAAAAAAADDDDADDDAAAAADADAADDADDAAADDADDADDAAADDDADDDAADADADAADAAAAADAAAAAAADAADADAAADDADAADADDADDDDDDDAADDDDADDDAAAADAADADAADDAADAAADAADADDAADDDAADAADDDAADDADDAADAAADDDADAAAADADDDDDAADAADDDDADADADDDDADDDADADDDADADDAAADADADAAADAAADDDADAADADAADDDAADADADAAAADADAAADADDADDDAAAADADDAAADDADADAAAAAADDAADADADDADAAAADDADDDDADDAAAADDDADADDADADDADDDDADDDADAADDDADDDDDADAAAAADDADADDDDAADAAAAADADDDADDADAAADDADADADDDAADADDDAADADDDDADDDDDAADDADAD...
Output
Friendship
Answer
Friendship
Checker Log
ok "Friendship"
Test: #11, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
A
Output
Anton
Answer
Anton
Checker Log
ok "Anton"
Test: #12, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
1
D
Output
Danik
Answer
Danik
Checker Log
ok "Danik"
Test: #13, time: 0 ms., memory: 256 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100000
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA...
Output
Anton
Answer
Anton
Checker Log
ok "Anton"
Test: #14, time: 15 ms., memory: 252 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
100000
DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD...
Output
Danik
Answer
Danik
Checker Log
ok "Danik"
Test: #15, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
DA
Output
Friendship
Answer
Friendship
Checker Log
ok "Friendship"
Test: #16, time: 0 ms., memory: 252 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
65536
DDDDADDADDDADDADADDADDDDDDDDDDDDDDDADDDDAADDDDDDDADDDDDADDAADADDDDDDDDDDDDDDADDDDADDDDDDDADAADDDDDDDDDDDAADDDADDADDADADADDDADDDAADDDDDDDDDDADDDDADDDDDDDDDDADDDDDDDDADDDADDDDADADDDADDDDADDDDADDDDADDDADADAADDDDADDDDDADDDAADDDDDDAADDAADDADDAADADDDADDADDDADDDADAADDADADADDDDADDADDDDDDDDDDDAADDDDADDADDAADDDDADDDDDADDDDDDDDDADDDDADDAAADDADDDDDDAAADDADDDDADADDDADDDDDAADDDDADDADDDDDDDDDDDADDDDDDDDDDDDDDDDDADDADDDDAADDDDDADDDDDDADDADDDDDDADDADAADDDDDDDDDDDDDDDADDDDADDADDDDDDDDDDDDDADADDDADDADDADDDDDDDDDDDDDDD...
Output
Danik
Answer
Danik
Checker Log
ok "Danik"
Test: #17, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
DADA
Output
Friendship
Answer
Friendship
Checker Log
ok "Friendship"
Test: #18, time: 0 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
4
DAAD
Output
Friendship
Answer
Friendship
Checker Log
ok "Friendship"
Test: #19, time: 15 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
ADD
Output
Danik
Answer
Danik
Checker Log
ok "Danik"
Test: #20, time: 0 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
3
DAD
Output
Danik
Answer
Danik
Checker Log
ok "Danik"
Test: #21, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
2
DA
Output
Friendship
Answer
Friendship
Checker Log
ok "Friendship"
Test: #22, time: 0 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
379
AADAAAAAADDAAAAAADAADADADDAAAAADADDAADAAAADDDADAAAAAAADAADAAAAAAADAAAAAAAAADAAAAAAADAAAAAAAAAAADDDADAAAAAAAADAADADAAAADAAAAAAAAAAAAAAAAADAAAADDDAADAAAAAAADAAADAAADAADDDADDAAADAAAAAADDDADDDAAADAAAADAAAAAAAAADAAADAAAAAAAAADAAAAAAAAAAAAAAAAAADADAAAAAAAAAAADAAAAADAAAADAAAAAAAAAAAAADADAADAAAAAAAADAADAAAAAAAADAAAAAAAADDDAAAAAADAAADAAAAAADAADAAAAAADAAAADADAADAAAAAADAAAADAADDAADAADAAA
Output
Anton
Answer
Anton
Checker Log
ok "Anton"
Test: #23, time: 15 ms., memory: 260 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
90847
DADAAAAADDDAAAADADDADDDDDDADADADADDADDADAADDDDDADAAADDDADDAADADDDDADAADDAAADADADDAADDADDDAAAADDDDDDDAADDAADADADDADDAAADADAAAADAAADDADADDDADADDDDADDADDAADDDADDDDDDDAADDDADDDDADAADAADDDDADDDDADDDDADDDAAAAAADDDDAADDAAADAAAADADDDDAAAAAAADAAAAADADADADDADDDADDDADAADDADADADADAADDADDADDADDDDDAADDDDADDADDAAADAAADDADAADADDDDDDAADDDDADDAAAADADAADDAAAADDAADDDADADDAADADDDAAADDDADDADDADDAADDDDADDADDDDDDDDDDAAADAADAAADAAADAADDADADDDDAADAADADADADDADAADDDADAAADADDDDAADDDDADDADDADAADADDDDDADADADAAAADDADDADDDDDDDAADDA...
Output
Danik
Answer
Danik
Checker Log
ok "Danik"
Test: #24, time: 0 ms., memory: 124 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
40217
AAAAAAAAADDAAAAAAAAAAAAAADAAAAAAAAAAADAAAAAAAAAAAAAAAADAADAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAAADAAAAAAAAAAAAADAAAAAAAAAAAAAAAAAAAAAADAAAADADAAAAAAAAAADAAADAAADAADAAADDAAAAAAAAAADAAAADAAAAAAAAAAAAAAAAAAAAAAADAAAAAAAAADAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAAAAAAAAAADAAAAAAAAAAAAAAAAAADAAAAAAAAAAADAAAAAAAAAAAAAAAAADAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAAAAAAAAAAAAAADAAAAAAAAAAAAAAAAAAADAAADAAAAAADAAAAAAAAAAAAAADAAAAAAAAAAAADAAAAAAAAAAAAAAADDAAAADAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA...
Output
Anton
Answer
Anton
Checker Log
ok "Anton"
Test: #25, time: 15 ms., memory: 24 KB, exit code: 0, checker exit code: 0, verdict: OK
Input
10000
DDDDDDDDDDDADDDDDDDDDDDDDDDDDDDDDDDDDDDDDADDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDADDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDAADDADDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDADDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD...
Output
Danik
Answer
Danik
Checker Log
ok "Danik"
*/