#insertion sort algorithm

def insertionsort ( a , n ):
    for i in range (1,len(a)) :
        temp = a[i]
        j = i-1
        while ( j >= 0 and a[j] > temp ) :
            a[j+1]=a[j]
            j-=1
        a[j+1]=temp

a = [ 9,7,2,5,3,1,8,6,4 ]
n = len(a)
insertionsort(a,n)
print(a)
