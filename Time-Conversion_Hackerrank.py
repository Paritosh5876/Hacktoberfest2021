t = input()
if(t[-2:] == 'AM'):
    if(t[:2] == '12'):
        print('00'+t[2:-2])
    else:
        print(t[:-2])
else:
    hr = int(t[:2])
    if(hr<12):
        hr+=12
    print(str(hr)+t[2:-2])
    
