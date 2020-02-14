#!/bin/python3

import os
import sys

#
# Complete the primeCount function below.
#

def checkPrime(n):
    flag = True
    i = 2

    if n == 1:
        flag = False
        return flag

    while i <= (n / 2):
        if n % i == 0:
            flag = False
            break

        i = i + 1

    return flag
    

def primeCount(n):
    #
    # Write your code here.
    #
    product = 1
    counter = 0

    for i in range(1, n + 1):
        if checkPrime(i):
            if (product * i) <= n:
                product *= i
                counter = counter + 1
            else:
                break

    return counter

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        n = int(input())

        result = primeCount(n)

        fptr.write(str(result) + '\n')

    fptr.close()
