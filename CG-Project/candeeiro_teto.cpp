//
//  candeeiro_teto.cpp
//  Projecto CG
//
//  Created by Tiago Oliveira on 31/5/13.
//  Copyright (c) 2013 Tiago Oliveira. All rights reserved.
//

#include "candeeiro_teto.h"

GLuint *candeeirodetectoG,*candeeirodetectoGn,*candeeirodetectoGt;

void candeeirodetecto()
{
	candeeirodetectoG=(GLuint*)malloc(6*sizeof(GLuint));
	candeeirodetectoGn=(GLuint*)malloc(6*sizeof(GLuint));
	candeeirodetectoGt=(GLuint*)malloc(6*sizeof(GLuint));
	float* base,*suporte, *blampada,*slampada,*lampada;
	float* basen=NULL,*suporten=NULL, *blampadan=NULL,*slampadan=NULL,*lampadan=NULL;
	float* baset=NULL,*suportet=NULL, *blampadat=NULL,*slampadat=NULL,*lampadat=NULL;
    
	res =cubo(0.5f,0.05f,0.2f,0,0,0,basen,baset);
	base=res[0];
	basen=res[1];
	baset=res[2];
	res = cilindro(0.75f,0.015f,100,0,0,0,suporten,suportet);
	suporte=res[0];
	suporten=res[1];
	suportet=res[2];
	res=cubo(1.2f,0.05f,0.1f,0,0,0,blampadan,blampadat);
	blampada=res[0];
	blampadan=res[1];
	blampadat=res[2];
	res=cilindro(0.05f,0.02f,100,0,0,0,slampadan,slampadat);
	slampada=res[0];
	slampadan=res[1];
	slampadat=res[2];
	res=cilindro(0.15f,0.05f,100,0,0,0,lampadan,lampadat);
	lampada=res[0];
	lampadan=res[1];
	lampadat=res[2];
	glGenBuffers(6,candeeirodetectoG);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodetectoG[0]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float),base,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodetectoG[1]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float),suporte,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodetectoG[2]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), blampada,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodetectoG[3]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float), slampada,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodetectoG[4]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float), lampada,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glGenBuffers(6,candeeirodetectoGn);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodetectoGn[0]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float),basen,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodetectoGn[1]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float),suporten,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodetectoGn[2]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), blampadan,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodetectoGn[3]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float), slampadan,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodetectoGn[4]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float), lampadan,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glGenBuffers(6,candeeirodetectoGt);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodetectoGt[0]);
	glBufferData(GL_ARRAY_BUFFER,172*sizeof(float),baset,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodetectoGt[1]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*24)*sizeof(float),suportet,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodetectoGt[2]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), blampadat,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodetectoGt[3]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*24)*sizeof(float), slampadat,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodetectoGt[4]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*24)*sizeof(float), lampadat,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
    
}


void drawcandeeirodetecto(float x, float z){
	//base dos suportes
	float color[] = {1.0,1.0,1.0,1.0};
	glPushMatrix();
    glTranslatef(0.0f+x,0.8f,0.0f+z);
    drawCubo(candeeirodetectoG[0],candeeirodetectoGn[0] ,candeeirodetectoGt[0],madeiraID,color);
    
	glPopMatrix();
    
	//suportes
	glPushMatrix();
    glTranslatef(0.15f+x,0.45f,0.0f+z);
    drawCilindro(candeeirodetectoG[1],candeeirodetectoGn[1] ,candeeirodetectoGt[1],resolucao,metalID,color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.15f+x,0.45f,0.0f+z);
    drawCilindro(candeeirodetectoG[1],candeeirodetectoGn[1] ,candeeirodetectoGt[1],resolucao,metalID,color);
    
	glPopMatrix();
    
	//base dos suportes das lampadas e das lampadas
	glPushMatrix();
    glTranslatef(0.0f+x,0.175f,0.0f+z);
    drawCubo(candeeirodetectoG[2],candeeirodetectoGn[2] ,candeeirodetectoGt[2],metalID,color);
	glPopMatrix();
    
	//suportes (cilindricos) das lampadas
	glPushMatrix();
    glTranslatef(0.15f+x,0.175f,0.0f+z);
    drawCilindro(candeeirodetectoG[3],candeeirodetectoGn[3] ,candeeirodetectoGt[3],resolucao,metalID,color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.15f+x,0.175f,0.0f+z);
    drawCilindro(candeeirodetectoG[3],candeeirodetectoGn[3] ,candeeirodetectoGt[3],resolucao,metalID,color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.45f+x,0.175f,0.0f+z);
    drawCilindro(candeeirodetectoG[3],candeeirodetectoGn[3] ,candeeirodetectoGt[3],resolucao,metalID,color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.45f+x,0.175f,0.0f+z);
    drawCilindro(candeeirodetectoG[3],candeeirodetectoGn[3] ,candeeirodetectoGt[3],resolucao,metalID,color);
    
	glPopMatrix();
    
	//lampadas
	glPushMatrix();
    glTranslatef(0.15f+x,0.075f,0.0f+z);
    drawCilindro(candeeirodetectoG[4],candeeirodetectoGn[4] ,candeeirodetectoGt[4],resolucao,vidroID,color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.15f+x,0.075f,0.0f+z);
    drawCilindro(candeeirodetectoG[4],candeeirodetectoGn[4] ,candeeirodetectoGt[4],resolucao,vidroID,color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.45f+x,0.075f,0.0f+z);
    drawCilindro(candeeirodetectoG[4],candeeirodetectoGn[4] ,candeeirodetectoGt[4],resolucao,vidroID,color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.45f+x,0.075f,0.0f+z);
    drawCilindro(candeeirodetectoG[4],candeeirodetectoGn[4] ,candeeirodetectoGt[4],resolucao,vidroID,color);
    
	glPopMatrix();
}