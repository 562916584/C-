// Factory.h: interface for the CFactory class.
//
//////////////////////////////////////////////////////////////////////
#include "ActiveObj.h"
#include "PeaShooter.h"
#include "IceShooter.h"
#include "SunFlower.h"
#include "Pumkin.h"
#include "Cherrybomb.h"
#include "Zombies.h"
#include "HatZombie.h"
#include "DoorZombie.h"
#include "DrumZombie.h"
#include "Nut.h"
#include "string"
#include"Chomper.h"
using namespace std;

#if !defined(AFX_FACTORY_H__E848F3C0_E4B8_47E4_83E1_D160BE3E690A__INCLUDED_)
#define AFX_FACTORY_H__E848F3C0_E4B8_47E4_83E1_D160BE3E690A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
/**
* @class CFactory
* @brief  ������
*
* ������ ����ʱ�������ʬ�͸�����ݵ���¼�����ֲ��
*/
class CFactory
{
public:
	/**
	* @brief Init
	*
	* ����ʼ���� ����ʱ�����
	* @param ��
	*
	*/
	void Init();
	/**
	* @brief Spawn
	*
	* ������ʬ���㷨������ʱ���㷨������ʬ
	* @param ��
	* @return CActiveObj ���ز��������ָ��
	*/
	CActiveObj* Spawn();
	/**
	* @brief Creat
	*
	* ����ֲ����Ķ���
	* @param num ֲ����
	* @param i ����
	* @param j ����
	* @return CActiveObj ��������ֲ������ָ��
	*/
	CActiveObj* Creat(int num, int i, int j);
	CFactory();
	virtual ~CFactory();
	/**
	* @brief Getm_spawntime
	*
	* ���ʱ�����
	* @param ��
	* @return int ����ʱ�������ֵ
	*/
	int Getm_spawntime();
private:
	bool m_isp;         /**< ��������ʼ״̬ true����ʼ */
	int m_spawntime;    /**< ����ʱ����� */ 
	int m_spawnrate;    /**< ����ʱ��������� */
	IplImage* m_warnimg;/**< ���涯��ͼƬ */
	IplImage* m_prepare;/**< ׼������ͼƬ */
};

#endif // !defined(AFX_FACTORY_H__E848F3C0_E4B8_47E4_83E1_D160BE3E690A__INCLUDED_)

