import math
import os
import random
import re
import sys


def birthdayCakeCandles(candles):
    m = len(candles)
    maximum = 0 ; count = 0
    for i in range (m):
       if candles[i] > maximum:
          maximum = candles[i]
          count = 1
          
       elif candles[i]==maximum:
        count += 1 
        
    return count

    
  

    if __name__ == '__main__':
     
     fptr = open(os.environ['OUTPUT_PATH'], 'w')

     candles_count = int(input().strip())

     candles = list(map(int, input().rstrip().split()))

     result = birthdayCakeCandles(candles)

     fptr.write(str(result) + '\n')

     fptr.close()
