# optimize approach take time complexity O(n)

arr = [4, 3, 5, 2, 6, 7, 8]
n = len(arr)

total = sum(arr)
leftSum = 0

for pivot in range(len(arr)):

    rightSum = total - leftSum - arr[pivot]

    if leftSum == rightSum:
        print(pivot)
        break

    leftSum += arr[pivot]