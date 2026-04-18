def solution(w: int) -> int:
    return w > 2 and w %2 == 0

if __name__ == "__main__":
    # input will get the weight of the watermelon
    w = int(input())

    if solution(w):
        print("YES")
    else:
        print("NO")