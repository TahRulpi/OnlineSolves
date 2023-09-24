#'''[07:05:45PM]'''
#''' 0123456789'''
#'''   -4-3-2-1'''
def timeConversion(time):
    if time[-2:]=='AM' and time[:2] == '12':
        return "00" + time[2:-2] # To make 12AM as 00 and remove AM
    elif time[-2:] == 'AM':
        return time [:-2] #For removing AM
    elif time[-2:] == 'PM' and time[:2] =='12':
        return time[:-2] #For removing PM
    else:
        return str(int(time[:2]) + 12) + time[2:-2]
    
print("Enter time")
time = input()
print(timeConversion(time))