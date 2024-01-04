def find_room_number(h, w, n):
    floor = n % h
    if floor == 0:
        floor = h
    room_number = (n - 1) // h + 1
    return floor * 100 + room_number

def main():
    t = int(input())
    for _ in range(t):
        h, w, n = map(int, input().split())
        result = find_room_number(h, w, n)
        print(result)

if __name__ == "__main__":
    main()