//
//  copo_alto.cpp
//  Projecto CG
//
//  Created by Tiago Oliveira on 31/5/13.
//  Copyright (c) 2013 Tiago Oliveira. All rights reserved.
//

#include "copo_alto.h"

GLuint *copoaltoG,*copoaltoGn,*copoaltoGt;

void copoalto()
{
	copoaltoG=(GLuint*)malloc(4*sizeof(GLuint));
	copoaltoGn=(GLuint*)malloc(4*sizeof(GLuint));
	copoaltoGt=(GLuint*)malloc(4*sizeof(GLuint));
	float* cilindrof,*cilext,*cilint,*topof;
	float* cilindrofn=NULL,*cilextn=NULL,*cilintn=NULL,*topofn=NULL;
	float* cilindroft=NULL,*cilextt=NULL,*cilintt=NULL,*topoft=NULL;
    
	res=cilindro(0.2f,0.2f,100,0,0,0,cilindrofn,cilindroft);
	cilindrof=res[0];
	cilindrofn=res[1];
	cilindroft=res[2];
	res=cilindroExt(0.8f,0.2f,100,0,0,0,cilextn,cilextt);
	cilext=res[0];
	cilextn=res[1];
	cilextt=res[2];
	res=cilindroInt(0.8f,0.18f,100,0,0,0,cilintn,cilintt);
	cilint=res[0];
	cilintn=res[1];
	cilintt=res[2];
	res=topo(0.18f,0.2f,100,0,0,0,topofn,topoft);
	topof=res[0];
	topofn=res[1];
	topoft=res[2];
	glGenBuffers(4,copoaltoG);
	glBindBuffer(GL_ARRAY_BUFFER,copoaltoG[0]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float), cilindrof,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,copoaltoG[1]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*18)*sizeof(float), cilext,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,copoaltoG[2]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*18)*sizeof(float), cilint,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,copoaltoG[3]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*18)*sizeof(float),topof,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glGenBuffers(4,copoaltoGn);
	glBindBuffer(GL_ARRAY_BUFFER,copoaltoGn[0]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*36)*sizeof(float), cilindrofn,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,copoaltoGn[1]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*18)*sizeof(float), cilextn,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,copoaltoGn[2]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*18)*sizeof(float), cilintn,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,copoaltoGn[3]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*18)*sizeof(float),topofn,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glGenBuffers(4,copoaltoGt);
	glBindBuffer(GL_ARRAY_BUFFER,copoaltoGt[0]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*24)*sizeof(float), cilindroft,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,copoaltoGt[1]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*12)*sizeof(float), cilextt,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,copoaltoGt[2]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*12)*sizeof(float), cilintt,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,copoaltoGt[3]);
	glBufferData(GL_ARRAY_BUFFER,(resolucao*12)*sizeof(float),topoft,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
    
}

void drawcopoalto(float x, float z){
	//base
	float color[] = {1.0,1.0,1.0,1.0};
	glPushMatrix();
    glTranslatef(0.0f+x,0.1f,0.0f+z);
    drawCilindro(copoaltoG[0],copoaltoGn[0],copoaltoGt[0],100,vidroID,color);
    
    
	//revestimento
    
    glTranslatef(0.0f,0.5f,0.0f);
    drawCilindroExt(copoaltoG[1],copoaltoGn[1],copoaltoGt[1],100,vidroID,color);
    drawCilindroInt(copoaltoG[2],copoaltoGn[2],copoaltoGt[2],100,vidroID,color);
    glTranslatef(0.0f,0.4f,0.0f);
    drawtopo(copoaltoG[3],copoaltoGn[3],copoaltoGt[3],100,vidroID,color);
	glPopMatrix();
    
	glEnd();
}