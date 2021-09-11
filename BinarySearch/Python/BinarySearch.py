def BinSearch(list, number):
    low = 0                            # границы рассматриваемого промежутка массива
    high = len(list) - 1

    while low <= high:                 # пока существует рассматриваемый промежуток
        mid = (high + low) // 2        # индекс среднего элемента рассматриваемого промежутка массива
        guess = list[mid]              # средний элемент

        if guess == number:            # сужаем границы рассматриваемого промежутка массива
            return mid
        elif guess > number:
            high = mid - 1
        else:
            low = mid + 1
    return None

n = int(input())                       # кол-во элементов в массиве
my_list = []

for i in range(n):                     # ввод массива
    item = int(input())
    my_list.append(item)

number = int(input())                  # число, которое необходимо найти в массиве

print(BinSearch(my_list, number))
