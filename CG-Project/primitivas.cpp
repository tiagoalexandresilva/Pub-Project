//
//  primitivas.cpp
//  Projecto CG
//
//  Created by Tiago Oliveira on 31/5/13.
//  Copyright (c) 2013 Tiago Oliveira. All rights reserved.
//

#include "primitivas.h"

void drawCilindro(GLuint vertexbuffer,GLuint normalbuffer ,GLuint texbuffer,int resolucao,unsigned int texID, float*color)
{
	glBindTexture(GL_TEXTURE_2D, texID);
	glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT_AND_DIFFUSE,color);
	
	glBindBuffer(GL_ARRAY_BUFFER,vertexbuffer);
	glVertexPointer(3,GL_FLOAT,0,0);
	
    
	glBindBuffer(GL_ARRAY_BUFFER,normalbuffer);
	glNormalPointer(GL_FLOAT,0,0);
    
	glBindBuffer(GL_ARRAY_BUFFER,texbuffer);
	glTexCoordPointer(2,GL_FLOAT,0,0);
    
	
	glDrawArrays(GL_TRIANGLES, 0,resolucao*12);
	glBindTexture(GL_TEXTURE_2D, 0);
}
void drawEsfera(GLuint vertexbuffer,GLuint normalbuffer ,GLuint texbuffer,int resolucao,unsigned int texID, float*color)
{
	glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT_AND_DIFFUSE,color);
	
	glBindBuffer(GL_ARRAY_BUFFER,vertexbuffer);
	glVertexPointer(3,GL_FLOAT,0,0);
	
    
	glBindBuffer(GL_ARRAY_BUFFER,normalbuffer);
	glNormalPointer(GL_FLOAT,0,0);
    
	glBindBuffer(GL_ARRAY_BUFFER,texbuffer);
	glTexCoordPointer(2,GL_FLOAT,0,0);
    
	glBindTexture(GL_TEXTURE_2D, texID);
	glDrawArrays(GL_TRIANGLES, 0,resolucao*resolucao*6);
	glBindTexture(GL_TEXTURE_2D, 0);
}
void drawCubo(GLuint vertexbuffer,GLuint normalbuffer ,GLuint texbuffer,unsigned int texID, float*color)
{
	glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT_AND_DIFFUSE,color);
	
	glBindTexture(GL_TEXTURE_2D, texID);
	glBindBuffer(GL_ARRAY_BUFFER,vertexbuffer);
	glVertexPointer(3,GL_FLOAT,0,0);
	
    
	glBindBuffer(GL_ARRAY_BUFFER,normalbuffer);
	glNormalPointer(GL_FLOAT,0,0);
    
	glBindBuffer(GL_ARRAY_BUFFER,texbuffer);
	glTexCoordPointer(2,GL_FLOAT,0,0);
    
	
	glDrawArrays(GL_TRIANGLES, 0,36);
	glBindTexture(GL_TEXTURE_2D, 0);
}
void drawPlano(GLuint vertexbuffer,GLuint normalbuffer ,GLuint texbuffer,unsigned int texID, float*color)
{
	glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,color);
    
	glBindBuffer(GL_ARRAY_BUFFER,vertexbuffer);
	glVertexPointer(3,GL_FLOAT,0,0);
	
    
	glBindBuffer(GL_ARRAY_BUFFER,normalbuffer);
	glNormalPointer(GL_FLOAT,0,0);
    
	glBindTexture(GL_TEXTURE_2D, texID);
	glBindBuffer(GL_ARRAY_BUFFER,texbuffer);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	
	glDrawArrays(GL_TRIANGLES, 0,6);
	glBindTexture(GL_TEXTURE_2D, 0);
}
void drawSemiesferaExt(GLuint vertexbuffer,GLuint normalbuffer ,GLuint texbuffer, int resolucao,unsigned int texID, float*color)
{
	glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT_AND_DIFFUSE,color);
    
	glBindBuffer(GL_ARRAY_BUFFER,vertexbuffer);
	glVertexPointer(3,GL_FLOAT,0,0);
	
    
	glBindBuffer(GL_ARRAY_BUFFER,normalbuffer);
	glNormalPointer(GL_FLOAT,0,0);
    
	glBindBuffer(GL_ARRAY_BUFFER,texbuffer);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	
	glBindTexture(GL_TEXTURE_2D, texID);
	glDrawArrays(GL_TRIANGLES, 0,resolucao*resolucao*3);
	glBindTexture(GL_TEXTURE_2D, 0);
}

void drawSemiesferaInt(GLuint vertexbuffer,GLuint normalbuffer ,GLuint texbuffer,int resolucao,unsigned int texID, float*color)
{
	glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT_AND_DIFFUSE,color);
    
	glBindBuffer(GL_ARRAY_BUFFER,vertexbuffer);
	glVertexPointer(3,GL_FLOAT,0,0);
	
    
	glBindBuffer(GL_ARRAY_BUFFER,normalbuffer);
	glNormalPointer(GL_FLOAT,0,0);
    
	glBindBuffer(GL_ARRAY_BUFFER,texbuffer);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	
	glBindTexture(GL_TEXTURE_2D, texID);
	glDrawArrays(GL_TRIANGLES, 0,resolucao*resolucao*3);
	glBindTexture(GL_TEXTURE_2D, 0);
}

