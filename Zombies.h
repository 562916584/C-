// Zombies.h: interface for the CZombies class.
//
//////////////////////////////////////////////////////////////////////
#include "cv.h"
#include "highgui.h"
#include "vector"
using namespace std;

#if !defined(AFX_ZOMBIES_H__EFA90B53_8AEE_4F68_B5ED_04BC69DFC408__INCLUDED_)
#define AFX_ZOMBIES_H__EFA90B53_8AEE_4F68_B5ED_04BC69DFC408__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "ActiveObj.h"
/**
* @class CZombies
* @brief  ��ʬ��
*
*
*/
class CZombies : public CActiveObj
{
public:
	/**
	* @brief TakeDamage
	*
	* �˺�����
	* @param damage �˺�ֵ
	*
	*/
	virtual void TakeDamage(int damage);
	/**
	* @brief SetAttack
	*
	* ��״̬��Ϊ����
	* @param ��
	*
	*/
	void SetAttack();
	/**
	* @brief SetAnimType
	*
	* �ı����״̬
	* @param str �����״̬
	*
	*/
	virtual void SetAnimType(string str);
	/**
	* @brief Draw
	*
	* ��ͼ��ʬ
	* @param bg ����ͼָ��
	*
	*/
	virtual void Draw(IplImage* bg);
	CZombies();
	virtual ~CZombies();
	vector <IplImage* > m_Move_Img_my;        /**< ��ʬ�����߶���.(�ر��) */
	vector <IplImage* > m_Attack_Img_my;      /**< ��ʬ�Ĺ�������.(�ر�� */
	vector <IplImage* > m_Bomb_Img;            /**< ��ʬ�ı�ը�������� */
};

#endif // !defined(AFX_ZOMBIES_H__EFA90B53_8AEE_4F68_B5ED_04BC69DFC408__INCLUDED_)

