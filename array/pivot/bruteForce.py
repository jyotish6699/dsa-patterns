# brute force approach time complexity take O(n**2)

arr = [3, 5, 3, 5, 6, 7, 9]
n = len(arr)

for pivot in range(n):

    leftSum = 0
    rightSum = 0

    left = 0
    right = pivot + 1

    while left < pivot:
        leftSum += arr[left]
        left += 1

    while right < n:
        rightSum += arr[right]
        right += 1

    if leftSum == rightSum:
        break

print(pivot)