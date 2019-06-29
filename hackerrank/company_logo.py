#!/bin/python3

import math
import os
import random
import re
import sys
from collections import *
import operator




s = input()
d = {}
l = len(s)
for i in range(l):
    d[s[i]] = 0
for i in range(l):
    d[s[i]] += 1

sorted_x = sorted(d.items(), key=operator.itemgetter(1), reverse = True)
l1 = []
l2 = []
l3 = []

i = 0

val = sorted_x[0][1]
while val == sorted_x[i][1]:
    l1.append(sorted_x[i][0])
    i = i+1
print(min(l1), val)
val = sorted_x[i][1]
while val == sorted_x[i][1]:
    l2.append(sorted_x[i][0])
    i = i+1
print(min(l2), val)
val = sorted_x[i][1]
while val == sorted_x[i][1]:
    l3.append(sorted_x[i][0])
    i = i+1
print(max(l3), val)







    
