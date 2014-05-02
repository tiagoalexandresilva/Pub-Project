//
//  copo.cpp
//  Projecto CG
//
//  Created by Tiago Oliveira on 31/5/13.
//  Copyright (c) 2013 Tiago Oliveira. All rights reserved.
//

#include "copo.h"

GLuint *cupG,*cupGn, *cupGt;

void cup()
{
	cupG=(GLuint*)malloc(7*sizeof(GLuint));
	cupGn=(GLuint*)malloc(7*sizeof(GLuint));
	cupGt=(GLuint*)malloc(7*sizeof(GLuint));
	float* conef,* cilindrof,* semiextf,*semintf,*cilextf,*cilintf,*topof;
	float* conefn=NULL,* cilindrofn=NULL,* semiextfn=NULL,*semintfn=NULL,*cilextfn=NULL,*cilintfn=NULL,*topofn=NULL;
	float* coneft=NULL,* cilindroft=NULL,* semiextft=NULL,*semintft=NULL,*cilextft=NULL,*cilintft=NULL,*topoft=NULL;
    
	res =cone(0.5f,0.3f,100,0,0,0,conefn,coneft);
	conef=res[0];
	conefn=res[1];
	coneft=res[2];
	res=cilindro(0.5f,0.03f,100,0,0,0,cilindrofn,cilindroft);
	cilindrof=res[0];
	cilindrofn=res[1];
	cilindroft=res[2];
	res=semiesferaExt(0.5,100,0,0,0,semiextfn,semiextft);
	semiextf=res[0];
	semiextfn=res[1];
	semiextft=res[2];
	res=semiesferaInt(0.45,100,0,0,0,semintfn,semintft);
	semintf=res[0];
	semintfn=res[1];
	semintft=res[2];
	res=cilindroExt(0.4f,0.5f,100,0,0,0,cilextfn,cilextft);
	cilextf=res[0];
	cilextfn=res[1];
	cilextft=res[2];
	res=cilindroInt(0.4f,0.45f,100,0,0,0,cilintfn,cilintft);
	cilintf=res[0];
	cilintfn=res[1];
	cilintft=res[2];
	res=topo(0.45f,0.5f,100,0,0,0,topofn,topoft);
	topof=res[0];
	topofn=res[1];
	topoft=res[2];
	glGenBuffers(7,cupG);
	glBindBuffer(GL_ARRAY_BUFFER,cupG[0]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*18)*sizeof(float),conef,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupG[1]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float), cilindrof,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupG[2]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*resolucao*9)*sizeof(float), semiextf,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupG[3]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*resolucao*9)*sizeof(float),semintf,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupG[4]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*18)*sizeof(float), cilextf,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupG[5]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*18)*sizeof(float), cilintf,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupG[6]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*18)*sizeof(float),topof,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glGenBuffers(7,cupGn);
	glBindBuffer(GL_ARRAY_BUFFER,cupGn[0]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*18)*sizeof(float),conefn,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupGn[1]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float), cilindrofn,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupGn[2]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*resolucao*9)*sizeof(float), semiextfn,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupGn[3]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*resolucao*9)*sizeof(float),semintfn,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupGn[4]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*18)*sizeof(float), cilextfn,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupGn[5]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*18)*sizeof(float), cilintfn,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupGn[6]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*18)*sizeof(float),topofn,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glGenBuffers(7,cupGt);
	glBindBuffer(GL_ARRAY_BUFFER,cupGt[0]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*12)*sizeof(float),coneft,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupGt[1]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*24)*sizeof(float), cilindroft,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupGt[2]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*resolucao*6)*sizeof(float), semiextft,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupGt[3]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*resolucao*6)*sizeof(float),semintft,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupGt[4]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*12)*sizeof(float), cilextft,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupGt[5]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*12)*sizeof(float), cilintft,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cupGt[6]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*12)*sizeof(float),topoft,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
    
}
void drawCup(){
	float color[] = {1.0,1.0,1.0,1.0};
	glPushMatrix();
	drawCone(cupG[0],cupGn[0],cupGt[0],100,vidroID,color);
	glTranslatef(0,0.5f,0);
	drawCilindro(cupG[1],cupGn[1],cupGt[1],100,vidroID,color);
	glTranslatef(0.0f,0.5f,0.0f);
	drawSemiesferaExt(cupG[2],cupGn[2],cupGt[2], 100,vidroID,color);
	glPushMatrix();
	glTranslatef(0.0f,0.025f,0.0f);
	drawSemiesferaInt(cupG[3],cupGn[3],cupGt[3],100,vidroID,color);
	glPopMatrix();
	glTranslatef(0.0f,0.2f,0.0f);
	drawCilindroExt(cupG[4],cupGn[4],cupGt[4],100,vidroID,color);
	drawCilindroInt(cupG[5],cupGn[5],cupGt[5],100,vidroID,color);
	glTranslatef(0.0f,0.2f,0.0f);
	drawtopo(cupG[6],cupGn[6],cupGt[6],100,vidroID,color);
	glPopMatrix();
}