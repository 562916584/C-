// Game.h: interface for the CGame class.
//
//////////////////////////////////////////////////////////////////////
#include "cv.h"
#include "highgui.h"
#include "Bg.h"
#include "Ball.h"
#include "Card.h"
#include "Scoop.h"
#include "MouseThing.h"
#include "StillObj.h"
#include "ActiveObj.h"
#include "Factory.h"
#include "Sun.h"
#include <vector>
using namespace std;

#if !defined(AFX_GAME_H__229A557E_913E_41AC_8146_55EA7035A1EE__INCLUDED_)
#define AFX_GAME_H__229A557E_913E_41AC_8146_55EA7035A1EE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
/**
* @class CGame
* @brief  ��Ϸ������
*
* ��Ϸ������ �ۺϿ����������������
*/
class CGame
{
public:
	/**
	* @brief CheckEnd
	*
	* �����Ϸ�Ƿ��Ѿ����� �����˾͸ı���Ϸ���̱���
	* @param ��
	*
	*/
	void CheckEnd();
	/**
	* @brief Init
	*
	* ����ʼ��Ϸ���� ��ɶ�����ļ��غͱ����ĳ���ʼ
	* @param ��
	*
	*/
	void Init();
	/**
	* @brief SortObj
	*
	* ����Ϸ����������� λ��Զ�����ں��� λ�ý�������ǰ�� 
	* @param ��
	*
	*/
	void SortObj();
	/**
	* @brief CheckAttack
	*
	* �����������Ĺ�����Ϊ ��ʬת������״̬ ֲ�﹥����ʬ ��ʬ����ֲ�� �ӵ�������ʬ ը��������ʬ �ѹϹ�����ʬ
	* @param ��
	*
	*/
	void CheckAttack();
	/**
	* @brief SpawnZombies
	*
	* ���ù���������ʬ������¼ÿ�н�ʬ����Ŀ
	* @param ��
	*
	*/
	void SpawnZombies();
	/**
	* @brief CountText
	*
	* ��¼ʰ���������� �͵÷�����
	* @param ��
	*
	*/
	void CountText();
	/**
	* @brief WaitAndQuit
	*
	* ������Ϸʱ���ESC�˳���Ϸ �ո���ͣ��Ϸ
	* @param ��
	*
	*/
	bool WaitAndQuit();
	/**
	* @brief MoveObj
	*
	* ̫���ƶ����� ʹ������������ֱ�ƶ� ���ҵ���֮��һ��ʱ���ɾ������
	* @param ��
	*
	*/
	void MoveObj();
	/**
	* @brief CreatSun
	*
	* �������� ������ʱ�����λ�ò������� ����ʱ���������
	* @param ��
	*
	*/
	void CreatSun();
	/**
	* @brief CreatBall
	*
	* �����ӵ� ��ȡ�ӵ������Ͳ���Ƿ��� normal��ͨ�ӵ� ice�����ӵ�
	* @param ��
	*
	*/
	void CreatBall();
	/**
	* @brief ClearObj
	*
	* ���������Ϸ��� ����ֲ�� �ӵ� ̫��
	* @param ��
	*
	*/
	void ClearObj();
	CGame();
	virtual ~CGame();
	/**
	* @brief CreatPlants
	*
	* ���ù�������ֲ�� ������ɿ۳����� ��ǵ�ͼ
	* @param num ֲ����
	* @param i ֲ��λ������
	* @param j ֲ��λ������
	*/
	void CreatPlants(int num, int i, int j);
	CCard m_cards;                          //��Ƭϵͳ. /**< ��Ƭϵͳ */
	CScoop m_scoop;                         //����.    /**< ���� */
	CBg m_bg;                               //����.    /**< ����ͼ */
	CStillObj m_plant;                      //��ֲʱ���ͼƬ./**< ֲ��ʵͼ */
	CStillObj m_plant_write;                //��ֲʱ���Ӱ��./**< ֲ����ͼ */
	/**
	* @brief CheckPos
	*
	* �ж������Ƿ���ֲ�� 
	* @param i ֲ��λ������
	* @param j ֲ��λ������
	* @return bool �����Ƿ���ֲ�� true��ֲ�� false��ֲ��
	*/
	bool CheckPos(int i, int j);             //�жϸ������Ƿ���ֲ��.
	/**
	* @brief GetSun
	*
	* ʰ�����⺯��
	* @param x ����������λ��
	* @param y ����������λ��
	*/
	void GetSun(int x, int y);               //ʰ�����⺯��.
	/**
	* @brief Time
	*
	* ÿ֡���õļ�ʱ������ ������ٸ��������Լ���ʱ�亯�����ƶ����� �����ӵ�������
	* @param ��
	*/
	void Time();                            //ÿ֡���õļ�ʱ������.
	/**
	* @brief Draw
	*
	* ���е�gameobj����Ļ��ƺ���
	* @param ��
	* 
	*/
	void Draw();                            //����gameobj�Ļ���.
	/**
	* @brief Run
	*
	* ��Ϸ���к���
	* @param ��
	* 
	*/
	void Run();                             //��Ϸ���к���.
	/**
	* @brief Getm_sunnum
	*
	* ������������
	* @param ��
	* @return int ��������
	*/
	int Getm_sunnum();
	/**
	* @brief Chnagem_type
	*
	* �ı���Ϸ����״̬
	* @param type ��Ϸ����״̬ 1Ϊ��ʼ 2Ϊ������ 3Ϊ����
	* 
	*/
	void Changem_type(int type);
	/**
	* @brief Getm_gametype
	*
	* �����Ϸ����״̬
	* @param ��
	* @return ������Ϸ��Ϸ����״̬ 
	*/
	int Getm_gametype();
	/**
	* @brief Changem_musiccount
	*
	* �ı��������Ƶı���
	* @param count �������Ʋ���
	*
	*/
	void Changem_musiccount(int count);
	/**
	* @brief Chnagem_clearx
	*
	* �ı����λ��x
	* @param clearx ���λ��x
	*
	*/
	void Changem_clearx(int clearx);
	/**
	* @brief Chnagem_cleary
	*
	* �ı����λ��y
	* @param cleary ���λ��y
	*
	*/
	void Chnagem_cleary(int cleary);
private:
	IplImage* m_startimg;                   //��ʼ����ͼƬ.     /**< ��ʼ����ͼƬ */
	IplImage* m_endimg;                    //��������ͼƬ.      /**< ��������ͼƬ */
	int m_waittime;                         //ÿ֡ʱ��          /**< ÿ֡ʱ�� */
	int m_pretime;                          //��¼��֡ʱ��.     /**< ��¼��֡ʱ�� */
	int m_sunnum;                           //��������.         /**< �������� */
	int m_mpt[9][5];                        //����.             /**< ���� */
	int m_zomnum[5];                        //ÿ�н�ʬ����.     /**< ÿ�н�ʬ���� */
	int m_clearx;                                               /**< ���λ��X */
	int m_cleary;                           //���������λ��.   /**< ���λ��Y */
	int m_score;                                                /**< �õ��ķ���ֵ */
	int m_suntime;                          //����̫����ʱ��.   /**< ����̫���ļ�ʱ�� */
	int m_musiccount;                       //���ֲ������Ʋ���.  /**< ���ֲ������Ʋ��� */
	int m_gametype;                         //��Ϸ��ǰ����.     /**< ��Ϸ���еĻ����� */
	char m_sunstr[10];                      //̫����Ŀ�ַ�����ʽ.  /**< ̫����Ŀ�ַ�����ʽ */
	char m_levelstr[10];                    //�ؿ��ַ�����ʽ.    /**< �ؿ��ַ�����ʽ */
	char m_scorestr[10];                    //�����ַ�����ʽ.     /**< �����ַ�����ʽ */
	CvFont m_sunfont;                       //��ʾ̫����Ŀ������. /**< ��ʾ̫����Ŀ������ */
	CvFont m_level;                         //�ؿ�.              /**< �ؿ� */
	CMouseThing m_mouse;                    //����¼�ϵͳ.      /**< ����¼�ϵͳ */
	CFactory m_factory;                     //��������.          /**< ����ϵͳ */
	vector<CActiveObj* > m_gameobj;         //���е�actobj.      /**< ���е�actobj��� */ 
	vector<CBall> m_ball;                   //���е��ӵ�.        /**< ���е��ӵ� */
	vector<CSun> m_sun;                     //���е�̫��.        /**< ���е�̫�� */
};

#endif // !defined(AFX_GAME_H__229A557E_913E_41AC_8146_55EA7035A1EE__INCLUDED_)

