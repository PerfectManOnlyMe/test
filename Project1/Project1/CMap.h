//-----------------------------------------------
// ����  2019/10/09
// ͼ �ڵ�
//-----------------------------------------------
#pragma once

#include "Node.h"
#include <vector>
using namespace std;

class CMap
{
public:
	CMap(int capacity);
	~CMap();

	bool addNode(Node *pNode);    //��ͼ�м��붥�㣨��㣩
	void restNode();              //���ö���
	bool setValueToMatrixForDirectGraph(int row, int col, int val = 1);  //Ϊ����ͼ�����ڽӾ���
	bool setValueToMatrixForUnDirectGraph(int row, int col, int val = 1);// Ϊ����ͼ�����ڽӾ���

	void printMatrix();           //��ӡ�ڽӾ���

	void depthFirstTraverse(int nodeIndex);   //������ȱ���
	void breadthFirstTraverse(int nodeIndex); //������ȱ���

private:

	bool getValueFromMatrix(int row, int col, int &val);  //�Ӿ����л�ȡȨֵ
	void breadthFirstTraverseImpl(vector<int> preVec);    //������ȱ���ʵ�ֺ���

private:
	int m_iCapacity;   //ͼ�����������ɵĶ�����
	int m_iNodeCount;  //�Ѿ���ӵĶ��㣨��㣩����
	Node *m_pNodeArray;//������Ŷ�������
	int *m_pMatrix;    //��������ڽӾ���

};

