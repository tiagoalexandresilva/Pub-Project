//
//  cadeira.cpp
//  Projecto CG
//
//  Created by Tiago Oliveira on 31/5/13.
//  Copyright (c) 2013 Tiago Oliveira. All rights reserved.
//

#include "cadeira.h"

GLuint *cadeiraG,*cadeiraGn,*cadeiraGt;



void cadeira(){
	cadeiraG=(GLuint*)malloc(5*sizeof(GLuint));
	cadeiraGn=(GLuint*)malloc(5*sizeof(GLuint));
	cadeiraGt=(GLuint*)malloc(5*sizeof(GLuint));
	float* travessa, *assento, *perna,*pernam,*encosto;
	float* travessan=NULL, *assenton=NULL, *pernan=NULL,*pernamn=NULL,*encoston=NULL;
	float* travessat=NULL, *assentot=NULL, *pernat=NULL,*pernamt=NULL,*encostot=NULL;
	res =cubo(0.02f,0.02f,0.35f,0,0,0,travessan,travessat);
	travessa=res[0];
	travessan=res[1];
	travessat=res[2];
	res=cubo(0.5f,0.03f,0.5f,0,0,0,assenton,assentot);
	assento=res[0];
	assenton=res[1];
	assentot=res[2];
	res=cubo(0.05f,0.5f,0.05f,0,0,0,pernan,pernat);
	perna=res[0];
	pernan=res[1];
	pernat=res[2];
	res=cubo(0.05f,1.2f,0.05f,0,0,0,pernamn,pernamt);
	pernam=res[0];
	pernamn=res[1];
	pernamt=res[2];
	res =cubo(0.1f,0.02f,0.4f,0,0,0,encoston,encostot);
	encosto=res[0];
	encoston=res[1];
	encostot=res[2];
	glGenBuffers(5,cadeiraG);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraG[0]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float),travessa,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraG[1]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), assento,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraG[2]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), perna,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraG[3]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), pernam,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraG[4]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), encosto,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glGenBuffers(5,cadeiraGn);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraGn[0]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float),travessan,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraGn[1]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), assenton,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraGn[2]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), pernan,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraGn[3]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), pernamn,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraGn[4]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), encoston,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glGenBuffers(5,cadeiraGt);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraGt[0]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float),travessat,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraGt[1]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), assentot,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraGt[2]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), pernat,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraGt[3]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), pernamt,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraGt[4]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), encostot,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
    
}
void drawcadeira(float x, float z){
	//travessas
	float color[] = {1.0,1.0,1.0,1.0};
	glPushMatrix();
    glTranslatef(0.0f+x,0.3f,-0.21f+z);
    glRotatef(90,0.0f,0.0f,1.0f);
    glRotatef(90,1.0f,0.0f,0.0f);
    drawCubo(cadeiraG[0],cadeiraGn[0] ,cadeiraGt[0],madeiraID, color);
	
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.0f+x,0.3f,0.21f+z);
    glRotatef(90,0.0f,0.0f,1.0f);
    glRotatef(90,1.0f,0.0f,0.0f);
    drawCubo(cadeiraG[0],cadeiraGn[0] ,cadeiraGt[0],madeiraID, color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.2f+x,0.2f,z);
    drawCubo(cadeiraG[0],cadeiraGn[0] ,cadeiraGt[0],madeiraID, color);
	
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.2f+x,0.2f,z);
    drawCubo(cadeiraG[0],cadeiraGn[0] ,cadeiraGt[0],madeiraID, color);
	
	glPopMatrix();
	
	//assento
	glPushMatrix();
    glTranslatef(0.0f+x,0.5f,0.0f+z);
    drawCubo(cadeiraG[1],cadeiraGn[1] ,cadeiraGt[1],madeiraID, color);
    
	glPopMatrix();
	
	//pernas
	glPushMatrix();
    glTranslatef(0.2f+x,0.0f,0.2f+z);
    drawCubo(cadeiraG[2],cadeiraGn[2] ,cadeiraGt[2],madeiraID, color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.2f+x,0.0f,0.2f+z);
    drawCubo(cadeiraG[2],cadeiraGn[2] ,cadeiraGt[2],madeiraID, color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.2f+x,0.0f,-0.2f+z);
    drawCubo(cadeiraG[3],cadeiraGn[3] ,cadeiraGt[3],madeiraID, color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.2f+x,0.0f,-0.2f+z);
    drawCubo(cadeiraG[3],cadeiraGn[3] ,cadeiraGt[3],madeiraID, color);
    
	glPopMatrix();
	
	//encosto
	glPushMatrix();
    glTranslatef(0+x,0.87f,-0.21f+z);
    glRotatef(90,0.0f,0.0f,1.0f);
    glRotatef(90,1.0f,0.0f,0.0f);
    drawCubo(cadeiraG[4],cadeiraGn[4] ,cadeiraGt[4],madeiraID, color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.0f+x,1.07f,-0.21f+z);
    glRotatef(90,0.0f,0.0f,1.0f);
    glRotatef(90,1.0f,0.0f,0.0f);
    drawCubo(cadeiraG[4],cadeiraGn[4] ,cadeiraGt[4],madeiraID, color);
    
	glPopMatrix();
    
}