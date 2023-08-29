#collatz conjecture exercise

def steps(number):
    if number >= 1:
        i = 0
        if number == 1:
            return 0
        while number > 1:
            if number%2 == 0:
                number = number/2
                i += 1
            else:
                number = (3*number) + 1
                i += 1
        return i
        #evens divide by 2
                
            
        #odds do 3n+1
        
        #till it gets down to 1
    else:    
        raise ValueError("Only positive integers are allowed")