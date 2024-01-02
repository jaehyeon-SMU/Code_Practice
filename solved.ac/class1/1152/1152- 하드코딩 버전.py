def count_words_hardcoded(input_string):
    # 문자열에서 공백을 기준으로 단어 추출
    words = input_string.split()

    # 단어의 등장 횟수를 저장할 딕셔너리 초기화
    word_counts = {}

    # 단어의 등장 횟수 계산
    for word in words:
        # 단어가 딕셔너리에 이미 존재하면 카운트 증가, 없으면 1로 초기화
        if word in word_counts:
            word_counts[word] += 1
        else:
            word_counts[word] = 1

    # 결과 출력
    print(len(word_counts))

# 입력 받기
input_string = input()

# 함수 호출
count_words_hardcoded(input_string)