void drawCilindroInt(GLuint vertexbuffer,GLuint normalbuffer ,GLuint texbuffer,int resolucao,unsigned int texID, float*color)
{
	glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT_AND_DIFFUSE,color);
    
	glBindBuffer(GL_ARRAY_BUFFER,vertexbuffer);
	glVertexPointer(3,GL_FLOAT,0,0);
	
    
	glBindBuffer(GL_ARRAY_BUFFER,normalbuffer);
	glNormalPointer(GL_FLOAT,0,0);
    
	glBindBuffer(GL_ARRAY_BUFFER,texbuffer);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	
	glBindTexture(GL_TEXTURE_2D, texID);
	glDrawArrays(GL_TRIANGLES, 0,resolucao*6);
	glBindTexture(GL_TEXTURE_2D, 0);
}
void drawCilindroExt(GLuint vertexbuffer,GLuint normalbuffer ,GLuint texbuffer,int resolucao,unsigned int texID, float*color)
{
	glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT_AND_DIFFUSE,color);
    
	glBindBuffer(GL_ARRAY_BUFFER,vertexbuffer);
	glVertexPointer(3,GL_FLOAT,0,0);
	
    
	glBindBuffer(GL_ARRAY_BUFFER,normalbuffer);
	glNormalPointer(GL_FLOAT,0,0);
    
	glBindBuffer(GL_ARRAY_BUFFER,texbuffer);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	
	glBindTexture(GL_TEXTURE_2D, texID);
	glDrawArrays(GL_TRIANGLES, 0,resolucao*6);
	glBindTexture(GL_TEXTURE_2D, 0);
}
void drawCone(GLuint vertexbuffer,GLuint normalbuffer ,GLuint texbuffer,int resolucao,unsigned int texID, float*color)
{
	glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT_AND_DIFFUSE,color);
	glBindBuffer(GL_ARRAY_BUFFER,vertexbuffer);
	glVertexPointer(3,GL_FLOAT,0,0);
	
    
	glBindBuffer(GL_ARRAY_BUFFER,normalbuffer);
	glNormalPointer(GL_FLOAT,0,0);
    
	glBindBuffer(GL_ARRAY_BUFFER,texbuffer);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	glBindTexture(GL_TEXTURE_2D, texID);
	glDrawArrays(GL_TRIANGLES, 0,resolucao*6);
	glBindTexture(GL_TEXTURE_2D, 0);
}
void drawtopo(GLuint vertexbuffer,GLuint normalbuffer ,GLuint texbuffer,int resolucao,unsigned int texID, float*color)
{
	glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT_AND_DIFFUSE,color);
	glBindBuffer(GL_ARRAY_BUFFER,vertexbuffer);
	glVertexPointer(3,GL_FLOAT,0,0);
	
    
	glBindBuffer(GL_ARRAY_BUFFER,normalbuffer);
	glNormalPointer(GL_FLOAT,0,0);
    
	glBindBuffer(GL_ARRAY_BUFFER,texbuffer);
	glTexCoordPointer(2,GL_FLOAT,0,0);
	
	glBindTexture(GL_TEXTURE_2D, texID);
	glDrawArrays(GL_TRIANGLES, 0,resolucao*6);
	glBindTexture(GL_TEXTURE_2D, 0);
}

float** cilindro( float altura, float raio, int resolucao, float posx, float posy, float posz,float* norm,float* tex)
{
	float** res = (float**) malloc(3*sizeof(float*));
	float angulo = (M_PI)*2/resolucao;
	int i,j=0,k=0;
	float* vertexB = (float*)malloc((resolucao*36)*sizeof(float)),*normal=(float*)malloc((resolucao*36)*sizeof(float));
	float* texB = (float*)malloc((resolucao*24)*sizeof(float));
    float hraio=raio/(2*raio+altura),wangulo=1/(resolucao);
	
	for(i=0;i<resolucao;i++)
    {
        vertexB[j]=raio*sin(angulo*(i+1))+posx;
		normal[j]=0;
		texB[k]=wangulo*(i+1);
        
		vertexB[j+1]=-altura/2+posy;
		normal[j+1]=-1;
		texB[k+1]=hraio;
        
		vertexB[j+2]=raio*cos(angulo*(i+1))+posz;
		normal[j+2]=0;
        
        
		vertexB[j+3]=raio*sin(angulo*i)+posx;
		normal[j+3]=0;
		texB[k+2]=wangulo*i;
        
		vertexB[j+4]=-altura/2+posy;
		normal[j+4]=-1;
		texB[k+3]=hraio;
        
		vertexB[j+5]=raio*cos(angulo*i)+posz;
		normal[j]=0;
        
        
		vertexB[j+6]=0+posx;
		normal[j+6]=0;
		texB[k+4]=0;
        
		vertexB[j+7]=-altura/2+posy;
		normal[j+7]=-1;
		texB[k+5]=0;
        
		vertexB[j+8]=0+posz;
		k+=6;
		j+=9;
    }
    
	for(i=0;i<resolucao;i++)
    {
        vertexB[j]=raio*sin(angulo*i);
		normal[j]=0;
		texB[k]=wangulo*i;
        
		vertexB[j+1]=altura/2;
		normal[j+1]=1;
		texB[k+1]=0;
        
		vertexB[j+2]=raio*cos(angulo*i);
		normal[j+2]=0;
        
        
		vertexB[j+3]=raio*sin(angulo*(i+1));
		normal[j+3]=0;
		texB[k+2]=wangulo*(i+1);
        
		vertexB[j+4]=altura/2;
		normal[j+4]=1;
		texB[k+3]=0;
        
		vertexB[j+5]=raio*cos(angulo*(i+1));
		normal[j+5]=0;
        
        
		vertexB[j+6]=0+posx;
		normal[j+6]=0;
		texB[k+4]=1;
        
		vertexB[j+7]=altura/2+posy;
		normal[j+7]=1;
		texB[k+5]=hraio;
        
		vertexB[j+8]=0+posz;
		normal[j+8]=0;
		k+=6;
		j+=9;
    }
    
	for(i=0;i<resolucao;i++)
    {
        vertexB[j]=raio*sin(angulo*i)+posx;
		normal[j]=sin(angulo*i);
		texB[k]=wangulo*i;
        
		vertexB[j+1]=-altura/2+posy;
		normal[j+1]=0;
		texB[k+1]=0;
        
		vertexB[j+2]=raio*cos(angulo*i)+posz;
        normal[j+2]=cos(angulo*i);
        
        
		vertexB[j+3]=raio*sin(angulo*(i+1))+posx;
		normal[j+3]=sin(angulo*(i+1));
		texB[k+2]=wangulo*(i+1);
        
		vertexB[j+4]=-altura/2+posy;
		normal[j+4]=0;
		texB[k+3]=0;
        
		vertexB[j+5]=raio*cos(angulo*(i+1))+posz;
        normal[j+5]=cos(angulo*(i+1));
        
        
		vertexB[j+6]=raio*sin(angulo*i)+posx;
		normal[j+6]=sin(angulo*i);
		texB[k+4]=wangulo*i;
        
		vertexB[j+7]=altura/2+posy;
		normal[j+7]=0;
		texB[k+5]=1;
        
		vertexB[j+8]=raio*cos(angulo*i)+posz;
		normal[j+8]=cos(angulo*i);
		k+=6;
		j+=9;
    }
    
	for(i=0;i<resolucao;i++)
    {
        vertexB[j]=raio*sin(angulo*(i+1))+posx;
		normal[j]=sin(angulo*(i+1));
		texB[k]=wangulo*(i+1);
		j++;
		vertexB[j]=-altura/2+posy;
		normal[j]=0;
		texB[k+1]=0;
		j++;
		vertexB[j]=raio*cos(angulo*(i+1))+posz;
        normal[j]=cos(angulo*(i+1));
		j++;
		vertexB[j]=raio*sin(angulo*(i+1))+posx;
		normal[j]=sin(angulo*(i+1));
		texB[k+2]=wangulo*(i+1);
		j++;
		vertexB[j]=altura/2+posy;
		normal[j]=0;
		texB[k+3]=1;
		j++;
		vertexB[j]=raio*cos(angulo*(i+1))+posz;
        normal[j]=cos(angulo*(i+1));
		j++;
		vertexB[j]=raio*sin(angulo*i)+posx;
		normal[j]=sin(angulo*i);
		texB[k+4]=wangulo*i;
		j++;
		vertexB[j]=altura/2+posy;
		normal[j]=0;
		texB[k+5]=1;
		j++;
		vertexB[j]=raio*cos(angulo*i)+posz;
		normal[j]=cos(angulo*i);
		k+=6;
		j++;
    }
	res[0]=vertexB;
	res[1] = normal;
	res[2]= texB;
	return res;
    
}

