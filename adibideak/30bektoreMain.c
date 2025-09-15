/*-----------------------------------------------------------------------
0 zenbakiaz amaituriko zenbaki zerrenda teklatutik irakurri eta zerrenda
berbera alderantziz pantailan idatziko duen programa. 0 - a zerrendaren
amaierako markatzat hartu eta ez zerrendako zenbakitzat.Bestalde, suposa
ezazu ez direla 50 zenbaki baino gehiago etorriko.
-----------------------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{
  int i, n, zenbat;
  int bektore[50];
  char str[128];

  zenbat = 0;
  printf("Hasi zenbakiak sartzen, bat hilarako\n");
  do
  {
    fgets(str, 128, stdin);
    sscanf(str, "%d", &n);
    if (n != 0)
    {
      bektore[zenbat] = n;
      zenbat++;
    }
  } while (n != 0);
  printf("Zuk emandako zerrenda honako hau da:\n");
  for (i = 0; i < zenbat; i++) printf("%d ", bektore[i]);
  printf("\n\nTori orain zerrenda berbera baina alderantziz:\n");
  for (i = zenbat - 1; i >= 0; i--) printf("%d ", bektore[i]);
  printf("\n");
  printf("Sakatu \"return\" amaitzeko .....");
  fgets(str, 128, stdin);
  return 0;
}
