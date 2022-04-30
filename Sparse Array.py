def matchingStrings(strings, queries):
    # Write your code here
    arr=[]
    for i in queries:
        arr.append(strings.count(i))
    return arr
