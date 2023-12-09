import sys

N = int(sys.stdin.readline())

s = []

for i in range(N):
    line = sys.stdin.readline().split()
    command = line[0]
    if command == "push":
        number = int(line[1])

    if command == "push":
        s.append(number)
    elif command == "pop":
        if not s:
            print(-1)
        else:
            print(s[-1])
            s.pop()
    elif command == "size":
        print(len(s))
    elif command == "empty":
        print(int(not s))
    elif command == "top":
        if not s:
            print(-1)
        else:
            print(s[-1])