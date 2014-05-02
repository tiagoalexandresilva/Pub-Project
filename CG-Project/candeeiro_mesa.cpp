//
//  candeeiro_mesa.cpp
//  Projecto CG
//
//  Created by Tiago Oliveira on 31/5/13.
//  Copyright (c) 2013 Tiago Oliveira. All rights reserved.
//

#include "candeeiro_mesa.h"

GLuint *candeeirodemesaG,*candeeirodemesaGn,*candeeirodemesaGt;

void candeeirodemesa(){
	candeeirodemesaG=(GLuint*)malloc(3*sizeof(GLuint));
	candeeirodemesaGn=(GLuint*)malloc(3*sizeof(GLuint));
	candeeirodemesaGt=(GLuint*)malloc(3*sizeof(GLuint));
	float* base,* suporte,* lampada;
	float* basen=NULL,* suporten=NULL,* lampadan=NULL;
	float* baset=NULL,* suportet=NULL,* lampadat=NULL;
	res =cubo(0.15f,0.07f,0.15f,0,0,0,basen,baset);
	base=res[0];
	basen=res[1];
	baset=res[2];
	res=cilindro(0.1f,0.01f,100,0,0,0,suporten,suportet);
	suporte=res[0];
	suporten=res[1];
	suportet=res[2];
	res=esfera(0.08f,100,0,0,0,lampadan,lampadat);
	lampada=res[0];
	lampadan=res[1];
	lampadat=res[2];
	glGenBuffers(3,candeeirodemesaG);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodemesaG[0]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float),base,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodemesaG[1]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float), suporte,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodemesaG[2]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*resolucao*18)*sizeof(float), lampada,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glGenBuffers(3,candeeirodemesaGn);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodemesaGn[0]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float),basen,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodemesaGn[1]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float), suporten,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodemesaGn[2]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*resolucao*18)*sizeof(float), lampadan,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glGenBuffers(3,candeeirodemesaGt);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodemesaGt[0]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float),baset,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodemesaGt[1]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*24)*sizeof(float), suportet,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodemesaGt[2]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*resolucao*12)*sizeof(float), lampadat,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
    
}
void drawcandeeirodemesa(float x, float z){
	//base
	float color[] = {1.0,0.9,1.0,1.0};
	glPushMatrix();
    glTranslatef(0.0f+x,0.9f,0.0f+z);
    drawCubo(candeeirodemesaG[0],candeeirodemesaGn[0] ,candeeirodemesaGt[0],madeiraID, color);
    
	glPopMatrix();
    
	//suporte
	glPushMatrix();
    glTranslatef(0.0f+x,1.0f,0.0f+z);
    drawCilindro(candeeirodemesaG[1],candeeirodemesaGn[1] ,candeeirodemesaGt[1],resolucao,metalID, color);
    
	glPopMatrix();
    
	//lampada
	glPushMatrix();
    glTranslatef(0.0f+x,1.10f,0.0f+z);
    drawEsfera(candeeirodemesaG[2],candeeirodemesaGn[2] ,candeeirodemesaGt[2],resolucao,vidroID, color);
    
	glPopMatrix();
}