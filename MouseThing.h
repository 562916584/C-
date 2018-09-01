// MouseThing.h: interface for the CMouseThing class.
//
//////////////////////////////////////////////////////////////////////
#include "cv.h"
#include "highgui.h"
#include "Scoop.h"
#include "Card.h"
#if !defined(AFX_MOUSETHING_H__55B922DB_D501_4A26_B60A_CA003D5AFBC0__INCLUDED_)
#define AFX_MOUSETHING_H__55B922DB_D501_4A26_B60A_CA003D5AFBC0__INCLUDED_
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
class CGame;
/**
* @class CMouseThing
* @brief  ������¼�
*����������в�����������Ӧʱ��ı�״̬��
*
*/
class CMouseThing
{
public:
	/**
	* @brief CheckPos
	*
	* ����Ƿ�Խ�� 
	* @param ��
	*
	*/
	void CheckPos();
	/**
	* @brief ChnageImg
	*
	* �ı�ͼƬ
	* @param ��
	*
	*/
	void ChangeImg();
	CMouseThing();
	virtual ~CMouseThing();

	/**
	* @brief MouseOn
	*
	* ����¼�����
	* @param event �¼�����
	* @param x ���λ��x
	* @param y ���λ��y
	* @param flags �����¼�����
	* @param param �յ�ָ��
	*/
	static void MouseOn(int event, int x, int y, int flags, void* param);
	/**
	* @brief MouseComeOn
	*
	* ����ʼ�����ʱ��ϵͳ
	* @param game CGame��ָ��
	*
	*/
	void MouseComeOn(CGame* game);                 //��ʼ��
	/**
	* @brief PosIJtoXY
	*
	* ij����ת��ΪXY����
	* @param i i����
	* @param j j����
	*/
	virtual CvPoint PosIJtoXY(int i, int j);      //ij����ת��Ϊxy����.
	/**
	* @brief PosXYtoIJ
	*
	* xy����ת��Ϊij����
	* @param x ��������x
	* @param y ��������y
	*/
	virtual CvPoint PosXYtoIJ(int x, int y);        //xy����ת��Ϊij����.
	/**
	* @brief CheckMouseCard
	*
	* ����Ƿ������ֲ ��ֲ״̬��ת�� �л�ֲ��ͼƬ
	* @param x ����λ��x
	* @param y ����λ��y
	* @return bool true�л� falseû�л�
	*/
	bool CheckMouseCard(int x, int y);                //��ֲ״̬ת������.
	CGame* m_game;                                    /**< ��Ϸ����ָ�� */
	CScoop* m_scoop;                                  /**< ����ָ�� */
	CCard* m_cards;                                   /**< ����ָ�� */
	/**
	* @brief Getm_isplant
	*
	* ����Ƿ�����ֲ״̬
	* @param ��
	* @return bool true����ֲ״̬ false������ֲ״̬
	*/
	bool Getm_isplant();
private:
	bool m_isplant;                                  //�Ƿ�����ֲ״̬. /**< �Ƿ�����ֲ״̬ */
	int m_planttype;                                 //��ֲ��ֲ������. /**< ��ֲ��ֲ������ */
};


#endif // !defined(AFX_MOUSETHING_H__55B922DB_D501_4A26_B60A_CA003D5AFBC0__INCLUDED_)

