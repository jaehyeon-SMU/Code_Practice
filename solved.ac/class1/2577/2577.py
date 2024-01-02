A = int(input())
B = int(input())
C = int(input())

result =str(A * B * C)

count = [0]*10
for num in result:
    count[int(num)] += 1

for i in range(10):
    print(count[i])

#내가 틀린이유
#count = [] 로 써서 리스트가 초기화가 되지 않았다. 빈 리스트에 값을 할당하지 않은 상태에서 인덱스를 사용하려고 하면 IndexError가 발생한다는 것을 알았다.

