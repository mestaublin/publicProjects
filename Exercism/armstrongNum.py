#armstrong numbers exercise

def is_armstrong_number(number):
    digits = []
    total = 0
    num = 0
    for i in str(number):
        digits.append(int(i))
    for num in digits:
        total +=  num**(len(digits))
    if total == number:
        return True
    else: 
        return False