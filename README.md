Usage:
Compile the code using:

g++ scheduler.cpp -o scheduler


Run the program:

./scheduler


Input file (in.txt) format:

5
A   0   3   3
C   4   4   4
B   2   6   6
D   6   5   5
E   8   2   2

Output file (out.txt) format:

ABDCE
A: (response=0, turnaround=3, delay=0)
B: (response=1, turnaround=7, delay=1)
D: (response=3, turnaround=8, delay=3)
C: (response=10, turnaround=14, delay=10)
E: (response=10, turnaround=12, delay=10)
