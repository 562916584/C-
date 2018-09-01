// GameObject.h: interface for the CGameObject class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_GAMEOBJECT_H__ED3CFCCE_7C47_46F6_B3BE_B3DB2BB63760__INCLUDED_)
#define AFX_GAMEOBJECT_H__ED3CFCCE_7C47_46F6_B3BE_B3DB2BB63760__INCLUDED_
#include "cv.h"
#include "highgui.h"


#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
/**
* @class CGameObject
* @brief  ��Ϸ�����
*
* ��������Ϸ����Ļ���
*/
class CGameObject
{
public:

	CGameObject();
	virtual ~CGameObject();
	/**
	* @brief Time
	*
	* ��ʱ������
	* @param ��
	*
	*/
	virtual void Time();                          //��ʱ������.
	/**
	* @brief Timething
	*
	* ��ʱ���¼�
	* @param ��
	*
	*/
	virtual void Timething();                     //��ʱ���¼�.
	/**
	* @brief Draw
	*
	* �������ͼ�滭������ͼ��
	* @param bg ����ͼָ��
	*
	*/
	virtual void Draw(IplImage* bg);              //���ƺ���.
	/**
	* @brief SetTimer
	*
	* ����ʼʱ���ʱ�����Ʊ���
	* @param time ʱ�����
	*
	*/
	virtual void SetTimer(int time);              //��ʼ����ʱ����.
	/**
	* @brief SetPos
	*
	* ����ʼλ��
	* @param i  λ������
	* @param j  λ������
	*
	*/
	virtual void SetPos(int i, int j);           //��.

	IplImage *m_img;                              //��ҪͼƬ.   /**< ����Լ���ͼƬ */
	/** @brief m_position */
	struct{                                       //λ��.
		int i, j; /**< ����λ�ýṹ�� */
		int x, y; /**< ����λ�ýṹ�� */
	}m_Position;
	/**
	* @brief Changem_timer
	*
	* �ı�ʱ�����
	* @param time �ı��ֵ
	*
	*/
	void Changem_timer(int timer);
	/**
	* @brief Getm_timer
	*
	* ��ȡʱ�������ֵ
	* @param ��
	* @return int ����ʱ�������ֵ
	*/
	int Getm_timer();
	/**
	* @brief Getm_timerate
	*
	* ��ȡ��������
	* @param ��
	* @return int ��ʱ�������ֵ
	*/
	int Getm_timerate();
protected:
	int m_timer;                                  //��ʱ��.       /**< ��ʱ�� */
	int m_timerate;                               //��ʱ�����.    /**< ��ʱ����� */

};

#endif // !defined(AFX_GAMEOBJECT_H__ED3CFCCE_7C47_46F6_B3BE_B3DB2BB63760__INCLUDED_)

