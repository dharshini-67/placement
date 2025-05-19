def find_odd_even_numbers(arr):
    even_numbers = []
    odd_numbers = []

    for num in arr:
        if num % 2 == 0:
            even_numbers.append(num)
        else:
            odd_numbers.append(num)

    return even_numbers, odd_numbers

# Example usage
array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
evens, odds = find_odd_even_numbers(array)

print("Even numbers:", evens)
print("Odd numbers:", odds)
