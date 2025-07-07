import sys
import math

def main():
    input = sys.stdin.readline
    y, k = map(int, input().split())

    x = 1
    MAX_PASSOS = 100_000

    vistos = {}
    avancos = []

    passo = 0
    while passo < MAX_PASSOS and k > 0:
        resto = x % y
        if resto in vistos:
            inicio_ciclo = vistos[resto]
            tamanho_ciclo = passo - inicio_ciclo
            soma_ciclo = sum(avancos[inicio_ciclo:])

            ciclos_completos = k // tamanho_ciclo
            passos_restantes = k % tamanho_ciclo

            x += ciclos_completos * soma_ciclo
            for i in range(inicio_ciclo, inicio_ciclo + passos_restantes):
                x += avancos[i]
            print(x)
            return

        g = math.gcd(x, y)
        vistos[resto] = passo
        avancos.append(g)
        x += g
        k -= 1
        passo += 1

    x += k
    print(x)

if __name__ == "__main__":
    main()
