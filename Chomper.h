#pragma once
#include "ActiveObj.h"
/**
* @class CChomper
* @brief  ʳ�˻�
*
* ʳ�˻��� CActiveObj������ ����ͼ���ʱ�亯��
*/
class CChomper :
	public CActiveObj
{
public:
	CChomper();
	~CChomper();
	/**
	* @brief Draw
	*
	*��ͼ��������ʳ�˻�����
	* @param bg ����ͼ
	*
	*/
	void Draw(IplImage* bg);
	/**
	* @brief Timething
	*
	*ʱ�亯��
	* @param ��
	*
	*/
	void Timething();
};

