import math
import os
import random
import re
import sys



def remove_spaces(s):
	return s.replace(" ", "")

if __name__ == '__main__':

	s = input()
	snew = remove_spaces(s)
	print(snew)
	l = []
	max_width = math.floor(math.sqrt(len(snew)))
	max_height = math.ceil(math.sqrt(len(snew)))
	itr = 0
	while itr < len(snew):
		p = []
		while itr % max_width != 0 or itr != len(snew):
			p.append(snew[itr])
			itr  = itr +1
		l.append(p)
	print(l)



