def BinSearch(list, number):
    low = 0
    high = len(list) - 1

    while low <= high:
        mid = (high + low) // 2
        guess = list[mid]

        if guess == number:
            return mid
        elif guess > number:
            high = mid - 1
        else:
            low = mid + 1
    return None


my_list = [1, 2, 3, 4, 5]

nums = int(input())

print(BinSearch(my_list, nums))
