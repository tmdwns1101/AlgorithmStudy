from itertools import combinations

word = input()

indexes = [i for i in range(1,len(word))]

created_words = []
for index in combinations(indexes, 2):
    index = list(index)
    sample_word1 = word[0:index[0]][::-1]
    sample_word2 = word[index[0]:index[1]][::-1]
    sample_word3 = word[index[1]:len(word)][::-1]
    created_words.append("".join([sample_word1,sample_word2,sample_word3]))

created_words.sort()
print(created_words[0])