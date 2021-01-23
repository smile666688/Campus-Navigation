#pragma once
#include"ljjz.h"
/************************************************/
/*	��С�������㷨  �ļ�����MinTree.h			*/	
/************************************************/
typedef struct edgedate
{
	int begin, end;			/*begin endΪ�߶������*/
	int length;				/*�߳���*/
}edge;

/************************************************/
/*	�������ܣ�prime�㷨������С������			*/
/*	�����������ڽӾ���g��������tree				*/
/*	��������ֵ����								*/
/************************************************/
void prim(Mgraph* g, edge tree[M - 1]);

/********************************************************/
/*	�������ܣ���ͼg�е��ڽӾ����ж�ȡ���б���Ϣ			*/
/*	����������������edges;�ڽӾ���g						*/
/*	��������ֵ����										*/
/********************************************************/
void GetEdge(Mgraph g, edge edges[]);

/********************************************************/
/*	�������ܣ�kruskal�����С�������㷨					*/
/*	�����������ڽӾ���g									*/
/*	��������ֵ����										*/
/********************************************************/
void kruskal(Mgraph g);