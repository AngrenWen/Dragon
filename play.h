#ifndef PLAY_H_INCLUDED
#define PLAY_H_INCLUDED
#include "main.h"

void Play_Game(struct Game *game); //rysowanie wszystkich grafik podczas gry, inkrementowanie warto�ci np. pozycji poszczeg�lnych element�w z list
void Increment_All(struct Game *game); //inkrementowanie r�nych zmiennych u�ywanych w czasie trwania gry
void Revive_Dragon(struct Game *game); //utrata �ycia przez smoka, wywo�uje te� funkcj� zwolnienia wszystkich list - nowe �ycie, nowa szansa

#endif // PLAY_H_INCLUDED
