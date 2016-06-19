t=int(input())
a=[]
for i in range(t):
    n,m=map(int,input().split())
    a=map(int,input().split())
    a.sort()
    i=0
    j=-2
    size=0
    while(a[-1]!=n):
        if a[i]>=1 and a[i]+a[-1]!=n:
            a[-1]=a[-1]+a[j]+1
            a[i]=a[i]-1
            a[j]=0
            j=j-1
            size=size+1
        elif a[i]!=0 and (a[i]+a[-1])==n:
            size=size+1
            a[-1]=a[-1]+a[i]
        else:
            i=i+1
    print(size)



