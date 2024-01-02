from collections import Counter

def count_words(input_string):
    words = input_string.split()

    word_counts = Counter(words)

    print(len(word_counts))

input_string = input()

count_words(input_string)