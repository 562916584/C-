// Card.h: interface for the CCard class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CARD_H__5838F85A_0F00_4BE5_B388_8C9F6C4FAE9F__INCLUDED_)
#define AFX_CARD_H__5838F85A_0F00_4BE5_B388_8C9F6C4FAE9F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "cv.h"
#include "highgui.h"
#include "StillObj.h"
/**
* @class CCard
* @brief  ��Ƭ��
*
* ��Ƭ�� �����������ֲ��Ŀ�Ƭ ������ȴʱ�䡢ֲ�������������Ϳ�Ƭͼ��Ļ���
*/
class CCard
{
public:
	/**
	* @brief Init
	*
	*��ʼ����Ƭλ�á���ȴʱ�䡢����
	* @param ��
	*
	*/
	void Init();
	/**
	* @brief Draw
	*
	*������״̬�Ŀ�Ƭ�滭������ͼ��  ��һ����ȴ״̬ �ڶ�����ȴ������������� ��������ȴ���������������
	* @param bg ����ͼָ��
	* @param sunnum ������
 	*/
	void Draw(IplImage* bg, int sunnum);
	CCard();
	virtual ~CCard();
	/**
	* @brief Getm_cost
	*
	*��ȡ��Ƭ�Ļ���������
	* @param num �ڼ��ſ�Ƭ
	* @return int ���ؿ�Ƭ����ֲ��Ļ���������
	*/
	int Getm_cost(int num);
	CStillObj m_card[6];   /**< ���ſ�Ƭ��������� */
private:
	int m_cost[6];        /**< ���ſ�Ƭ�Ļ����� */
};

#endif // !defined(AFX_CARD_H__5838F85A_0F00_4BE5_B388_8C9F6C4FAE9F__INCLUDED_)

