for _ in range(int(input())):
    str = input()
    str = list(str[::-1])
    x = 0
    for i in range(1,len(str)):
        if str[i-1] > str[i]:
            for j in range(i):
                if str[j] > str[i]:
                    str[j],str[i] = str[i],str[j]
                    str = sorted(str[:i])[::-1] + str[i:]
                    print("".join(str[::-1]))
                    break
            break
    else:
        print("no answer")
