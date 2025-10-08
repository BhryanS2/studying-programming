#include <stdio.h>
#include <string.h>

int meu_str_cmp(const char* s1, const char* s2) {
  // o str cmp retorna 0 se iguais
  // retorna 1 se s1 > s2
  // retorna -1 se s1 < s2
  // compara lexicograficamente
  while (*s1 && (*s1 == *s2)) {
    s1++;
    s2++;
  }
  int diff = *(unsigned char*)s1 - *(unsigned char*)s2;
  if (diff == 0) return 0;
  return (diff > 0) ? 1 : -1;
}


int main() {
  const char* str1 = "hello";
  const char* str2 = "hello";
  const char* str3 = "world";

  printf("Comparando '%s' e '%s': %d\n", str1, str2, meu_str_cmp(str1, str2));
  printf("Comparando '%s' e '%s': %d\n", str1, str3, meu_str_cmp(str1, str3));
  printf("Comparando '%s' e '%s': %d\n", str3, str1, meu_str_cmp(str3, str1));

  // str_cmp de verdade
  printf("Comparando '%s' e '%s': %d\n", str1, str2, strcmp(str1, str2));
  printf("Comparando '%s' e '%s': %d\n", str1, str3, strcmp(str1, str3));
  printf("Comparando '%s' e '%s': %d\n", str3, str1, strcmp(str3, str1));


  return 0;
}