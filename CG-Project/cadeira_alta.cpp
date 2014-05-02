//
//  cadeira_alta.cpp
//  Projecto CG
//
//  Created by Tiago Oliveira on 31/5/13.
//  Copyright (c) 2013 Tiago Oliveira. All rights reserved.
//

#include "cadeira_alta.h"

GLuint *cadeiraltaG,*cadeiraltaGn,*cadeiraltaGt;

void cadeiralta(){
	cadeiraltaG=(GLuint*)malloc(5*sizeof(GLuint));
	cadeiraltaGn=(GLuint*)malloc(5*sizeof(GLuint));
	cadeiraltaGt=(GLuint*)malloc(5*sizeof(GLuint));
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
	res=cubo(0.05f,1.0f,0.05f,0,0,0,pernan,pernat);
	perna=res[0];
	pernan=res[1];
	pernat=res[2];
	res=cubo(0.05f,1.45f,0.05f,0,0,0,pernamn,pernamt);
	pernam=res[0];
	pernamn=res[1];
	pernamt=res[2];
	res =cubo(0.1f,0.02f,0.4f,0,0,0,encoston,encostot);
	encosto=res[0];
	encoston=res[1];
	encostot=res[2];
	glGenBuffers(5,cadeiraltaG);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraltaG[0]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float),travessa,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraltaG[1]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), assento,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraltaG[2]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), perna,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraltaG[3]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), pernam,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraltaG[4]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), encosto,GL_STATIC_DRAW);
	glVertexPointer(3,GL_FLOAT,0,0);
	glGenBuffers(5,cadeiraltaGn);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraltaGn[0]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float),travessan,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraltaGn[1]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), assenton,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraltaGn[2]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), pernan,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraltaGn[3]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), pernamn,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraltaGn[4]);
	glBufferData(GL_ARRAY_BUFFER,108*sizeof(float), encoston,GL_STATIC_DRAW);
	glNormalPointer(GL_FLOAT,0,0);
	glGenBuffers(5,cadeiraltaGt);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraltaGt[0]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float),travessat,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraltaGt[1]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), assentot,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraltaGt[2]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), pernat,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraltaGt[3]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), pernamt,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindBuffer(GL_ARRAY_BUFFER,cadeiraltaGt[4]);
	glBufferData(GL_ARRAY_BUFFER,72*sizeof(float), encostot,GL_STATIC_DRAW);
	glTexCoordPointer(2,GL_FLOAT,0,0);
    
}
void drawcadeiralta(float x, float z){
	//assento
	float color[] = {1.0,1.0,1.0,1.0};
	glPushMatrix();
	glTranslatef(0.0f+x,1.0f,0.0f+z);
	drawCubo(cadeiraltaG[1],cadeiraltaGn[1] ,cadeiraltaGt[1],metalID,color);
    
	glPopMatrix();
	
	//pernas
	glPushMatrix();
    glTranslatef(0.2f+x,0.0f,0.2f+z);
    drawCubo(cadeiraltaG[2],cadeiraltaGn[2] ,cadeiraltaGt[2],metalID,color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.2f+x,0.0f,0.2f+z);
    drawCubo(cadeiraltaG[2],cadeiraltaGn[2] ,cadeiraltaGt[2],metalID,color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.2f+x,0.0f,-0.2f+z);
    drawCubo(cadeiraltaG[3],cadeiraltaGn[3] ,cadeiraltaGt[3],metalID,color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.2f+x,0.0f,-0.2f+z);
    drawCubo(cadeiraltaG[3],cadeiraltaGn[3] ,cadeiraltaGt[3],metalID,color);
    
    
	glPopMatrix();
	
	//encosto
	glPushMatrix();
    glTranslatef(0+x,1.35f,-0.21f+z);
    glRotatef(90,0.0f,0.0f,1.0f);
    glRotatef(90,1.0f,0.0f,0.0f);
    drawCubo(cadeiraltaG[4],cadeiraltaGn[4] ,cadeiraltaGt[4],metalID,color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.0f+x,1.2f,-0.21f+z);
    glRotatef(90,0.0f,0.0f,1.0f);
    glRotatef(90,1.0f,0.0f,0.0f);
    drawCubo(cadeiraltaG[4],cadeiraltaGn[4] ,cadeiraltaGt[4],metalID,color);
    
	glPopMatrix();
    
	//travessas
	glPushMatrix();
    glTranslatef(0.0f+x,0.45f,-0.21f+z);
    glRotatef(90,0.0f,0.0f,1.0f);
    glRotatef(90,1.0f,0.0f,0.0f);
    drawCubo(cadeiraltaG[0],cadeiraltaGn[0] ,cadeiraltaGt[0],metalID,color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.0f+x,0.45f,0.21f+z);
    glRotatef(90,0.0f,0.0f,1.0f);
    glRotatef(90,1.0f,0.0f,0.0f);
    drawCubo(cadeiraltaG[0],cadeiraltaGn[0] ,cadeiraltaGt[0],metalID,color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(0.2f+x,0.3f,z);
    drawCubo(cadeiraltaG[0],cadeiraltaGn[0] ,cadeiraltaGt[0],metalID,color);
    
	glPopMatrix();
    
	glPushMatrix();
    glTranslatef(-0.2f+x,0.3f,z);
    drawCubo(cadeiraltaG[0],cadeiraltaGn[0] ,cadeiraltaGt[0],metalID,color);
    
	glPopMatrix();
}