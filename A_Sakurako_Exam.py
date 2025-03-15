t = int(input())  

for _ in range(t):
    a, b = map(int, input().split())  
    if (b * 2) % 2 == 0:  
        print("YES")
    else:
        print("NO")
