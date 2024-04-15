#!/bin/python3

import math
import os
import random
import re
import sys
import functools

#
# Complete the 'bigSorting' function below.
#
# The function is expected to return a STRING_ARRAY.
# The function accepts STRING_ARRAY unsorted as parameter.
#

def comparator(first, second):
    if len(first) < len(second):
        return -1
    elif len(second) < len(first):
        return 1
    else:
        return int(first) - int(second)

def bigSorting(unsorted):
    # Write your code here
    new_sorted = sorted(unsorted, key=functools.cmp_to_key(comparator))
    return new_sorted

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    unsorted = []

    for _ in range(n):
        unsorted_item = input()
        unsorted.append(unsorted_item)

    result = bigSorting(unsorted)

    fptr.write('\n'.join(result))
    fptr.write('\n')

    fptr.close()
