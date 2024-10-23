def min_attacks(h, x, y):
    # First, use the special attack if beneficial
    if h <= y:
        return 1
    else:
        # Use the special attack and then normal attacks
        remaining_health = h - y
        if remaining_health % x == 0:
            return 1 + remaining_health // x
        else:
            return 1 + (remaining_health // x) + 1

def main():
    t = int(input())
    for _ in range(t):
        h, x, y = map(int, input().split())
        print(min_attacks(h, x, y))

if __name__ == "__main__":
    main()
