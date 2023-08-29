def median(upper,lower):
    i = 0
    i = int((upper+lower)/2)
    return i

def find(search_list, value):
    half = int((len(search_list))/2)
    upper = len(search_list)-1
    lower = 0

    try:
        if value == search_list[lower]:
                return lower 
        elif value == search_list[upper]:
                return upper

        while value != search_list[half]:
            
            if value < search_list[half]:
                upper = half
                half = (upper+lower)/2
                #half = int((upper+lower)/2)
            else:
                lower = half
                half = (upper+lower)/2
                #half = int((upper+lower)/2)
        else:
            return half
                
    except:
        raise ValueError("value not in array")