float** esfera(float r, int resolucao, float posx, float posy, float posz,float*norm,float*tex)
{
	int i,j,k=0,l=0;
	float af=M_PI*2/resolucao;
	float** res = (float**) malloc(3*sizeof(float*));
	float* vertexB = (float*)malloc((resolucao*resolucao*18)*sizeof(float)),*normal = (float*)malloc((resolucao*resolucao*18)*sizeof(float));
	float* texB = (float*)malloc((resolucao*resolucao*12)*sizeof(float));
	float wangulo=1/resolucao;
	for(i=0;i<resolucao;i++)
	{
		for(j=0;j<resolucao/2;j++)
		{
			vertexB[k]=r*sin(af*(i+1))*cos(af*j)+posx;
			vertexB[k+1]=r*sin(-af*j)+posy;
			vertexB[k+2]=r*cos(af*(i+1))*cos(af*j)+posz;
			vertexB[k+3]=r*sin(af*i)*cos(af*j)+posx;
			vertexB[k+4]=r*sin(-af*j)+posy;
			vertexB[k+5]=r*cos(af*i)*cos(af*j)+posz;
			vertexB[k+6]=r*sin(af*i)*cos(af*(j+1))+posx;
			vertexB[k+7]=r*sin(-af*(j+1))+posy;
			vertexB[k+8]=r*cos(af*i)*cos(af*(j+1))+posz;
			vertexB[k+9]=r*sin(af*i)*cos(af*j)+posx;
			vertexB[k+10]=r*sin(af*j)+posy;
			vertexB[k+11]=r*cos(af*i)*cos(af*j)+posz;
			vertexB[k+12]=r*sin(af*(i+1))*cos(af*j)+posx;
			vertexB[k+13]=r*sin(af*j)+posy;
			vertexB[k+14]=r*cos(af*(i+1))*cos(af*j)+posz;
			vertexB[k+15]=r*sin(af*i)*cos(af*(j+1))+posx;
			vertexB[k+16]=r*sin(af*(j+1))+posy;
			vertexB[k+17]=r*cos(af*i)*cos(af*(j+1))+posz;
			vertexB[k+18]=r*sin(af*(i+1))*cos(af*j)+posx;
			vertexB[k+19]=r*sin(-af*(j))+posy;
			vertexB[k+20]=r*cos(af*(i+1))*cos(af*j)+posz;
			vertexB[k+21]=r*sin(af*i)*cos(af*(j+1))+posx;
			vertexB[k+22]=r*sin(-af*(j+1))+posy;
			vertexB[k+23]=r*cos(af*i)*cos(af*(j+1))+posz;
			vertexB[k+24]=r*sin(af*(i+1))*cos(af*(j+1))+posx;
			vertexB[k+25]=r*sin(-af*(j+1))+posy;
			vertexB[k+26]=r*cos(af*(i+1))*cos(af*(j+1))+posz;
			vertexB[k+27]=r*sin(af*(i+1))*cos(af*j)+posx;
			vertexB[k+28]=r*sin(af*(j))+posy;
			vertexB[k+29]=r*cos(af*(i+1))*cos(af*j)+posz;
			vertexB[k+30]=r*sin(af*(i+1))*cos(af*(j+1))+posx;
			vertexB[k+31]=r*sin(af*(j+1))+posy;
			vertexB[k+32]=r*cos(af*(i+1))*cos(af*(j+1))+posz;
			vertexB[k+33]=r*sin(af*i)*cos(af*(j+1))+posx;
			vertexB[k+34]=r*sin(af*(j+1))+posy;
			vertexB[k+35]=r*cos(af*i)*cos(af*(j+1))+posz;
			normal[k]=sin(af*(i+1))*cos(af*j)+posx;
			normal[k+1]=sin(-af*j)+posy;
			normal[k+2]=cos(af*(i+1))*cos(af*j)+posz;
			normal[k+3]=sin(af*i)*cos(af*j)+posx;
			normal[k+4]=sin(-af*j)+posy;
			normal[k+5]=cos(af*i)*cos(af*j)+posz;
			normal[k+6]=sin(af*i)*cos(af*(j+1))+posx;
			normal[k+7]=sin(-af*(j+1))+posy;
			normal[k+8]=cos(af*i)*cos(af*(j+1))+posz;
			normal[k+9]=sin(af*i)*cos(af*j)+posx;
			normal[k+10]=sin(af*j)+posy;
			normal[k+11]=cos(af*i)*cos(af*j)+posz;
			normal[k+12]=sin(af*(i+1))*cos(af*j)+posx;
			normal[k+13]=sin(af*j)+posy;
			normal[k+14]=cos(af*(i+1))*cos(af*j)+posz;
			normal[k+15]=sin(af*i)*cos(af*(j+1))+posx;
			normal[k+16]=sin(af*(j+1))+posy;
			normal[k+17]=cos(af*i)*cos(af*(j+1))+posz;
			normal[k+18]=sin(af*(i+1))*cos(af*j)+posx;
			normal[k+19]=sin(-af*(j))+posy;
			normal[k+20]=cos(af*(i+1))*cos(af*j)+posz;
			normal[k+21]=sin(af*i)*cos(af*(j+1))+posx;
			normal[k+22]=sin(-af*(j+1))+posy;
			normal[k+23]=cos(af*i)*cos(af*(j+1))+posz;
			normal[k+24]=sin(af*(i+1))*cos(af*(j+1))+posx;
			normal[k+25]=sin(-af*(j+1))+posy;
			normal[k+26]=cos(af*(i+1))*cos(af*(j+1))+posz;
			normal[k+27]=sin(af*(i+1))*cos(af*j)+posx;
			normal[k+28]=sin(af*(j))+posy;
			normal[k+29]=cos(af*(i+1))*cos(af*j)+posz;
			normal[k+30]=sin(af*(i+1))*cos(af*(j+1))+posx;
			normal[k+31]=sin(af*(j+1))+posy;
			normal[k+32]=cos(af*(i+1))*cos(af*(j+1))+posz;
			normal[k+33]=sin(af*i)*cos(af*(j+1))+posx;
			normal[k+34]=sin(af*(j+1))+posy;
			normal[k+35]=cos(af*i)*cos(af*(j+1))+posz;
			texB[l]=wangulo*(i+1);
			texB[l+1]=wangulo*(resolucao/2-j);
			texB[l+2]=wangulo*i;
			texB[l+3]=wangulo*(resolucao/2-j);
			texB[l+4]=wangulo*i;
			texB[l+5]=wangulo*(resolucao/2-(j+1));
			texB[l+6]=wangulo*i;
			texB[l+7]=wangulo*(resolucao/2+j);
			texB[l+8]=wangulo*(i+1);
			texB[l+9]=wangulo*(resolucao/2+j);
			texB[l+10]=wangulo*i;
			texB[l+11]=wangulo*(resolucao/2+j+1);
			texB[l+12]=wangulo*(i+1);
			texB[l+13]=wangulo*(resolucao/2-j);
			texB[l+14]=wangulo*i;
			texB[l+15]=wangulo*(resolucao/2-(j+1));
			texB[l+16]=wangulo*(i+1);
			texB[l+17]=wangulo*(resolucao/2-(j+1));
			texB[l+18]=wangulo*(i+1);
			texB[l+19]=wangulo*(resolucao/2+j);
			texB[l+20]=wangulo*(i+1);
			texB[l+21]=wangulo*(resolucao/2+j+1);
			texB[l+22]=wangulo*i;
			texB[l+23]=wangulo*(resolucao/2+j+1);
			l+=24;
			k+=36;
		}
	}
	res[0]=vertexB;
	res[1]=normal;
	res[2]= texB;
	return res;
}

