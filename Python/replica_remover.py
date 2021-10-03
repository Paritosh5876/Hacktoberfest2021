def remove_replica(ilist):
    ilist2 = []
    for x in ilist:
        if x not in ilist2:
            ilist2.append(x)
    return ilist2


print(remove_replica([1, 4, 4, 5, 7, 7, 9, 9, 9, 9, 22]))