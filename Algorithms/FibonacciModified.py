#!/bin/python3

import math
import os
import random
import re
import sys

dp = []

# Complete the fibonacciModified function below.
def fibonacciModified(t1, t2, n):
    for iteration in range( 2, n ):
        print( iteration )
        dp.append(dp[ iteration - 2 ] + dp[ iteration - 1 ] * dp[ iteration - 1 ])

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t1T2n = input().split()

    t1 = int(t1T2n[0])

    t2 = int(t1T2n[1])

    n = int(t1T2n[2])

    dp.append( t1 )

    dp.append( t2 )

    fibonacciModified(t1, t2, n)

    fptr.write(str( dp[ n - 1 ] ) + '\n')

    fptr.close()