float** cubo (float x, float y, float z, float posx, float posy, float posz, float*normal,float*tex)
{
	float** res = (float**) malloc(3*sizeof(float*));
	float* vertexB = (float*)malloc(108*sizeof(float)),*norm = (float*)malloc(108*sizeof(float)),*texB = (float*)malloc(72*sizeof(float));
    x=x/2.0;
	z=z/2.0;
    
    
    //Base
    vertexB[0]=x+posx;
	norm[0]=0;
	texB[0]=1;
    
	vertexB[1]=0.0f+posy;
	norm[1]=-1;
	texB[1]=1;
    
	vertexB[2]=z+posz;
	norm[2]=0;
    
	vertexB[3]=-x+posx;
	norm[3]=0;
	texB[2]=0;
    
	vertexB[4]=0.0f+posy;
	norm[4]=-1;
	texB[3]=1;
    
	vertexB[5]=z+posz;
    norm[5]=0;
    
    
	vertexB[6]=x+posx;
	norm[6]=0;
	texB[4]=1;
    
	vertexB[7]=0.0f+posy;
	norm[7]=-1;
	texB[5]=0;
    
	vertexB[8]=-z+posz;
	norm[8]=0;
    
    
	vertexB[9]=x+posx;
	norm[9]=0;
	texB[6]=1;
    
	vertexB[10]=0.0f+posy;
	norm[10]=-1;
	texB[7]=0;
    
	vertexB[11]=-z+posz;
	norm[11]=0;
    
    
	vertexB[12]=-x+posx;
	norm[12]=0;
	texB[8]=0;
    
	vertexB[13]=0.0f+posy;
	norm[13]=-1;
	texB[9]=1;
    
	vertexB[14]=z+posz;
    norm[14]=0;
    
    
	vertexB[15]=-x+posx;
	norm[15]=0;
	texB[10]=0;
    
	vertexB[16]=0.0f+posy;
	norm[16]=-1;
	texB[11]=0;
    
	vertexB[17]=-z+posz;
	norm[17]=0;
    
    
    
	//1
    
	vertexB[18]=x+posx;
	norm[18]=1;
	texB[12]=0;
    
	vertexB[19]=0.0f+posy;
	norm[19]=0;
	texB[13]=1;
    
	vertexB[20]=z+posz;
    norm[20]=0;
    
    
	vertexB[21]=x+posx;
	norm[21]=1;
	texB[14]=0;
    
	vertexB[22]=0.0f+posy;
	norm[22]=0;
	texB[15]=0;
    
	vertexB[23]=-z+posz;
    norm[23]=0;
    
    
	vertexB[24]=x+posx;
	norm[24]=1;
	texB[16]=1;
    
	vertexB[25]=y+posy;
	norm[25]=0;
	texB[17]=1;
    
	vertexB[26]=z+posz;
    norm[26]=0;
    
    
	vertexB[27]=x+posx;
	norm[27]=1;
	texB[18]=0;
    
	vertexB[28]=0.0f+posy;
	norm[28]=0;
	texB[19]=0;
    
	vertexB[29]=-z+posz;
    norm[29]=0;
    
    
	vertexB[30]=x+posx;
	norm[30]=1;
	texB[20]=1;
    
	vertexB[31]=y+posy;
	norm[31]=0;
	texB[21]=0;
    
	vertexB[32]=-z+posz;
    norm[32]=0;
    
    
	vertexB[33]=x+posx;
	norm[33]=1;
	texB[22]=1;
    
	vertexB[34]=y+posy;
	norm[34]=0;
	texB[23]=1;
    
	vertexB[35]=z+posz;
    norm[35]=0;
    
	//2
    
	vertexB[36]=x+posx;
	norm[36]=0;
	texB[24]=1;
    
	vertexB[37]=y+posy;
	norm[37]=0;
	texB[25]=1;
    
	vertexB[38]=z+posz;
    norm[38]=1;
    
    
	vertexB[39]=-x+posx;
	norm[39]=0;
	texB[26]=0;
    
	vertexB[40]=y+posy;
	norm[40]=0;
	texB[27]=1;
    
	vertexB[41]=z+posz;
    norm[41]=1;
    
    
	vertexB[42]=-x+posx;
	norm[42]=0;
	texB[28]=0;
    
	vertexB[43]=0.0f+posy;
	norm[43]=0;
	texB[29]=0;
    
	vertexB[44]=z+posz;
	norm[44]=1;
    
    
	vertexB[45]=x+posx;
	norm[45]=0;
	texB[30]=1;
    
	vertexB[46]=y+posy;
	norm[46]=0;
	texB[31]=1;
    
	vertexB[47]=z+posz;
	norm[47]=1;
    
    
	vertexB[48]=-x+posx;
	norm[48]=0;
	texB[32]=0;
    
	vertexB[49]=0.0f+posy;
	norm[49]=0;
	texB[33]=0;
    
	vertexB[50]=z+posz;
    norm[50]=1;
    
    
	vertexB[51]=x+posx;
	norm[51]=0;
	texB[34]=1;
    
	vertexB[52]=0.0f+posy;
	norm[52]=0;
	texB[35]=0;
    
	vertexB[53]=z+posz;
    norm[53]=1;
    
    //3
    vertexB[54]=-x+posx;
	norm[54]=-1;
	texB[36]=1;
    
	vertexB[55]=y+posy;
	norm[55]=0;
	texB[37]=1;
    
	vertexB[56]=z+posz;
    norm[56]=0;
    
    
	vertexB[57]=-x+posx;
	norm[57]=-1;
	texB[38]=0;
    
	vertexB[58]=0.0f+posy;
	norm[58]=0;
	texB[39]=0;
    
	vertexB[59]=-z+posz;
    norm[59]=0;
    
    
	vertexB[60]=-x+posx;
	norm[60]=-1;
	texB[40]=0;
    
	vertexB[61]=0.0f+posy;
	norm[61]=0;
	texB[41]=1;
    
	vertexB[62]=z+posz;
	norm[62]=0;
    
    
	vertexB[63]=-x+posx;
	norm[63]=-1;
	texB[42]=0;
    
	vertexB[64]=0.0f+posy;
	norm[64]=0;
	texB[43]=0;
    
	vertexB[65]=-z+posz;
    norm[65]=0;
    
    
	vertexB[66]=-x+posx;
	norm[66]=-1;
	texB[44]=1;
    
	vertexB[67]=y+posy;
	norm[67]=0;
	texB[45]=1;
    
	vertexB[68]=z+posz;
    norm[68]=0;
    
    
	vertexB[69]=-x+posx;
	norm[69]=-1;
	texB[46]=1;
    
	vertexB[70]=y+posy;
	norm[70]=0;
	texB[47]=0;
    
	vertexB[71]=-z+posz;
	norm[71]=0;
    
    //4
    vertexB[72]=x+posx;
	norm[72]=0;
	texB[48]=1;
    
	vertexB[73]=0.0f+posy;
	norm[73]=0;
	texB[49]=0;
    
	vertexB[74]=-z+posz;
	norm[74]=-1;
    
    
	vertexB[75]=-x+posx;
	norm[75]=0;
	texB[50]=0;
    
	vertexB[76]=0.0f+posy;
	norm[76]=0;
	texB[51]=0;
    
	vertexB[77]=-z+posz;
    norm[77]=-1;
    
    
	vertexB[78]=-x+posx;
	norm[78]=0;
	texB[52]=0;
    
	vertexB[79]=y+posy;
	norm[79]=0;
	texB[53]=1;
    
	vertexB[80]=-z+posz;
    norm[80]=-1;
    
    
	vertexB[81]=x+posx;
	norm[81]=0;
	texB[54]=1;
    
	vertexB[82]=0.0f+posy;
	norm[82]=0;
	texB[55]=0;
    
	vertexB[83]=-z+posz;
    norm[83]=-1;
    
    
	vertexB[84]=-x+posx;
	norm[84]=0;
	texB[56]=0;
    
	vertexB[85]=y+posy;
	norm[85]=0;
	texB[57]=1;
    
	vertexB[86]=-z+posz;
    norm[86]=-1;
    
    
	vertexB[87]=x+posx;
	norm[87]=0;
	texB[58]=1;
    
	vertexB[88]=y+posy;
	norm[88]=0;
	texB[59]=1;
    
	vertexB[89]=-z+posz;
	norm[89]=-1;
    
    
	//Topo
	
    
    
	vertexB[90]=x+posx;
	norm[90]=0;
	texB[60]=1;
    
	vertexB[91]=y+posy;
	norm[91]=1;
	texB[61]=1;
    
	vertexB[92]=z+posz;
    norm[92]=0;
    
    
	vertexB[93]=x+posx;
	norm[93]=0;
	texB[62]=1;
    
	vertexB[94]=y+posy;
	norm[94]=1;
	texB[63]=0;
    
	vertexB[95]=-z+posz;
    norm[95]=0;
    
    
	vertexB[96]=-x+posx;
	norm[96]=0;
	texB[64]=0;
    
	vertexB[97]=y+posy;
	norm[97]=1;
	texB[65]=1;
    
	vertexB[98]=z+posz;
    norm[98]=0;
    
    
	vertexB[99]=x+posx;
	norm[99]=0;
	texB[66]=1;
    
	vertexB[100]=y+posy;
	norm[100]=1;
	texB[67]=0;
    
	vertexB[101]=-z+posz;
    norm[101]=0;
    
    
	vertexB[102]=-x+posx;
	norm[102]=0;
	texB[68]=0;
    
	vertexB[103]=y+posy;
	norm[103]=1;
	texB[69]=0;
    
	vertexB[104]=-z+posz;
    norm[104]=0;
    
    
	vertexB[105]=-x+posx;
	norm[105]=0;
	texB[70]=0;
    
	vertexB[106]=y+posy;
	norm[106]=1;
	texB[71]=1;
    
	vertexB[107]=z+posz;
    norm[107]=0;
    
	res[0]=vertexB;
    res[1] = norm;
	res[2]=texB;
	return res;
    
}

