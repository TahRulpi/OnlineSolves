import math
import os
import random
import re
import sys

def miniMaxSum(arr):
 
    x = sorted(arr)
    print(sum(x[:-1]), sum(x[1:]))  #X([:-1]) IS TO SUM WITHOUT LAST ELEMENT 

    if __name__ == '__main__':

       arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)