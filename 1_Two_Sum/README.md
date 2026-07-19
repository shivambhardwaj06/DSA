# 1. Two Sum

## Problem
Given an array of integers `nums` and an integer `target`, return the indices of the two numbers whose sum equals the target.

---

## My Learning Flow

### Approach 1 - Brute Force
- Check every possible pair using two nested loops.
- If the sum equals the target, return the indices.

**Time Complexity:** `O(n²)`  
**Space Complexity:** `O(1)`

---

### Approach 2 - Sorting + Two Pointers
### Idea
- Store each element as `{value, original_index}`.
- Sort the array based on values.
- Use two pointers:
  - Left pointer for smaller values.
  - Right pointer for larger values.
- Move pointers according to the current sum.
- Return the original indices stored in the pair.

**Time Complexity:** `O(n log n)`  
**Space Complexity:** `O(n)`

---

## Why store `{value, index}`?

Sorting changes the order of elements.

Example:

```
Original

Value : 22 34 21 43
Index :  0  1  2  3

Store

(22,0)
(34,1)
(21,2)
(43,3)
```

After sorting:

```
(21,2)
(22,0)
(34,1)
(43,3)
```

Even after sorting, the original indices are preserved.

---

## Important Syntax

### Store value with index

```cpp
vector<pair<int,int>> arr;

arr.push_back({nums[i], i});
```

### Sort pair vector

```cpp
sort(arr.begin(), arr.end());
```

Default sorting order:

- Compare `.first`
- If equal, compare `.second`

---

### Two Pointer

```cpp
int left = 0;
int right = n - 1;

while(left < right)
{
    int sum = arr[left].first + arr[right].first;

    if(sum == target)
        return {arr[left].second, arr[right].second};
    else if(sum < target)
        left++;
    else
        right--;
}
```

---

## What I Learned

- How sorting can simplify searching.
- Why original indices must be stored before sorting.
- Basic use of `pair`.
- Two Pointer technique.
- Default behavior of `sort()` on `pair`.

---

## Next Improvement

Solve the same problem using **Hash Map** to reduce the time complexity from `O(n log n)` to `O(n)`.