float** plano(float c,float l, float posx, float posy, float posz,float*norm,float*tex){
    float** res = (float**) malloc(3*sizeof(float*));
    float* vertexB = (float*)malloc(18*sizeof(float)),*normal = (float*)malloc(18*sizeof(float));
    float* texB = (float*)malloc(12*sizeof(float));
    
    vertexB[0]=c/2+posx;
    normal[0]=0;
    texB[0]=1;
    
    vertexB[1]=0+posy;
    normal[1]=1;
    texB[1]=1;
    
    vertexB[2]=l/2+posz;
    normal[2]=0;
    
    
    vertexB[3]=c/2+posx;
    normal[3]=0;
    texB[2]=1;
    
    vertexB[4]=0+posy;
    normal[4]=1;
    texB[3]=0;
    
    vertexB[5]=-l/2+posz;
    normal[5]=0;
    
    
    vertexB[6]=-c/2+posx;
    normal[6]=0;
    texB[4]=0;
    
    vertexB[7]=0+posy;
    normal[7]=1;
    texB[5]=1;
    
    vertexB[8]=l/2+posz;
    normal[8]=0;
    
    
    vertexB[9]=c/2+posx;
    normal[9]=0;
    texB[6]=1;
    
    vertexB[10]=0+posy;
    normal[10]=1;
    texB[7]=0;
    
    vertexB[11]=-l/2+posz;
    normal[11]=0;
    
    
    vertexB[12]=-c/2+posx;
    normal[12]=0;
    texB[8]=0;
    
    vertexB[13]=0+posy;
    normal[13]=1;
    texB[9]=0;
    
    vertexB[14]=-l/2+posz;
    normal[14]=0;
    
    
    vertexB[15]=-c/2+posx;
    normal[15]=0;
    texB[10]=0;
    
    vertexB[16]=0+posy;
    normal[16]=1;
    texB[11]=1;
    
    vertexB[17]=l/2+posz;
    normal[17]=0;
    
    res[0]=vertexB;
    res[1]=normal;
    res[2]=texB;
    return res;
    
}



