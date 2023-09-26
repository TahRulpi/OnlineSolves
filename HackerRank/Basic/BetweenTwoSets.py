import math
import os
import random
import re
import sys


from functools import reduce

def getTotalX(a, b):
    
    def gcd(a,b):
        if(b == 0):
            return a
        else:
            return gcd(b, a % b)
        
    def lcm(a,b):
        return a*b//gcd(a, b)
    
    l = reduce (lcm, a)
    g = reduce (gcd, b)
    
    
    #MULTIPLE OF LCM WHICH % 
    sum = 0
    for i in range (l, g+1, l):
        if g % i == 0:
            sum += 1
    return sum
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    arr = list(map(int, input().rstrip().split()))

    brr = list(map(int, input().rstrip().split()))

    total = getTotalX(arr, brr)

    fptr.write(str(total) + '\n')

    fptr.close()
