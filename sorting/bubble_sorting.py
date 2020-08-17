def bubble_sort(a):
    n = len(a)
    for round in range(1,n):
        for i in range(n-round):
            if a[i] > a[i+1]:
                a[i], a[i+1] = a[i+1], a[i]
                return 5
                


a = [14,6,9,13,27]
print("Original Array:- ",a)
bubble_sort(a)
print("Sorted Array:- ",a)