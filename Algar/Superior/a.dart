void main() {
  int n = 3;
  List <int> flores = [1, 2, 3];
  int jovem = 0;
  int adulto = 0;
  int idoso = 0;

  for (int i = 0; i < n; i++) {
    if (flores[i] == 1) {
      jovem++;
    } else if (flores[i] == 2) {
      adulto++;
      idoso++;
    }
  }

  print("Jovem: $jovem");
  print("Adulto: $adulto");
  print("Idoso: $idoso");
}