OS Scheduler - Priority Scheduling

Description:

This project implements a Priority Scheduling algorithm for an Operating System scheduler. The scheduler reads a set of processes from an input file, determines their execution order based on priority, and outputs execution details such as response time, turnaround time, and delay.

Features:

✔ Implements Priority Scheduling with tie-breaking based on arrival time and process order.

✔ Reads process data from in.txt and outputs results to out.txt.

✔ Handles large input values (up to 100,000,000).

✔ Developed in C/C++, compiled using g++ in a Linux (Ubuntu) environment.

✔ Ensures correctness through various test cases, including edge cases.

Usage:

1) Compile the code: 
  g++ scheduler.cpp -o scheduler

2) Run the program:
  ./scheduler
