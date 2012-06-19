#ifndef LISTS_H_INCLUDED
#define LISTS_H_INCLUDED //L_H_INCLUDED
#include "main.h"
#include "play.h"

void Fire_Bullet(struct Game *game); //wystrzelenie pocisku - dodaje element do listy jednokierunkowej
void Free_Fire(struct Game *game); //usuni�cie pocisku z listy, gdy spe�niony b�dzie dany warunek

void Create_Fodder(struct Game *game); //pojawianie si� wie�niak�w - dodanie elementu do listy
void Free_Fodder(struct Game *game); //usuni�cie elementu z listy, gdy wyjdzie za ekran lub zginie
void Burn_Fodder(struct Game *game); //sprawdzanie kolizji - dla ka�dego wie�niaka sprawdza wszystkie pociski

void Add_Smoke(struct Game *game, float x, float y, int type); //dodanie dymku od pocisku do listy
void Free_Smoke(struct Game *game); //usuni�cie elementu z listy, gdy wszystkie klatki jego animacji przelec�

void Add_Obstacles(struct Game *game, float x1, float y1, int state, float x2, float y2); //dodanie przeszk�d lataj�cych do listy - wid�e�, chmur m�ki, owczych defragmentator�w
void Free_Obstacles(struct Game *game); //usuni�cie przeszk�w z listy po kolizji ze smokiem lub wyleceniu za ekran
void Collide_Obstacles(struct Game *game); //dla ka�dego elementu sprawdza, czy jego wsp�rz�dne wchodz� w obszar smoka

void Absolute_Free(struct Game *game); //zwolnienie wszystkich element�w ze wszystkich list - NEW GAME albo strata �ycia

#endif // LISTS_H_INCLUDED
