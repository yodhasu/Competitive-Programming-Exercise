### Explanation

_to understand the context please see the detail problem at https://codeforces.com/problemset/problem/1855/A_

The problem basically ask you to **automatically assigned every student with different seat** (User input cannot be same with the array index) and then **count how many changes** that you need to make.

So first I start by making an array starting from index **1** to **_n_** number (I'll use 5 as an example). The index acts as seat number. 
```
student number  : 
seat number     :   1   2   3   4   5
changes         :
```
Then input the student number.
```
student number  :   1   2   4   3   5
seat number     :   1   2   3   4   5
changes         :
```
If the student number == seat number

(student[i] == i)

swap current student with next student.
```
student number  :   2   1   4   3   5
seat number     :   1   2   3   4   5
changes         :   1
```
If the student number == seat number and it is the last seat

(student[i] == i && i == arrayLength)

swap the student with the previous student
```
student number  :   2   1   4   5   3
seat number     :   1   2   3   4   5
changes         :   2
```