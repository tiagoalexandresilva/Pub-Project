//
//  primitivas.h
//  Projecto CG
//
//  Created by Tiago Oliveira on 31/5/13.
//  Copyright (c) 2013 Tiago Oliveira. All rights reserved.
//

#ifndef __Projecto_CG__primitivas__
#define __Projecto_CG__primitivas__

#include <iostream>
#include "main.h"

#endif /* defined(__Projecto_CG__primitivas__) */

float** cilindro( float altura, float raio, int resolucao,float posx, float posy, float posz,float*norm,float*tex);
float** esfera(float raio, int resolucao,float posx, float posy, float posz,float*norm,float*tex);
float** cubo (float x, float y, float z,float posx, float posy, float posz,float*normal,float*tex);
float** plano(float comprimento,float largura,float posx, float posy, float posz,float*norm,float*tex);


void drawCilindro(GLuint vertexbuffer,GLuint normalbuffer ,GLuint texbuffer,int resolucao,unsigned int texID, float*color);
void drawEsfera(GLuint vertexbuffer,GLuint normalbuffer,GLuint texbuffer,int resolucao,unsigned int texID, float*color);
void drawCubo(GLuint vertexbuffer,GLuint normalbuffer,GLuint texbuffer,unsigned int texID, float*color);
void drawPlano(GLuint vertexbuffer,GLuint normalbuffer,GLuint texbuffer,unsigned int texID, float*color);
float** topo( float raioExt, float raioInt, int resolucao,float posx, float posy, float posz,float*norm,float*tex);
float** cone(float raio,float altura,int resolucao, float posx, float posy, float posz,float*norm,float*tex);
float** cilindroInt( float altura, float raio, int resolucao, float posx, float posy, float posz,float*norm,float*tex);
float** cilindroExt( float altura, float raio, int resolucao,float posx, float posy, float posz,float*norm,float*tex);
float** semiesferaInt(float r, int resolucao,float posx,float posy, float posz,float*norm,float*tex);
float** semiesferaExt(float r, int resolucao, float posx, float posy, float posz,float*norm,float*tex);
void drawSemiesferaExt(GLuint vertexbuffer,GLuint normalbuffer,GLuint texbuffer, int resolucao,unsigned int texID, float*color);
void drawSemiesferaInt(GLuint vertexbuffer,GLuint normalbuffer,GLuint texbuffer,int resolucao,unsigned int texID, float*color);
void drawCilindroInt(GLuint vertexbuffer,GLuint normalbuffer,GLuint texbuffer,int resolucao,unsigned int texID, float*color);
void drawCilindroExt(GLuint vertexbuffer,GLuint normalbuffer,GLuint texbuffer,int resolucao,unsigned int texID, float*color);
void drawCone(GLuint vertexbuffer,GLuint normalbuffer,GLuint texbuffer,int resolucao,unsigned int texID, float*color);
void drawtopo(GLuint vertexbuffer,GLuint normalbuffer,GLuint texbuffer,int resolucao,unsigned int texID, float*color);