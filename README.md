# AttendanceManager
A basic non-GUI attendance checking and absence managing program written in C. Tracks the attedance percentage day-by-day, until the attendance requirement is met.
Starting from the next working day, and displays the predicted attendance for each day.

## Installation
Use a C compiler such as GCC or Clang to compile the C file and run it

Linux:
```bash
# Compiling C file
cc att.c
# Running executable file
./a.out
```

Windows:
```batch
:: Compiling C file
gcc -o att.exe att.c
:: Running Executable file
att.exe
```

## Usage
After running the executable file, the program asks for your attendance requirement goal. Enter the attendance percentage requirement/goal.
```
# Example input : 75%
Enter the percentage required in numbers :      75
```

Moving forward, an input of your schedule will be required.
```
# Example input: Number of hours on each day are given below
#   Monday (Day 0) = 1
#   Tuesday (Day 1) = 0
#   Wednesday (Day 2) = 2
#   Thursday (Day 3) = 1
#   Friday (Day 4) = 1
#   Saturday (Day 5) = 0
Schedule :
         Day 0 ; Hours :        1
         Day 1 ; Hours :        0
         Day 2 ; Hours :        2
         Day 3 ; Hours :        1
         Day 4 ; Hours :        1
         Day 5 ; Hours :        0
```

Enter the hours you have been present for currently and the total number of hours conducted.
```
#Example input : 
#   Present 10 hours
#   Total 15 hours conducted
Present Hours:         10
Total Hours:        15
```

Enter the next working day.
Enter :
  0 for Monday
  1 for Tuesday
  2 for Wednesday
  3 for Thursday
  4 for Friday
  5 for Saturday
```
# Example input : Thursday
Next working day:    3
```

Enter the number of days you will be skipping after today.
```
# Example input : Absence of 3 days
Number of absences:         3
```

Enter the days you will be skipping. The next working day is day 1.
```
# Example input : Skipping the next first three working days.
Skipping the following days:
1
2
3
```

The program will then display a table-format tracking of the attendance percentage until the attendance criteria is met.
```
# For the given example
Day     Pre/Tot %
=====================
0       10/15   66.666667
1       10/16   62.500000       (SKIPPED)
2       10/17   58.823529       (SKIPPED)
3       10/17   58.823529       (SKIPPED)
4       11/18   61.111111
5       11/18   61.111111
6       13/20   65.000000
7       14/21   66.666667
8       15/22   68.181818
9       15/22   68.181818
10      16/23   69.565217
11      16/23   69.565217
12      18/25   72.000000
13      19/26   73.076923
14      20/27   74.074074
15      20/27   74.074074
16      21/28   75.000000
17      21/28   75.000000
18      23/30   76.666667
```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.
