def compareTriplets(a, b):
    # Write your code here
    res=[]
    A=0
    B=0
    for i in range(0,len(a)):
        if(a[i]>b[i]):
            A=A+1
        elif(b[i]>a[i]):
            B=B+1
        else:
            continue
    
    res.append(A)
    res.append(B)
    return res
