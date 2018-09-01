// Sun.h: interface for the CSun class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SUN_H__C5E0AD02_F834_499D_A93F_E59B1FDD75D1__INCLUDED_)
#define AFX_SUN_H__C5E0AD02_F834_499D_A93F_E59B1FDD75D1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "StillObj.h"
/**
* @class CSun
* @brief  ̫��
*  ̫����
*
*/
class CSun : public CStillObj
{
public:
	/**
	* @brief Move
	*
	* ̫���ƶ�����
	* @param ��
	*
	*/
	void Move();
	CSun();
	virtual ~CSun();
	/**
	* @brief Changem_isGet
	*
	* �ı��Ƿ�ʰ��
	* @param isget �Ƿ�ʰ��
	*
	*/
	void Changem_isGet(bool isGet);
	/**
	* @brief Changem_speedx
	*
	* �ı��ƶ��ٶ�
	* @param speedx �ٶ�
	*
	*/
	void Changem_speedx(int speedx);
	/**
	* @brief Changem_speedy
	*
	* �ı��ƶ��ٶ�
	* @param speedy �ٶ�
	*
	*/
	void Changem_speedy(int speedy);
	/**
	* @brief Changem_isEnd
	*
	* �ı��Ƿ����
	* @param isEnd ����
	*
	*/
	bool Getm_isEnd();
	/**
	* @brief Changem_aimy
	*
	* �ı�Ŀ��λ��
	* @param aimy λ��
	*
	*/
	void Changem_aimy(int aimy);
	/**
	* @brief Changem_isMove
	*
	* �ı��Ƿ��ƶ�
	* @param aimy Ŀ��λ��
	*
	*/
	void Changem_isMove(bool Move);
	int m_speedx, m_speedy;                     /**< ̫���ƶ��ٶ� */
	int m_aimy;                                /**< ̫��Ŀ��� */
	bool m_isMove;                             /**< �Ƿ��ƶ� */
	bool m_isGet;                              /**< �Ƿ�ʰ�� */
	bool m_isEnd;                              /**< �Ƿ���� */
};

#endif // !defined(AFX_SUN_H__C5E0AD02_F834_499D_A93F_E59B1FDD75D1__INCLUDED_)

