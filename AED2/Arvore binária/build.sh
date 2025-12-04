gcc -c main.c -o main.o
gcc -o main.exe main.o
./main.exe > output_main.txt


gcc -c 18.c -o 18.o
gcc -o 18.exe 18.o

inputs=(
"5 10 5 15 3 7
4 5 15 20 25
3 7 15 30
1 100"
)
for input in "${inputs[@]}"; do
  echo -e "$input" | ./18.exe
done

echo "arquivo testando tudo\n"
gcc -c testando_metodos.c -o testando_metodos.o
gcc -o testando_metodos.exe testando_metodos.o
./testando_metodos.exe > output_testando_metodos.txt

echo "Limpando arquivos objeto e executáveis..."

rm *.o
rm *.exe
echo "Feito."
