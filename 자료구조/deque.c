#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5
typedef int element;
typedef struct {
	element data[MAX_SIZE];
	int head, tail;
}DequeType;

//오류함수
void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

//초기화
void init_deque(DequeType* q) {
	q->head = q->tail = 0;
}

//공백 상태 검출 함수
int is_empty(DequeType* q) {
	return (q->head == q->tail);
}

//포화 상태 검출 함수
int is_full(DequeType* q) {
	return ((q->tail + 1) % MAX_SIZE == q->head);
}

//원형큐 출력 함수
void deque_print(DequeType* q) {
	printf("DEQUE(head =%d rear = %d) =", q->head, q->tail);
	if (!is_empty(q)) {
		int i = q->head;
		do {
			i = (i + 1) % (MAX_SIZE);
			printf("%d | ", q->data[i]);
			if (i == q->tail) {
				break;
			}
		} while (i != q->head);
	}
	prntf("\n");
}
//삽입함수
void add_tail(DequeType* q, element item) {
	if (is_full(q))
		error("큐가 포화상태입니다.");
	q->tail = (q->tail + 1) % MAX_SIZE;
	q->data[q->tail] = item;
}

//삭제함수
element delete_head(DequeType* q) {
	if (is_empty(q))
		error("큐가 공백상태입니다.");
	q->head = (q->head + 1) % MAX_SIZE;
	return q->data[q->head];
}

//삭제함수
element get_head(DequeType* q) {
	if (is_empty(q))
		error("큐가 공백상태입니다.");
	return q->data[(q->head + 1) % MAX_SIZE];
}

void add_head(DequeType* q, element val) {
	if (is_full(q))
		error("큐가 포화상태입니다.");
	q->data[q->head] = val;
	q->head = (q->head - 1 + MAX_SIZE) % MAX_SIZE;
}

element delete_tail(DequeType* q) {
	int prev = q->tail;
	if (is_empty(q))
		error("큐가 공백상태입니다.");
	q->tail = (q->tail - 1 + MAX_SIZE) % MAX_SIZE;
	return q->data[prev];
}

element get_tail(DequeType* q) {
	if (is_empty(q))
		error("큐가 공백상태입니다.");
	return q->data[q->tail];
}
int main(void)
{
	DequeType queue;

	init_deque(&queue);
	for (int i = 0; i < 3; i++) {
		add_head(&queue, i);
		deque_print(&queue);
	}

	for (int i = 0; i < 3; i++) {
		delete_tail(&queue);
		deque_print(&queue);
	}
	return 0;
}