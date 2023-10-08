# Project Title
CHINESE REMAINDER THEOREM IMPLEMENTATION

# Description
This application is to implement Chinese Remainder Theorem, which supports constructing the residue table and performing arithmetic operations.
Create a file folder and specify the name, such as "CRT"
Download files: CRT.cpp, ElementPair.cpp, ElementPair.h, Dockerfile, CRT
Put downloaded files into the folder above

# Build and run docker
docker build -t docker build -t crt .
docker run -it crt

# construct and output the table
Run program with input: n = 115 p = 23 q = 5
Key in the number, and the output will be like this:

Let's construct the table of residues modulo (p,q) for all integers in Zn.
First, input a positive semi-prime number n: 115
Second, input the first prime number p: 23
Then, input the second prime number q: 5
Here is the table output:
0 = {0 mod 23, 0 mod 5} = {0, 0}
1 = {1 mod 23, 1 mod 5} = {1, 1}
2 = {2 mod 23, 2 mod 5} = {2, 2}
3 = {3 mod 23, 3 mod 5} = {3, 3}
4 = {4 mod 23, 4 mod 5} = {4, 4}
5 = {5 mod 23, 5 mod 5} = {5, 0}
6 = {6 mod 23, 6 mod 5} = {6, 1}
7 = {7 mod 23, 7 mod 5} = {7, 2}
8 = {8 mod 23, 8 mod 5} = {8, 3}
9 = {9 mod 23, 9 mod 5} = {9, 4}
10 = {10 mod 23, 10 mod 5} = {10, 0}
11 = {11 mod 23, 11 mod 5} = {11, 1}
12 = {12 mod 23, 12 mod 5} = {12, 2}
13 = {13 mod 23, 13 mod 5} = {13, 3}
14 = {14 mod 23, 14 mod 5} = {14, 4}
15 = {15 mod 23, 15 mod 5} = {15, 0}
16 = {16 mod 23, 16 mod 5} = {16, 1}
17 = {17 mod 23, 17 mod 5} = {17, 2}
18 = {18 mod 23, 18 mod 5} = {18, 3}
19 = {19 mod 23, 19 mod 5} = {19, 4}
20 = {20 mod 23, 20 mod 5} = {20, 0}
21 = {21 mod 23, 21 mod 5} = {21, 1}
22 = {22 mod 23, 22 mod 5} = {22, 2}
23 = {23 mod 23, 23 mod 5} = {0, 3}
24 = {24 mod 23, 24 mod 5} = {1, 4}
25 = {25 mod 23, 25 mod 5} = {2, 0}
26 = {26 mod 23, 26 mod 5} = {3, 1}
27 = {27 mod 23, 27 mod 5} = {4, 2}
28 = {28 mod 23, 28 mod 5} = {5, 3}
29 = {29 mod 23, 29 mod 5} = {6, 4}
30 = {30 mod 23, 30 mod 5} = {7, 0}
31 = {31 mod 23, 31 mod 5} = {8, 1}
32 = {32 mod 23, 32 mod 5} = {9, 2}
33 = {33 mod 23, 33 mod 5} = {10, 3}
34 = {34 mod 23, 34 mod 5} = {11, 4}
35 = {35 mod 23, 35 mod 5} = {12, 0}
36 = {36 mod 23, 36 mod 5} = {13, 1}
37 = {37 mod 23, 37 mod 5} = {14, 2}
38 = {38 mod 23, 38 mod 5} = {15, 3}
39 = {39 mod 23, 39 mod 5} = {16, 4}
40 = {40 mod 23, 40 mod 5} = {17, 0}
41 = {41 mod 23, 41 mod 5} = {18, 1}
42 = {42 mod 23, 42 mod 5} = {19, 2}
43 = {43 mod 23, 43 mod 5} = {20, 3}
44 = {44 mod 23, 44 mod 5} = {21, 4}
45 = {45 mod 23, 45 mod 5} = {22, 0}
46 = {46 mod 23, 46 mod 5} = {0, 1}
47 = {47 mod 23, 47 mod 5} = {1, 2}
48 = {48 mod 23, 48 mod 5} = {2, 3}
49 = {49 mod 23, 49 mod 5} = {3, 4}
50 = {50 mod 23, 50 mod 5} = {4, 0}
51 = {51 mod 23, 51 mod 5} = {5, 1}
52 = {52 mod 23, 52 mod 5} = {6, 2}
53 = {53 mod 23, 53 mod 5} = {7, 3}
54 = {54 mod 23, 54 mod 5} = {8, 4}
55 = {55 mod 23, 55 mod 5} = {9, 0}
56 = {56 mod 23, 56 mod 5} = {10, 1}
57 = {57 mod 23, 57 mod 5} = {11, 2}
58 = {58 mod 23, 58 mod 5} = {12, 3}
59 = {59 mod 23, 59 mod 5} = {13, 4}
60 = {60 mod 23, 60 mod 5} = {14, 0}
61 = {61 mod 23, 61 mod 5} = {15, 1}
62 = {62 mod 23, 62 mod 5} = {16, 2}
63 = {63 mod 23, 63 mod 5} = {17, 3}
64 = {64 mod 23, 64 mod 5} = {18, 4}
65 = {65 mod 23, 65 mod 5} = {19, 0}
66 = {66 mod 23, 66 mod 5} = {20, 1}
67 = {67 mod 23, 67 mod 5} = {21, 2}
68 = {68 mod 23, 68 mod 5} = {22, 3}
69 = {69 mod 23, 69 mod 5} = {0, 4}
70 = {70 mod 23, 70 mod 5} = {1, 0}
71 = {71 mod 23, 71 mod 5} = {2, 1}
72 = {72 mod 23, 72 mod 5} = {3, 2}
73 = {73 mod 23, 73 mod 5} = {4, 3}
74 = {74 mod 23, 74 mod 5} = {5, 4}
75 = {75 mod 23, 75 mod 5} = {6, 0}
76 = {76 mod 23, 76 mod 5} = {7, 1}
77 = {77 mod 23, 77 mod 5} = {8, 2}
78 = {78 mod 23, 78 mod 5} = {9, 3}
79 = {79 mod 23, 79 mod 5} = {10, 4}
80 = {80 mod 23, 80 mod 5} = {11, 0}
81 = {81 mod 23, 81 mod 5} = {12, 1}
82 = {82 mod 23, 82 mod 5} = {13, 2}
83 = {83 mod 23, 83 mod 5} = {14, 3}
84 = {84 mod 23, 84 mod 5} = {15, 4}
85 = {85 mod 23, 85 mod 5} = {16, 0}
86 = {86 mod 23, 86 mod 5} = {17, 1}
87 = {87 mod 23, 87 mod 5} = {18, 2}
88 = {88 mod 23, 88 mod 5} = {19, 3}
89 = {89 mod 23, 89 mod 5} = {20, 4}
90 = {90 mod 23, 90 mod 5} = {21, 0}
91 = {91 mod 23, 91 mod 5} = {22, 1}
92 = {92 mod 23, 92 mod 5} = {0, 2}
93 = {93 mod 23, 93 mod 5} = {1, 3}
94 = {94 mod 23, 94 mod 5} = {2, 4}
95 = {95 mod 23, 95 mod 5} = {3, 0}
96 = {96 mod 23, 96 mod 5} = {4, 1}
97 = {97 mod 23, 97 mod 5} = {5, 2}
98 = {98 mod 23, 98 mod 5} = {6, 3}
99 = {99 mod 23, 99 mod 5} = {7, 4}
100 = {100 mod 23, 100 mod 5} = {8, 0}
101 = {101 mod 23, 101 mod 5} = {9, 1}
102 = {102 mod 23, 102 mod 5} = {10, 2}
103 = {103 mod 23, 103 mod 5} = {11, 3}
104 = {104 mod 23, 104 mod 5} = {12, 4}
105 = {105 mod 23, 105 mod 5} = {13, 0}
106 = {106 mod 23, 106 mod 5} = {14, 1}
107 = {107 mod 23, 107 mod 5} = {15, 2}
108 = {108 mod 23, 108 mod 5} = {16, 3}
109 = {109 mod 23, 109 mod 5} = {17, 4}
110 = {110 mod 23, 110 mod 5} = {18, 0}
111 = {111 mod 23, 111 mod 5} = {19, 1}
112 = {112 mod 23, 112 mod 5} = {20, 2}
113 = {113 mod 23, 113 mod 5} = {21, 3}
114 = {114 mod 23, 114 mod 5} = {22, 4}

# now start calculation
1) Perform addition operation, with input +, 57, 38
Key in the input and the output will be like this:

Now, let's test arithmetic operations using CRT.
Specify one of three operations: +, -, or *, input 0 to quit
Input your operation: +
Input your first operand: 57
Input your second operand: 38
57 + 38 => {(11 + 15) mod 23, (2 + 3) mod 5} = {3, 0}  

2) Perform subtraction operation, with input -, 100, 86
Key in the input and the output will be like this:

Specify one of three operations: +, -, or *, input 0 to quit
Input your operation: -
Input your first operand: 100
Input your second operand: 86
100 - 86 => {(8 - 17) mod 23, (0 - 1) mod 5} = {14, 4}  

3) Perform subtraction operation, with input *, 18, 5
Key in the input and the output will be like this:

Specify one of three operations: +, -, or *, input 0 to quit
Input your operation: *
Input your first operand: 18
Input your second operand: 5
18 * 5 => {(18 * 5) mod 23, (3 * 0) mod 5} = {21, 0} 

4) Exit the program with input 0
Key in the input, and the program will stop.
