from math import sqrt

if __name__ == '__main__':
    vet = []
    diff = 0
    c = int(input())
    for i in range(c):
        x, y = [int(inp) for inp in input().split(' ')]
        if(vet.__len__()>=2):
            fd = float(sqrt((vet[0][0]-x)**2+(vet[0][1]-y)**2))
            sd = float(sqrt((vet[1][0]-x)**2+(vet[1][1]-y)**2))
            if(fd > sd):
                if(fd > diff):
                    vet[1][0] = x
                    vet[1][1] = y
                    diff = fd
            else:
                if(sd > diff):
                    vet[0][0] = x
                    vet[0][1] = y
                    diff = sd
        else:
            vet.append([x, y])
            if(vet.__len__() == 2):
                diff = sqrt((vet[0][0] - vet[1][0])**2 + (vet[0][1] - vet[1][1])**2)

    print('{0:.8f}'.format(diff))
