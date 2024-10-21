def can_achieve_score(n, x, y):
    # If y is a multiple of x and within the range of achievable scores
    return y % x == 0 and y <= n * x

def main():
    t = int(input())
    for _ in range(t):
        n, x, y = map(int, input().split())
        if can_achieve_score(n, x, y):
            print("YES")
        else:
            print("NO")

if __name__ == "__main__":
    main()

