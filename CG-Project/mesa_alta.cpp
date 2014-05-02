//
//  mesa_alta.cpp
//  Projecto CG
//
//  Created by Tiago Oliveira on 31/5/13.
//  Copyright (c) 2013 Tiago Oliveira. All rights reserved.
//

#include "mesa_alta.h"

GLuint *mesaltaG,*mesaltaGn,*mesaltaGt;


void mesalta()
{
	mesaltaG=(GLuint*)malloc(6*sizeof(GLuint));
	mesaltaGn=(GLuint*)malloc(6*sizeof(GLuint));
	mesaltaGt=(GLuint*)malloc(6*sizeof(GLuint));
	float* descanso,*diagonal, *base,*perna,*btampo,*tampo;
	float* descanson=NULL,*diagonaln=NULL, *basen=NULL,*pernan=NULL,*btampon=NULL,*tampon=NULL;
	float* descansot=NULL,*diagonalt=NULL, *baset=NULL,*pernat=NULL,*btampot=NULL,*tampot=NULL;
    
	res =cubo(0.5f,0.02f,0.02f,0,0,0,descanson,descansot);
	descanso=res[0];
	descanson=res[1];
	descansot=res[2];
	res = cubo(0.3136f,0.02f,0.02f,0,0,0,diagonaln,diagonalt);
	diagonal=res[0];
	diagonaln=res[1];
	diagonalt=res[2];
	res=cubo(0.4f,0.05f,0.4f,0,0,0,basen,baset);
	base=res[0];
	basen=res[1];
	baset=res[2];
	res=cilindro(1.25f,0.04f,100,0,0,0,pernan,pernat);
	perna=res[0];
	pernan=res[1];
	pernat=res[2];
	res=cubo(0.2f,0.2f,0.2f,0,0,0,btampon,btampot);
	btampo=res[0];
	btampon=res[1];
	btampot=res[2];
	res=cilindro(0.05f,0.4f,100,0,0,0,tampon,tampot);
	tampo=res[0];
	tampon=res[1];
	tampot=res[2];
	glGenBuffers(6,mesaltaG);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaG[0]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float),descanso,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaG[1]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float),diagonal,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaG[2]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), base,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaG[3]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float), perna,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaG[4]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), btampo,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaG[5]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float), tampo,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glGenBuffers(6,mesaltaGn);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaGn[0]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float),descanson,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaGn[1]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float),diagonaln,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaGn[2]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), basen,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaGn[3]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float), pernan,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaGn[4]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), btampon,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaGn[5]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float), tampon,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glGenBuffers(6,mesaltaGt);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaGt[0]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float),descansot,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaGt[1]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float),diagonalt,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaGt[2]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), baset,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaGt[3]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*24)*sizeof(float), pernat,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaGt[4]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), btampot,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaltaGt[5]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*24)*sizeof(float), tampot,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
}
void drawmesalta(float x, float z){
	
	//descanso dos pés
    //horizontais
	float color[] = {1.0,1.0,1.0,1.0};
	glPushMatrix();
    glTranslatef(0.0f+x,0.32f,0.25f+z);
    drawCubo(mesaltaG[0],mesaltaGn[0] ,mesaltaGt[0],metalID, color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.0f+x,0.32f,-0.25f+z);
    drawCubo(mesaltaG[0],mesaltaGn[0] ,mesaltaGt[0],metalID, color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.25f+x,0.32f,0.0f+z);
    glRotatef(90,0.0f,1.0f,0.0f);
    drawCubo(mesaltaG[0],mesaltaGn[0] ,mesaltaGt[0],metalID, color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.25f+x,0.32f,0.0f+z);
    glRotatef(90,0.0f,1.0f,0.0f);
    drawCubo(mesaltaG[0],mesaltaGn[0] ,mesaltaGt[0],metalID, color);
	glPopMatrix();
    //suportes diagonais
	glPushMatrix();
    glTranslatef(0.12f+x,0.32f,0.12f+z);
    glRotatef(135,0.0f,1.0f,0.0f);
    drawCubo(mesaltaG[1],mesaltaGn[1] ,mesaltaGt[1],metalID, color);
    
	glPopMatrix();
    
    
	glPushMatrix();
    glTranslatef(-0.12f+x,0.32f,-0.12f+z);
    glRotatef(135,0.0f,1.0f,0.0f);
    drawCubo(mesaltaG[1],mesaltaGn[1] ,mesaltaGt[1],metalID, color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.12f+x,0.32f,-0.12f+z);
    glRotatef(45,0.0f,1.0f,0.0f);
    drawCubo(mesaltaG[1],mesaltaGn[1] ,mesaltaGt[1],metalID, color);
	
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.12f+x,0.32f,0.12f+z);
    glRotatef(45,0.0f,1.0f,0.0f);
    drawCubo(mesaltaG[1],mesaltaGn[1] ,mesaltaGt[1],metalID, color);
    
	glPopMatrix();
    
	//base
	glPushMatrix();
    glTranslatef(0.0f+x,0.0f,0.0f+z);
    drawCubo(mesaltaG[2],mesaltaGn[2] ,mesaltaGt[2],mesatextID, color);
    
	glPopMatrix();
    
	//perna
	glPushMatrix();
    glTranslatef(0.0f+x,0.625f,0.0f+z);
    drawCilindro(mesaltaG[3],mesaltaGn[3] ,mesaltaGt[3],resolucao,metalID, color);
    
	glPopMatrix();
    
	//base do tampo
	glPushMatrix();
    glTranslatef(0.0f+x,1.25f,0.0f+z);
    drawCubo(mesaltaG[4],mesaltaGn[4] ,mesaltaGt[4],mesatextID, color);
    
	glPopMatrix();
    
	//tampo
	glPushMatrix();
    glTranslatef(0.0f+x,1.45f,0.0f+z);
    drawCilindro(mesaltaG[5],mesaltaGn[5] ,mesaltaGt[5],resolucao,mesatextID, color);
    
	glPopMatrix();
}