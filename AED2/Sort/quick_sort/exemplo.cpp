#include <bits/stdc++.h>
using namespace std;

void quic_sort(char *str, int l, int r)
{
  int i = l, j = r;
  char pivo = str[(l + r) / 2];

  while (i <= j)
  {
    while ((str[i] < pivo) && (i < r)) i++;
    while ((pivo < str[j]) && (j > l)) j--;
    if (i <= j)
    {
      swap(str[i], str[j]);
      i++;
      j--;
    }
  }

  if (l < j) quic_sort(str, l, j);
  if (i < r) quic_sort(str, i, r);
}

int main()
{
  char s[] = "ADRENO";
  quic_sort(s, 0, strlen(s) - 1);
  cout << s << endl;
}