float** semiesferaExt(float r, int resolucao, float posx, float posy, float posz,float*norm,float*tex)
{
	float** res = (float**) malloc(3*sizeof(float*));
	int i,j,k=0,l=0;
	float af=M_PI*2/resolucao;
	float* vertexB = (float*)malloc((resolucao*resolucao*9)*sizeof(float)), *normal = (float*)malloc((resolucao*resolucao*9)*sizeof(float));
	float* texB = (float*)malloc((resolucao*resolucao*6)*sizeof(float));
	float wangulo= 1/resolucao;
	for(i=0;i<resolucao;i++)
	{
		for(j=0;j<resolucao/2;j++)
		{
			vertexB[k]=r*sin(af*(i+1))*cos(af*j)+posx;
			vertexB[k+1]=r*sin(-af*j)+posy;
			vertexB[k+2]=r*cos(af*(i+1))*cos(af*j)+posz;
			vertexB[k+3]=r*sin(af*i)*cos(af*j)+posx;
			vertexB[k+4]=r*sin(-af*j)+posy;
			vertexB[k+5]=r*cos(af*i)*cos(af*j)+posz;
			vertexB[k+6]=r*sin(af*i)*cos(af*(j+1))+posx;
			vertexB[k+7]=r*sin(-af*(j+1))+posy;
			vertexB[k+8]=r*cos(af*i)*cos(af*(j+1))+posz;
			vertexB[k+9]=r*sin(af*(i+1))*cos(af*j)+posx;
			vertexB[k+10]=r*sin(-af*(j))+posy;
			vertexB[k+11]=r*cos(af*(i+1))*cos(af*j)+posz;
			vertexB[k+12]=r*sin(af*i)*cos(af*(j+1))+posx;
			vertexB[k+13]=r*sin(-af*(j+1))+posy;
			vertexB[k+14]=r*cos(af*i)*cos(af*(j+1))+posz;
			vertexB[k+15]=r*sin(af*(i+1))*cos(af*(j+1))+posx;
			vertexB[k+16]=r*sin(-af*(j+1))+posy;
			vertexB[k+17]=r*cos(af*(i+1))*cos(af*(j+1))+posz;
			normal[k]=sin(af*(i+1))*cos(af*j)+posx;
			normal[k+1]=sin(-af*j)+posy;
			normal[k+2]=cos(af*(i+1))*cos(af*j)+posz;
			normal[k+3]=sin(af*i)*cos(af*j)+posx;
			normal[k+4]=sin(-af*j)+posy;
			normal[k+5]=cos(af*i)*cos(af*j)+posz;
			normal[k+6]=sin(af*i)*cos(af*(j+1))+posx;
			normal[k+7]=sin(-af*(j+1))+posy;
			normal[k+8]=cos(af*i)*cos(af*(j+1))+posz;
			normal[k+9]=sin(af*(i+1))*cos(af*j)+posx;
			normal[k+10]=sin(-af*(j))+posy;
			normal[k+11]=cos(af*(i+1))*cos(af*j)+posz;
			normal[k+12]=sin(af*i)*cos(af*(j+1))+posx;
			normal[k+13]=sin(-af*(j+1))+posy;
			normal[k+14]=cos(af*i)*cos(af*(j+1))+posz;
			normal[k+15]=sin(af*(i+1))*cos(af*(j+1))+posx;
			normal[k+16]=sin(-af*(j+1))+posy;
			normal[k+17]=cos(af*(i+1))*cos(af*(j+1))+posz;
			texB[l]=wangulo*(i+1);
			texB[l+1]=wangulo*(j);
			texB[l+2]=wangulo*(i);
			texB[l+3]=wangulo*(j);
			texB[l+4]=wangulo*(i);
			texB[l+5]=wangulo*(j+1);
			texB[l+6]=wangulo*(i+1);
			texB[l+7]=wangulo*(j);
			texB[l+8]=wangulo*(i);
			texB[l+9]=wangulo*(j+1);
			texB[l+10]=wangulo*(i+1);
			texB[l+11]=wangulo*(j+1);
			l+=12;
			k+=18;
		}
	}
	res[0]=vertexB;
	res[1]=normal;
	res[2]=texB;
	return res;
}

float** semiesferaInt(float r, int resolucao,float posx,float posy, float posz,float*norm,float*tex)
{
	float** res = (float**) malloc(3*sizeof(float*));
	int i,j,k=0,l=0;
	float af=M_PI*2/resolucao;
	float* vertexB = (float*)malloc((resolucao*resolucao*9)*sizeof(float)),*normal = (float*)malloc((resolucao*resolucao*9)*sizeof(float));
	float* texB = (float*)malloc((resolucao*resolucao*6)*sizeof(float));
	float wangulo=1/resolucao;
	for(i=0;i<resolucao;i++)
	{
		for(j=0;j<resolucao/2;j++)
		{
            
			vertexB[k]=r*sin(af*i)*cos(af*j)+posx;
			vertexB[k+1]=r*sin(-af*j)+posy;
			vertexB[k+2]=r*cos(af*i)*cos(af*j)+posz;
			vertexB[k+3]=r*sin(af*(i+1))*cos(af*j)+posx;
			vertexB[k+4]=r*sin(-af*j)+posy;
			vertexB[k+5]=r*cos(af*(i+1))*cos(af*j)+posz;
			vertexB[k+6]=r*sin(af*i)*cos(af*(j+1))+posx;
			vertexB[k+7]=r*sin(-af*(j+1))+posy;
			vertexB[k+8]=r*cos(af*i)*cos(af*(j+1))+posz;
            
			vertexB[k+9]=r*sin(af*i)*cos(af*(j+1))+posx;
			vertexB[k+10]=r*sin(-af*(j+1))+posy;
			vertexB[k+11]=r*cos(af*i)*cos(af*(j+1))+posz;
			vertexB[k+12]=r*sin(af*(i+1))*cos(af*j)+posx;
			vertexB[k+13]=r*sin(-af*(j))+posy;
			vertexB[k+14]=r*cos(af*(i+1))*cos(af*j)+posz;
			vertexB[k+15]=r*sin(af*(i+1))*cos(af*(j+1))+posx;
			vertexB[k+16]=r*sin(-af*(j+1))+posy;
			vertexB[k+17]=r*cos(af*(i+1))*cos(af*(j+1))+posz;
			
			normal[k]=-sin(af*i)*cos(af*j)+posx;
			normal[k+1]=-sin(-af*j)+posy;
			normal[k+2]=-cos(af*i)*cos(af*j)+posz;
			normal[k+3]=-sin(af*(i+1))*cos(af*j)+posx;
			normal[k+4]=-sin(-af*j)+posy;
			normal[k+5]=-cos(af*(i+1))*cos(af*j)+posz;
			normal[k+6]=-sin(af*i)*cos(af*(j+1))+posx;
			normal[k+7]=-sin(-af*(j+1))+posy;
			normal[k+8]=-cos(af*i)*cos(af*(j+1))+posz;
			
			normal[k+9]=-sin(af*i)*cos(af*(j+1))+posx;
			normal[k+10]=-sin(-af*(j+1))+posy;
			normal[k+11]=-cos(af*i)*cos(af*(j+1))+posz;
			normal[k+12]=-sin(af*(i+1))*cos(af*j)+posx;
			normal[k+13]=-sin(-af*(j))+posy;
			normal[k+14]=-cos(af*(i+1))*cos(af*j)+posz;
			normal[k+15]=-sin(af*(i+1))*cos(af*(j+1))+posx;
			normal[k+16]=-sin(-af*(j+1))+posy;
			normal[k+17]=-cos(af*(i+1))*cos(af*(j+1))+posz;
            
			texB[l]=wangulo*(i);
			texB[l+1]=wangulo*(j);
			texB[l+2]=wangulo*(i+1);
			texB[l+3]=wangulo*(j);
			texB[l+4]=wangulo*(i);
			texB[l+5]=wangulo*(j+1);
			texB[l+6]=wangulo*(i);
			texB[l+7]=wangulo*(j+1);
			texB[l+8]=wangulo*(i+1);
			texB[l+9]=wangulo*(j);
			texB[l+10]=wangulo*(i+1);
			texB[l+11]=wangulo*(j+1);
			l+=12;
			k+=18;
		}
	}
	res[0]=vertexB;
	res[1]=normal;
	res[2]=texB;
	return res;
}


