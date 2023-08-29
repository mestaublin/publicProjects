#Grains exercise for python

def square(number):
    i = 1
    total = 0

    if number <= 64 and number > 0:
        while i <= number:
            if i == 1:
                total = 1
            else:
                total = total*2
            i += 1
        return (total)

    else:
        raise ValueError("square must be between 1 and 64")
        pass


def total():
    i = 1
    fullTotal = 0
    while i <= 64:
        fullTotal += square(i)
        i += 1
    return (fullTotal)

