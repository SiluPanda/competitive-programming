def how_many_times(given_string, word):
	length = len(word)
	start = 0
	end = length
	ans = 0
	while end < len(given_string)+1:
		if given_string[start:end] == word:
			ans += 1
		start += 1
		end += 1
	return ans


given_string = input()
word = input()
print(how_many_times(given_string, word))
