/*-----------------------------------------------------------------------
0 zenbakiaz amaituriko zenbaki zerrenda teklatutik irakurri eta zerrenda
berbera alderantziz pantailan idatziko duen programa. 0 - a zerrendaren
amaierako markatzat hartu eta ez zerrendako zenbakitzat.Bestalde, suposa
ezazu ez direla 50 zenbaki baino gehiago etorriko.
-----------------------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int zerrendaEskatu(int b[]);
void zerrendaIrauli(int b[], int dim);
void zerrendaPantailaratu(int b[], int dim);

int main(int argc, char* argv[])
{
  int zenbat;
  int bektore[50];
  char str[128];

  zenbat = zerrendaEskatu(bektore);
  printf("Zuk emandako emandako honako hau da:\n");
  zerrendaPantailaratu(bektore, zenbat);
  printf("\n\nTori orain zerrenda berbera baina alderantziz:\n");
  zerrendaIrauli(bektore, zenbat);
  zerrendaPantailaratu(bektore, zenbat);
  printf("Sakatu \"return\" amaitzeko .....");
  fgets(str, 128, stdin);
  return 0;
}

int zerrendaEskatu(int b[])
{
  int n, zenbat = 0;
  char str[128];

  printf("Hasi zenbakiak sartzen, bat hilarako\n");
  do
  {
    fgets(str, 128, stdin);
    sscanf(str, "%d", &n);
    if (n != 0)
    {
      b[zenbat] = n;
      zenbat++;
    }
  } while (n != 0);
  return zenbat;
}

void zerrendaIrauli(int b[], int dim)
{
  int i, tmp;

  for (i = 0; i < dim / 2; i++)
  {
    tmp = b[i];
    b[i] = b[dim - 1 - i];
    b[dim - 1 - i] = tmp;
  }
}

void zerrendaPantailaratu(int b[], int dim)
{
  int i;

  for (i = 0; i < dim; i++) printf("%d ", b[i]);
  printf("\n");
}
