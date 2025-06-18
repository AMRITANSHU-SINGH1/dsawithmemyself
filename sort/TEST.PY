def partition(arr, low, high):
    pivot = arr[low]
    i = low + 1
    j = high

    while True:
        while i <= j and arr[i] <= pivot:
            i += 1
        while i <= j and arr[j] > pivot:
            j -= 1
        if i <= j:
            arr[i], arr[j] = arr[j], arr[i]
        else:
            break

    arr[low], arr[j] = arr[j], arr[low]
    return j

def qs(arr, low, high):
    if low < high:
        p = partition(arr, low, high)
        qs(arr, low, p - 1)
        qs(arr, p + 1, high)
    return arr

arr = [4, 6, 2, 5, 7, 9, 1]
print(qs(arr, 0, len(arr)-1))
