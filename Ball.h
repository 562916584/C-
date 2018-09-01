// Ball.h: interface for the CBall class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BALL_H__8F73354A_9D03_465E_92C5_9492E53ADBA2__INCLUDED_)
#define AFX_BALL_H__8F73354A_9D03_465E_92C5_9492E53ADBA2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "StillObj.h"
#include <string.h>
using namespace std;
/**
* @class CBall
* @brief �ӵ���
*
* CBall  �Ǿ�̬��Ϸ����������� ����������ӵ�
*/
class CBall : public CStillObj
{
public:
	/**
	* @brief Setspeed
	*
	*����ʼ�ٶ�
	* @param  speed=10��
	* 
	*/
	void Setspeed(int speed = 10);
	/**
	* @brief Move
	*
	*�ƶ�����
	* @param ��
	* 
	*/
	void Move();
	/**
	* @brief SetType
	*
	*�ı������״̬
	* @param  type  ״̬��
	* 
	*/
	void SetType(string type);
	CBall();
	virtual ~CBall();
	/**
	* @brief Getm_isdead
	*
	*�������״̬
	* @param ��
	* @return int  ��������״ֵ̬
	*/
	int Getm_dead();
	/**
	* @brief Changem_dead
	*
	*�ı��ӵ�����״̬����
	* @param dead ����״̬
	* 
	*/
	void Changem_dead(int dead);
	/**
	* @brief Getm_type
	*
	*����ӵ�����
	* @param ��
	* @return int �����ӵ����� 1Ϊ��ͨ�ӵ� 2Ϊ���ӵ�
	*/
	int Getm_type();
private:
	int m_speed;    /**< �ӵ��ٶ� */
	int m_dead;     /**< �Ƿ����� */
	int m_type;     /**< �ӵ����� 1Ϊ��ͨ�ӵ� 2Ϊ�����ӵ� */
};

#endif // !defined(AFX_BALL_H__8F73354A_9D03_465E_92C5_9492E53ADBA2__INCLUDED_)

