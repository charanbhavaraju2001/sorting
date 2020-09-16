#python program to sort array elements using selection sort algorithm

def selectionsort(array,n):
    for i in range(n):
        min = i
        for j in range(i+1,n):
            if array[min] > array[j]:
                min = j
        array[i],array[min]=array[min],array[i]
    print(array)

array = [7,1,6,3,9,2,5,4,8]
n = len(array)
selectionsort(array,n)
