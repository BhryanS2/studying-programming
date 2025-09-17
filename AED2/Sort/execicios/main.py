l = []
l1 = []
lset = []
l1set = []
win = ''
while True:
    try:
        s = input()
        if s == "FIM":
            win = l[0]
            for i in l:
                if len(i) > len(win):
                    win = i
                if i not in lset:
                    lset.append(i)
            for i in l1:
                if i not in l1set:
                    l1set.append(i)
            l1set.sort()
            lset.sort()

            for i in lset:
                print(i)
            for i in l1set:
                print(i)
            print()
            print('Amigo do Habay:\n%s' % win)
            break
        a, b = s.split()
        if b == 'YES':
            l.append(a)
        else:
            l1.append(a)

    except EOFError:
        break
