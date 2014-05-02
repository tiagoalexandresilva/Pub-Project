//
//  mesa.cpp
//  Projecto CG
//
//  Created by Tiago Oliveira on 31/5/13.
//  Copyright (c) 2013 Tiago Oliveira. All rights reserved.
//

#include "mesa.h"

GLuint *mesaG,*mesaGn,*mesaGt;

void mesa(){
	mesaG=(GLuint*)malloc(4*sizeof(GLuint));
	mesaGn=(GLuint*)malloc(4*sizeof(GLuint));
	mesaGt=(GLuint*)malloc(4*sizeof(GLuint));
	float* tampo, *suporte, *perna,*suporte2;
	float* tampon=NULL, *suporten=NULL, *pernan=NULL,*suporten2=NULL;
	float* tampot=NULL, *suportet=NULL, *pernat=NULL,*suportet2=NULL;
	res=cubo(1.0f,0.1f,2.0f,0,0,0,tampon,tampot);
	tampo=res[0];
	tampon=res[1];
	tampot=res[2];
	res=cubo(0.025f,0.08f,1.8f,0,0,0,suporten,suportet);
	suporte=res[0];
	suporten=res[1];
	suportet=res[2];
	res=cubo(0.07f,0.8f,0.07f,0,0,0,pernan,pernat);
	perna=res[0];
	pernan=res[1];
	pernat=res[2];
	res=cubo(0.025f,0.08f,0.8f,0,0,0,suporten2,suportet2);
	suporte2=res[0];
	suporten2=res[1];
	suportet2=res[2];
	glGenBuffers(4,mesaG);
	glBindBuffer(GL_ARRAY_BUFFER,mesaG[0]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float),tampo,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaG[1]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), suporte,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaG[2]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), perna,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaG[3]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), suporte2,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glGenBuffers(4,mesaGn);
	glBindBuffer(GL_ARRAY_BUFFER,mesaGn[0]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float),tampon,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaGn[1]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), suporten,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaGn[2]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), pernan,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaGn[3]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), suporten2,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glGenBuffers(4,mesaGt);
	glBindBuffer(GL_ARRAY_BUFFER,mesaGt[0]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float),tampot,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaGt[1]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), suportet,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaGt[2]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), pernat,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,mesaGt[3]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), suportet2,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
}

void drawmesa(float x, float z)
{	//tampo
	float color[] = {1.0,1.0,1.0,1.0};
	glPushMatrix();
    glTranslatef(0.0f+x,0.8f,0.0f+z);
    drawCubo(mesaG[0],mesaGn[0] ,mesaGt[0],mesatextID, color);
	glPopMatrix();
	
	//suportes
	glPushMatrix();
    glTranslatef(-0.40f+x,0.8f,0.0f+z);
    drawCubo(mesaG[1],mesaGn[1] ,mesaGt[1],mesatextID, color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.40f+x,0.8f,0.0f+z);
    drawCubo(mesaG[1],mesaGn[1] ,mesaGt[1],mesatextID, color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.0f+x,0.8f,0.9f+z);
    glRotatef(90,0.0f,1.0f,0.0f);
    drawCubo(mesaG[3],mesaGn[3] ,mesaGt[3],mesatextID, color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.0f+x,0.8f,-0.9f+z);
    glRotatef(90,0.0f,1.0f,0.0f);
    drawCubo(mesaG[3],mesaGn[3] ,mesaGt[3],mesatextID, color);
    
	glPopMatrix();
    
	//pernas
	glPushMatrix();
    glTranslatef(0.40f+x,0.0f,0.90f+z);
    drawCubo(mesaG[2],mesaGn[2] ,mesaGt[2],metalID, color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.40f+x,0.0f,-0.90f+z);
    drawCubo(mesaG[2],mesaGn[2] ,mesaGt[2],metalID, color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.40f+x,0.0f,0.90f+z);
    drawCubo(mesaG[2],mesaGn[2] ,mesaGt[2],metalID, color);
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.40f+x,0.0f,-0.90f+z);
    drawCubo(mesaG[2],mesaGn[2] ,mesaGt[2],metalID, color);
    
	glPopMatrix();
    
}