float** cilindroExt( float altura, float raio, int resolucao,float posx, float posy, float posz,float*norm,float*tex)
{
	float** res = (float**) malloc(3*sizeof(float*));
	float angulo = (M_PI)*2/resolucao;
	int i,j=0,k=0;
	float* vertexB = (float*)malloc((resolucao*18)*sizeof(float));
	float* normal = (float*)malloc((resolucao*18)*sizeof(float));
	float* texB = (float*)malloc((resolucao*12)*sizeof(float));
    float wangulo=1/resolucao;
	for(i=0;i<resolucao;i++)
    {
        vertexB[j]=raio*sin(angulo*i)+posx;
		vertexB[j+1]=-altura/2+posy;
		vertexB[j+2]=raio*cos(angulo*i)+posz;
        vertexB[j+3]=raio*sin(angulo*(i+1))+posx;
		vertexB[j+4]=-altura/2+posy;
		vertexB[j+5]=raio*cos(angulo*(i+1))+posz;
        vertexB[j+6]=raio*sin(angulo*i)+posx;
		vertexB[j+7]=altura/2+posy;
		vertexB[j+8]=raio*cos(angulo*i)+posz;
        
		normal[j]=raio*sin(angulo*i);
		normal[j+1]=0;
		normal[j+2]=raio*cos(angulo*i);
		normal[j+3]=raio*sin(angulo*(i+1));
		normal[j+4]=0;
		normal[j+5]=raio*cos(angulo*(i+1));
		normal[j+6]=raio*sin(angulo*i);
		normal[j+7]=0;
		normal[j+8]=raio*cos(angulo*i);
		
		texB[k]=wangulo*i;
		texB[k+1]=0;
		texB[k+2]=wangulo*(i+1);
		texB[k+3]=0;
		texB[k+4]=wangulo*i;
		texB[k+5]=1;
		k+=6;
		j+=9;
    }
	for(i=0;i<resolucao;i++)
    {
        vertexB[j]=raio*sin(angulo*(i+1))+posx;
		vertexB[j+1]=-altura/2+posy;
		vertexB[j+2]=raio*cos(angulo*(i+1))+posz;
        vertexB[j+3]=raio*sin(angulo*(i+1))+posx;
		vertexB[j+4]=altura/2+posy;
		vertexB[j+5]=raio*cos(angulo*(i+1))+posz;
        vertexB[j+6]=raio*sin(angulo*i)+posx;
		vertexB[j+7]=altura/2+posy;
		vertexB[j+8]=raio*cos(angulo*i)+posz;
        
		normal[j]=raio*sin(angulo*(i+1));
		normal[j+1]=0;
		normal[j+2]=raio*cos(angulo*(i+1));
		normal[j+3]=raio*sin(angulo*(i+1));
		normal[j+4]=0;
		normal[j+5]=raio*cos(angulo*(i+1));
		normal[j+6]=raio*sin(angulo*i);
		normal[j+7]=0;
		normal[j+8]=raio*cos(angulo*i);
		
		texB[k]=wangulo*(i+1);
		texB[k+1]=0;
		texB[k+2]=wangulo*(i+1);
		texB[k+3]=1;
		texB[k+4]=wangulo*i;
		texB[k+5]=1;
		k+=6;
		j+=9;
	}
	res[0]=vertexB;
	res[1]=normal;
	res[2]=texB;
	return res;
    
}

float** cilindroInt( float altura, float raio, int resolucao, float posx, float posy, float posz,float*norm,float*tex)
{
	float** res = (float**) malloc(3*sizeof(float*));
	float angulo = (M_PI)*2/resolucao;
	int i,j=0,k=0;
	float* vertexB = (float*)malloc((resolucao*18)*sizeof(float));
	float* normal = (float*)malloc((resolucao*18)*sizeof(float));
    float* texB = (float*)malloc((resolucao*12)*sizeof(float));
    float wangulo=1/resolucao;
	for(i=0;i<resolucao;i++)
    {
        
        vertexB[j]=raio*sin(angulo*(i+1))+posx;
		vertexB[j+1]=-altura/2+posy;
		vertexB[j+2]=raio*cos(angulo*(i+1))+posz;
		vertexB[j+3]=raio*sin(angulo*i)+posx;
		vertexB[j+4]=-altura/2+posy;
		vertexB[j+5]=raio*cos(angulo*i)+posz;
        vertexB[j+6]=raio*sin(angulo*i)+posx;
		vertexB[j+7]=altura/2+posy;
		vertexB[j+8]=raio*cos(angulo*i)+posz;
        
        vertexB[j+9]=raio*sin(angulo*(i+1))+posx;
		vertexB[j+10]=altura/2+posy;
		vertexB[j+11]=raio*cos(angulo*(i+1))+posz;
		vertexB[j+12]=raio*sin(angulo*(i+1))+posx;
		vertexB[j+13]=-altura/2+posy;
		vertexB[j+14]=raio*cos(angulo*(i+1))+posz;
        vertexB[j+15]=raio*sin(angulo*i)+posx;
		vertexB[j+16]=altura/2+posy;
		vertexB[j+17]=raio*cos(angulo*i)+posz;
        
		normal[j]=raio*sin(angulo*(i+1));
		normal[j+1]=0;
		normal[j+2]=raio*cos(angulo*(i+1));
		normal[j+3]=raio*sin(angulo*i);
		normal[j+4]=0;
		normal[j+5]=raio*cos(angulo*i);
		normal[j+6]=raio*sin(angulo*i);
		normal[j+7]=0;
		normal[j+8]=raio*cos(angulo*i);
		normal[j+9]=raio*sin(angulo*(i+1));
		normal[j+10]=0;
		normal[j+11]=raio*cos(angulo*(i+1));
		normal[j+12]=raio*sin(angulo*(i+1));
		normal[j+13]=0;
		normal[j+14]=raio*cos(angulo*(i+1));
		normal[j+15]=raio*sin(angulo*i);
		normal[j+16]=0;
		normal[j+17]=raio*cos(angulo*i);
        
		texB[k]=wangulo*(i+1);
		texB[k+1]=0;
		texB[k+2]=wangulo*i;
		texB[k+3]=0;
		texB[k+4]=wangulo*i;
		texB[k+5]=1;
		texB[k+6]=wangulo*(i+1);
		texB[k+7]=1;
		texB[k+8]=wangulo*(i+1);
		texB[k+9]=0;
		texB[k+10]=wangulo*i;
		texB[k+11]=1;
		k+=12;
		j+=18;
	}
	res[0]=vertexB;
	res[1]=normal;
	res[2]=texB;
	return res;
    
}

