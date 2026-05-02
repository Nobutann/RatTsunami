#ifndef HITBOX_ENEMY_H
#define HITBOX_ENEMY_H

#include <raylib.h>

#define MAX_ENEMIES 2

typedef struct {
  Vector2 posicao;
  Vector2 tamanho;
  float velocidadeX;
  float velocidadeY;
  bool ativo;
  int estado;
  double tempoEstado;
} Inimigo;

void AtualizarDesenharPassaro1(Inimigo *passaro, int currentWidth, int currentHeight, bool sinalAtivar, int velocidadeBase, Texture2D textura);
void AtualizarDesenharPassaro2(Inimigo *passaro, int currentWidth, int currentHeight, bool sinalAtivar, int velocidadeBase, Texture2D textura);
void AtualizarDesenharBike(Inimigo *bike, int currentWidth, int currentHeight, bool sinalAtivar, int velocidadeBase, Texture2D textura);
void AtualizarDesenharMadeira(Inimigo *madeira, int currentWidth, int currentHeight, bool sinalAtivar, int velocidadeBase, Texture2D textura);
void AtualizarDesenharCaboclo(Inimigo *caboclo, int currentWidth, int currentHeight, bool sinalAtivar, int velocidadeBase, Texture2D textura);
void AtualizarDesenharPeixe(Inimigo *peixe, int currentWidth, int currentHeight, bool sinalAtivar, int velocidadeBase, Texture2D textura);

#endif
