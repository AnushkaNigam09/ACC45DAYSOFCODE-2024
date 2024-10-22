def is_ball_in(r1, r2, r3, r4):
    return r1 == r2 == r3 == r4 == 0

def main():
    t = int(input())
    for _ in range(t):
        r1, r2, r3, r4 = map(int, input().split())
        if is_ball_in(r1, r2, r3, r4):
            print("IN")
        else:
            print("OUT")

if __name__ == "__main__":
    main()