float** cone(float raio,float altura,int resolucao, float posx, float posy, float posz,float*norm,float*tex){
	float** res = (float**) malloc(3*sizeof(float*));
	int i=0,j=0,k=0;
	float angulo = M_PI*2/100;
	float* vertexB = (float*)malloc((resolucao*18)*sizeof(float));
	float* normal = (float*)malloc((resolucao*18)*sizeof(float));
	float* texB = (float*)malloc((resolucao*12)*sizeof(float));
	float wangulo=1/resolucao,lado =sqrtf(raio*raio+altura*altura), hraio=raio/(lado+raio);
	for(i=0;i<resolucao;i++)
    {
        vertexB[j]=raio*sin(angulo*i)+posx;
		vertexB[j+1]=posy;
		vertexB[j+2]=raio*cos(angulo*i)+posz;
        vertexB[j+3]=raio*sin(angulo*(i+1))+posx;
		vertexB[j+4]=posy;
		vertexB[j+5]=raio*cos(angulo*(i+1))+posz;
        vertexB[j+6]=0+posx;
		vertexB[j+7]=altura+posy;
		vertexB[j+8]=0+posz;
        
		normal[j]=sin(angulo*i);
		normal[j+1]=raio/lado;
		normal[j+2]=cos(angulo*i);
		normal[j+3]=sin(angulo*(i+1));
		normal[j+4]=raio/lado;
		normal[j+5]=cos(angulo*(i+1));
		normal[j+6]=sin(angulo*(i+0.5));
		normal[j+7]=raio/lado;
		normal[j+8]=cos(angulo*(i+0.5));
        
		texB[k]=wangulo*i;
		texB[k+1]=hraio;
		texB[k+2]=wangulo*(i+1);
		texB[k+3]=hraio;
		texB[k+4]=1;
		texB[k+5]=1;
		k+=6;
		j+=9;
    }
	
	for(i=0;i<resolucao;i++)
	{
		vertexB[j]=raio*sin(angulo*(i+1))+posx;
		vertexB[j+1]=posy;
		vertexB[j+2]=raio*cos(angulo*(i+1))+posz;
        vertexB[j+3]=raio*sin(angulo*i)+posx;
		vertexB[j+4]=posy;
		vertexB[j+5]=raio*cos(angulo*i)+posz;
        vertexB[j+6]=0+posx;
		vertexB[j+7]=posy;
		vertexB[j+8]=0+posz;
        
		normal[j]=0;
		normal[j+1]=-1;
		normal[j+2]=0;
		normal[j+3]=0;
		normal[j+4]=-1;
		normal[j+5]=0;
		normal[j+6]=0;
		normal[j+7]=-1;
		normal[j+8]=0;
        
		texB[k]=wangulo*(i+1);
		texB[k+1]=hraio;
		texB[k+2]=wangulo*i;
		texB[k+3]=hraio;
		texB[k+4]=0;
		texB[k+5]=0;
		k+=6;
		j+=9;
	}
	res[0]=vertexB;
	res[1]=normal;
	res[2]=texB;
	return res;
}

float** topo( float raioExt, float raioInt, int resolucao,float posx, float posy, float posz,float*norm,float*tex)
{
	float** res = (float**) malloc(3*sizeof(float*));
	int i,j=0,k=0;
	float angulo=M_PI*2/resolucao;
	float* vertexB = (float*)malloc((resolucao*18)*sizeof(float));
	float* normal = (float*)malloc((resolucao*18)*sizeof(float));
	float* texB = (float*)malloc((resolucao*12)*sizeof(float));
	float wangulo=1/resolucao;
	for(i=0;i<resolucao;i++)
	{
		
        vertexB[j]=raioExt*sin(angulo*(i+1))+posx;
		vertexB[j+1]=0+posy;
		vertexB[j+2]=raioExt*cos(angulo*(i+1))+posz;
        vertexB[j+3]=raioExt*sin(angulo*i)+posx; 
		vertexB[j+4]=0+posy;
		vertexB[j+5]=raioExt*cos(angulo*i)+posz;
		vertexB[j+6]=raioInt*sin(angulo*i)+posx;
		vertexB[j+7]=0+posy;
		vertexB[j+8]=raioInt*cos(angulo*i)+posz;
        
		normal[j]=0;
		normal[j+1]=1;
		normal[j+2]=0;
		normal[j+3]=0;
		normal[j+4]=1;
		normal[j+5]=0;
		normal[j+6]=0;
		normal[j+7]=1;
		normal[j+8]=0;
        
		texB[k]=wangulo*(i+1);
		texB[k+1]=1;
		texB[k+2]=wangulo*i;
		texB[k+3]=1;
		texB[k+4]=wangulo*i;
		texB[k+5]=0;
		k+=6;
		j+=9;
    }
	for(i=0;i<resolucao;i++)
	{
        
        vertexB[j]=raioInt*sin(angulo*(i+1))+posx;
		vertexB[j+1]=posy;
		vertexB[j+2]=raioInt*cos(angulo*(i+1))+posz;
		vertexB[j+3]=raioExt*sin(angulo*(i+1))+posx;
		vertexB[j+4]=posy;
		vertexB[j+5]=raioExt*cos(angulo*(i+1))+posz;
		vertexB[j+6]=raioInt*sin(angulo*i)+posx;
		vertexB[j+7]=posy;
		vertexB[j+8]=raioInt*cos(angulo*i)+posz;
        
		normal[j]=0;
		normal[j+1]=1;
		normal[j+2]=0;
		normal[j+3]=0;
		normal[j+4]=1;
		normal[j+5]=0;
		normal[j+6]=0;
		normal[j+7]=1;
		normal[j+8]=0;
        
		texB[k]=wangulo*(i+1);
		texB[k+1]=0;
		texB[k+2]=wangulo*(i+1);
		texB[k+3]=1;
		texB[k+4]=wangulo*i;
		texB[k+5]=0;
		k+=6;
		j+=9;
    }
	res[0]=vertexB;
	res[1]=normal;
	res[2]=texB;
	return res;
}
