Solution to problem [4A](https://codeforces.com/problemset/problem/4/A).

# 4A. Watermelon

## PROBLEM: [LINK](https://codeforces.com/problemset/problem/4/A)

**time limit per test:** 1 second<br/>
**memory limit per test:** 64 megabytes

One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that the watermelon was weighed, and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.

Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.

## Input

The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.

## Output

Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.

## Examples

```
Input
8

Output
YES
```

**Note:**<br/>
For example, the boys can divide the watermelon into two parts of 2 and 6 kilos respectively (another variant — two parts of 4 and 4 kilos).

## Solution

```python
def solution(w: int) -> int:
    return w > 2 and w %2 == 0

if __name__ == "__main__":
    # input is the weight of the watermelon
    w = int(input())

    if solution(w):
        print("YES")
    else:
        print("NO")
```

## Explanation

The watermelon of weight `w` can only be divided into two even portion only if the weight itself is even and greater than 2. Any odd weight or a weight of 2 cannot be divided into two even parts; either one or both portion will be odd.

## Complexity
**Time:** O(1) <br/>
**Space:** O(1)
