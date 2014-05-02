//
//  candeeiro_parede.cpp
//  Projecto CG
//
//  Created by Tiago Oliveira on 31/5/13.
//  Copyright (c) 2013 Tiago Oliveira. All rights reserved.
//

#include "candeeiro_parede.h"

GLuint *candeeirodeparedeG,*candeeirodeparedeGn,*candeeirodeparedeGt;

void candeeirodeparede(){
	candeeirodeparedeG=(GLuint*)malloc(4*sizeof(GLuint));
	candeeirodeparedeGn=(GLuint*)malloc(4*sizeof(GLuint));
	candeeirodeparedeGt=(GLuint*)malloc(4*sizeof(GLuint));
	float* basev, *slampada, *slampada2,*lampada;
	float* basevn=NULL, *slampadan=NULL, *slampadan2=NULL,*lampadan=NULL;
	float* basevt=NULL, *slampadat=NULL, *slampadat2=NULL,*lampadat=NULL;
    
	res =cubo(0.2f,0.4f,0.05f,0,0,0,basevn,basevt);
	basev=res[0];
	basevn=res[1];
	basevt=res[2];
	res=cubo(0.05f,0.05f,0.25f,0,0,0,slampadan,slampadat);
	slampada=res[0];
	slampadan=res[1];
	slampadat=res[2];
	res=cubo(0.05f,0.2f,0.05f,0,0,0,slampadan2,slampadat2);
	slampada2=res[0];
	slampadan2=res[1];
	slampadat2=res[2];
	res=cilindro(0.15f,0.1f,100,0,0,0,lampadan,lampadat);
	lampada=res[0];
	lampadan=res[1];
	lampadat=res[2];
	glGenBuffers(4,candeeirodeparedeG);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodeparedeG[0]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float),basev,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodeparedeG[1]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), slampada,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodeparedeG[2]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), slampada2,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodeparedeG[3]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float), lampada,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glGenBuffers(4,candeeirodeparedeGn);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodeparedeGn[0]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float),basevn,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodeparedeGn[1]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), slampadan,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodeparedeGn[2]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), slampadan2,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodeparedeGn[3]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float), lampadan,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glGenBuffers(4,candeeirodeparedeGt);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodeparedeGt[0]);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float),basevt,GL_STATIC_DRAW);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodeparedeGt[1]);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), slampadat,GL_STATIC_DRAW);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodeparedeGt[2]);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), slampadat2,GL_STATIC_DRAW);
	glBindBuffer(GL_ARRAY_BUFFER,candeeirodeparedeGt[3]);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*24)*sizeof(float), lampadat,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
}
void drawcandeeirodeparede(float x, float z){
	//base vertical
	float color[] = {1.0,1.0,1.0,1.0};
	glPushMatrix();
    glTranslatef(0.0f+x,0.0f,0.0f+z);
    drawCubo(candeeirodeparedeG[0],candeeirodeparedeGn[0],candeeirodeparedeGt[0],madeiraID,color);
    
	glPopMatrix();
    
	//suporte da lampada
	glPushMatrix();
    glTranslatef(0.0f+x,0.2f,0.1f+z);
    drawCubo(candeeirodeparedeG[1],candeeirodeparedeGn[1],candeeirodeparedeGt[1],madeiraID,color);
    
	glPopMatrix();
    
	glPushMatrix();
    drawCubo(candeeirodeparedeG[2],candeeirodeparedeGn[2],candeeirodeparedeGt[2],madeiraID,color);
    
	glPopMatrix();
    
	//lampada
	glPushMatrix();
	drawCilindro(candeeirodeparedeG[3],candeeirodeparedeGn[3],candeeirodeparedeGt[3],resolucao,madeiraID,color);
    
	glPopMatrix();
}